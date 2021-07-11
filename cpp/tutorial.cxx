#include <iostream>

#include "boost_features/boostfun.hpp"

struct MoveTest{
	int a{};
	int b{};
	int c{};
	MoveTest(MoveTest&& v){
		a = v.a;
		b = v.b;
		c = v.c;
		v.a = 0;
		v.b = 0;
		v.c = 0;
	}
	MoveTest(int a = 0, int b = 0, int c = 0)
		: a(a), b(b), c(c)
	{
	}
};

void move_once(MoveTest v){

	std::cout << "v before move: " << v.a << ' ' << v.b << ' ' << v.c << std::endl;
	MoveTest v2(std::move(v));
	std::cout << "v after move: " << v.a << ' ' << v.b << ' ' << v.c << std::endl;
	std::cout << "v2 after move: " << v2.a << ' ' << v2.b << ' ' << v2.c << std::endl;
}

int main()
{
	std::cout << "hello\n";
	auto v = boostfun::get_value(15);
	if(v && *v == 300){
		std::cout << "I have value: " << *v << '\n';
	}

	boostfun::boost_scope_exit();
	if(auto x = 18.5f; x < 15.0f){// x is only visible to if blocks not else block
		std::cout << "x is small: " << x << "\n";
	} else {
		//cannot compile with the following line
		//std::cout << "x is big: " << x "\n";
	}
	MoveTest v1{
		.a = 10,
		.b = 20,
		.c = 30,
	};
	move_once(std::move(v1));
	std::cout << "v1 after move: " << v1.a << ' ' << v1.b << ' ' << v1.c << std::endl;

	//cannot compile with the following line
	//std::cout << "x is big\n" << x;

}
