#include <iostream>
#include <iomanip>
#include <vector>

void TestConstructor()
{
	std::cout << "Testing constructors and assignment operator..." << std::endl;
	std::vector<int> v;
	for (int i = 1; i <= 10; ++i) {
		v.push_back(i);
	}
	const std::vector<int> vc(v);
	for (size_t i = 0; i < vc.size(); ++i) {
		std::cout << vc[i] << " ";
	}
	std::cout << std::endl;
	std::vector<int> vv;
	for (int i = 0; i < 10; ++i) {
		vv.push_back(i);
	}
	for (size_t i = 0; i < vv.size(); ++i) {
		std::cout << vv[i] << " ";
	}
	std::cout << std::endl;
	vv = v;
	for (size_t i = 0; i < vv.size(); ++i) {
		std::cout << vv[i] << " ";
	}
	std::cout << std::endl;
}

void TestIterators()
{
	std::cout << "Testing iterators..." << std::endl; 
	std::vector<int> v;
	for (int i = 1; i <= 20; ++i) {
		v.push_back(i);
	}
	for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	const std::vector<int> vc(v);
	for (std::vector<int>::const_iterator it = vc.cbegin(); it != vc.cend(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void TestAccessingMethod()
{
	std::cout << "Testing accessing methods..." << std::endl;
	std::vector<long long> vd;
	for (long long i = 0; i < 50; ++i) {
		vd.push_back(1LL << i);
	}
	for (size_t i = 0; i < vd.size(); ++i) {
		std::cout << vd[i] << std::endl;
	}
	try {
		std::cout << vd.at(100) << std::endl;
	} catch(...) {
		std::cout << "exceptions thrown correctly." << std::endl;
	}
}

void TestPush_Pop()
{

}

int main(int argc, char const *argv[])
{
	TestConstructor();
	TestIterators();
	TestAccessingMethod();
	TestPush_Pop();
	return 0;
}