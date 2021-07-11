#pragma once

#include <boost/optional.hpp>

#include <iostream>

namespace boostfun{
boost::optional<int> get_value(int);

class B
{
public:
	B(){
	}
	~B(){
		std::cout << "class B dtor\n";
	}
};

///
// Compipler should generate destructor for A;
class A
{
	public :
		A(){};
		void greet() const {
			std::cout << "hello, how are you?\n";
		}

	private:
		B _b;
};

void boost_scope_exit();



}
