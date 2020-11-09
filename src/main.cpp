#include "Prime.h"

int main()
{

	Prime num1, num2;
	std::cout << "Demonstration of setValue(int) and getValue()" << std::endl;
	num1.Prime::setValue(2);
	std::cout << num1.Prime::getValue() << "\n";

	std::cout << "Demonstration of nextPrime()" << std::endl;

	num2 = num1.Prime::nextPrime();
	std::cout << num2.Prime::getValue() << "\n";

	std::cout << "Demonstration of testPrime()" << std::endl;

	bool result = num1.Prime::checkPrime(17);
	std::cout << result << std::endl;

	std::cout << "Demonstration of setValue()" << std::endl;
	num2.Prime::setValue(17);
	std::cout << num2.Prime::getValue() << "\n";

	std::cout << "Demonstration of countBetween" << std::endl;
	int count = num1.Prime::countBetween(num2);
	std::cout << count << "\n";

	std::cout << "Demonstration of isValid" << std::endl;
	num1.setValue(101);
	num2.setValue(49);
	std::cout << "Is " << num1.getValue() << " simple? " << num1.isValid() << std::endl;
	std::cout << "Is " << num2.getValue() << " simple? " << num2.isValid() << std::endl;


	return 0;
}