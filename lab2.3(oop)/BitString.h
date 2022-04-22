#include <iostream>
#include <string>
#pragma once


using namespace std;

class BitString
{
private:
	long a, b;

public:
	long getA() const { return a; };
	long getB() const { return b; };
	void setA(long value) { a = value; }
	void setB(long value) { b = value; }
	
	operator string() const;

	BitString& operator ++();
	BitString& operator --();
	BitString operator ++(int);
	BitString operator --(int);

	friend ostream& operator << (ostream& out, BitString& obj);
	friend istream& operator >> (istream& in, BitString& obj);

	BitString();
	BitString(long first, long second);
	BitString(BitString& obj);

	friend BitString operator ^ (BitString obj1, BitString obj2);


};

