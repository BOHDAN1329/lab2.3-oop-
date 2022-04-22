#include "BitString.h"
#include <sstream>
#include <string>
#include <iostream>

using namespace std;



BitString& BitString::operator++()
{
	a++;
	b++;
	return *this;
}

BitString& BitString::operator--()
{
	a--;
	b--;
	return *this;
}

BitString BitString::operator++(int)
{
	BitString t(*this);
	a++;
	b++;
	return t;
}

BitString BitString::operator--(int)
{
	BitString t(*this);
	a--;
	b--;
	return t;
}

ostream& operator << (ostream& out, BitString& obj)
{
	out << string(obj);
	return out;
}

BitString::BitString()
{
	a = 1;
	b = 0;
}

BitString::BitString(long first, long second)
{
	a = first;
	b = second;
}

BitString::BitString(BitString& obj)
{
	a = obj.a;
	b = obj.b;
}

BitString::operator string() const
{

	stringstream sout;
	sout << "a = " << a << endl << " b = " << b << endl;
	return sout.str();
}

istream& operator>>(istream& in, BitString& obj)
{
	cout << "a ="  ; in >> obj.a;
	cout << "b ="  ; in >> obj.b;
	cout << endl;
	return in;

}

BitString operator^(BitString obj1, BitString obj2)
{
	BitString res;
	res.a = obj1.a ^ obj2.a;
	res.b = obj1.b ^ obj2.b;
	return res;
}
