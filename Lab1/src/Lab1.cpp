// main.cpp
#include "array_list.h"

int main()
{
	ssuds::ArrayList tester;
	tester.append("Bob");
	tester.append("Carl");
	std::cout << "size of tester = " << tester.size() << "\n";	// 2

	return 0;
}