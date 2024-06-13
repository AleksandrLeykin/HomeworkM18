#include <iostream>
#include "User.h"

int main() {
	std::cout << "Hello" << std::endl;
	User ivan{ "Ivan", "vany", "12345" };
	User grisha{ "Grigoriy", "gorsh", "1234" };
	User masha{ "Masha", "maniy", "123" };
	masha.getUserName();

	return 0;
}