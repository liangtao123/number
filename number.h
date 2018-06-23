#ifndef NUMBER_Header
#define NUMBER_Header
#include"stdafx.h"
#include<iostream>
#include<complex>
using namespace std;
class Number
{
public:
	virtual void print() = 0;
};
class RealNumber :public Number
{
public:
	RealNumber(double valx = 0) { val = valx; }
	void print()
	{
		cout << val << endl;
	}
	RealNumber add(const RealNumber& b)
	{
		return RealNumber(val + b.val);
	}
	RealNumber mul(const RealNumber& b)
	{
		return RealNumber(val*b.val);
	}
	double val;
};
class IntegerNumber :public RealNumber
{
public:
	IntegerNumber(int valx = 0) { val = valx; }
	IntegerNumber(const RealNumber& b) { val = int(b.val); }
};
class ComplexNumber :public Number
{
public:
	ComplexNumber(complex<double> valx = 0) { val = valx; }
	void print()
	{
		cout << val << endl;
	}
	ComplexNumber add(const ComplexNumber& b)
	{
		return ComplexNumber(val + b.val);
	}
	ComplexNumber mul(const ComplexNumber& b)
	{
		return ComplexNumber(val*b.val);
	}
	complex<double> val;
};
#endif
}#pragma once
