#include "ComplexNumber.h"
ComplexNumber::ComplexNumber() {
	realPart = 0;
	imaginaryPart = 0;
}
ComplexNumber::ComplexNumber(double newReal, double newImaginary) {
	realPart = newReal;
	imaginaryPart = newImaginary;
}
ComplexNumber::ComplexNumber(const ComplexNumber& origin) {
	realPart = origin.realPart;
	imaginaryPart = origin.imaginaryPart;
}
double ComplexNumber::getReal() {
	return realPart;
}
double ComplexNumber::getImaginary() {
	return imaginaryPart;
}
void ComplexNumber::setImaginary(double newImaginary) {
	imaginaryPart = newImaginary;
}
void ComplexNumber::setReal(double newReal) {
	realPart = newReal;
}