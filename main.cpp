#include "ComplexNumber.h"
#include <iostream>
#include <assert.h>
#define TEST_2
int main() {
#ifdef TEST_1
	ComplexNumber c1;
	assert(!c1.getImaginary() && "The extraction of an imaginary part has failed");
	assert(!c1.getReal() && "The extraction of a real part has failed");
	std::cout << "Base constructor works correctly";
#endif
#ifdef TEST_2
	ComplexNumber c2(3, 5.5);
	assert(c2.getImaginary() == 5.6 && "Failed attempt to initialize an imaginary part");
	assert(c2.getReal() == 3 && "Failed attempt to initialize a real part");
	std::cout << "Initializing constructor works correctly";
#endif
#ifdef TEST_3
	ComplexNumber c3(3, 5.5);
	c3.setReal(6);
	assert(c3.getReal() == 6 && "Failed attempt to set a real part");
	std::cout << "Setting a real part works correctly";
#endif
#ifdef TEST_4
	ComplexNumber c4(3, 5.5);
	c4.setImaginary(6);
	assert(c4.getImaginary() == 6 && "Failed attempt to set an imaginary part");
	std::cout << "Setting an imaginary part works correctly";
#endif
#ifdef TEST_5
	ComplexNumber c5(3, 5.5);
	ComplexNumber c6 = ComplexNumber(c5);
	assert(c5.getReal() == c6.getReal() && "Failed attempt to copy a number");
	std::cout << "Copying works correctly";
#endif
	return 0;
}	