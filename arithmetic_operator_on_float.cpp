#include <iostream>

// write a program showing arithmetic operations:
// add, subtract, multiply, and divide & remainder
// using the following variable names and values
// float floatVal1 = 2.55;
// float floatVal2 = 1.77;

int main(){
	float floatVal1 = 2.55;
	float floatVal2 = 1.77;

	std::cout << "\nOperations | Operator | Expression | result" << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
	std::cout << "Add:       |    +     | " << floatVal1 << " + " << floatVal2 << " | " << floatVal1 + floatVal2 << std::endl;
	std::cout << "Subtract:  |    -     | " << floatVal1 << " - " << floatVal2 << " | " << floatVal1 - floatVal2 << std::endl;
	std::cout << "Multiply:  |    *     | " << floatVal1 << " * " << floatVal2 << " | " << floatVal1 * floatVal2 << std::endl;
	std::cout << "Divide:    |    /     | " << floatVal1 << " / " << floatVal2 << " | " << floatVal1 / floatVal2 << std::endl;
	std::cout << "Remainder: |    %     | " << floatVal1 << " % " << floatVal2 << " | " << (int)(floatVal1) % (int)(floatVal2) << std::endl << std::endl;

	return 0;
}
