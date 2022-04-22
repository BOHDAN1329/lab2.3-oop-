#include <iostream>
#include "BitString.h"

using namespace std;

int main()
{
	BitString XoR;
	
	cout << "First case" << endl;
	BitString a1, a2;
	cout << "first object" << endl;
	cin >> a1;
	cout << "second object" << endl;
	cin >> a2;
	cout << endl;
	
	XoR = a1 ^ a2;
	cout << "first object ^ second object" << endl;
	cout << XoR;

	cout << "Second case" << endl;
	BitString k1, k2(0, 0) ;
	cout << "first  object" << endl;
	cout << k1;
	cout << "second  object" << endl;
	cout << k2;
	
	XoR = k1 ^ k2;
	cout << "first object ^ second object" << endl;
	cout << XoR;

	cout << "Third case" << endl;
	cout << "first  object" << endl;
	cout << k1;
	cout << "second  object with operator ++" << endl;
	cout << k2 << endl;
	cout << ++k2 <<endl;
	
	XoR = k1 ^ k2;
	cout << "first object ^ second object" << endl;
	cout << XoR;

	cout << "Fourth case " << endl;
	BitString l1(k2), l2(1, 1);
	cout << "first  object" << endl;
	cout << l1;
	cout << "second  object with operator --" << endl;
	cout << l2 << endl;
	cout << --l2 << endl;

	XoR = l1 ^ l2;
	cout << "first object ^ second object" << endl;
	cout << XoR;




	return 0;
}