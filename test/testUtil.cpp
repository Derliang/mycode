#include <../util/Singleton.hpp>
#include <assert.h>
#include <iostream>
void testSingleton() {
	std::cout<<"start testSingleton .........!"<<std::endl;
	auto i = DL::Singleton<int>::instance();
	i = 5;
	assert(i == 5);
	std::cout<<"testSingleton success!"<<std::endl;
}
int main(){
	testSingleton();

}
