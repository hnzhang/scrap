#include "boostfun.hpp"
#include <boost/scope_exit.hpp>

namespace boostfun{

boost::optional<int> get_value(int v)
{
	boost::optional<int> ret;
	switch(v){
		case 1:
			ret = 100;
			break;
		case 15:
			ret = v * 20;
			break;
	}
	return ret;
}

void boost_scope_exit()
{
	auto a = new boostfun::A;
	a->greet();
	BOOST_SCOPE_EXIT_ALL(a){
		delete a;
	};
}

}
