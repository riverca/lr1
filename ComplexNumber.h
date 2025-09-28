#pragma once

class ComplexNumber {
private:
	double realPart;
	double imaginaryPart;
public:
	ComplexNumber();
	ComplexNumber(double newReal, double newImaginary);
	ComplexNumber(const ComplexNumber& origin);
	double getReal();
	double getImaginary();
	void setReal(double newReal);
	void setImaginary(double newImaginary);
};