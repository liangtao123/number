#include<iostream>
#include"stdafx.h"
#include"number.h"
int main()
{
	Number* p;
	RealNumber a(14.8), b(15.1);
	RealNumber c = a.add(b);
	p = &c;
	(*p).print();
	IntegerNumber a1(14), b1(15);
	IntegerNumber c1 = a1.add(b1);
	p = &c1;
	(*p).print();
	ComplexNumber a2(complex<double>(14, 12)), b2(15);
	ComplexNumber c2 = a2.add(b2);
	p = &c2;
	(*p).print();
	return 0;
}