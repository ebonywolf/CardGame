#include <iostream>
#include <functional>

using namespace std;

template<class ...T>
struct A{
//template<class ...T>
void operator()(T... ){
std::cout<< "yay" <<std::endl;
}

};


int main()
{
    A<string,int> a;
    a("string",0);




	return 0;
}
