// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>

using namespace std;

long mp(long m, long q, long p);
long compressMod(int num, int power, int base);
long modPow(long num, int power, long base);
long encode(int data_bit, int key, int base);
int main()
{
	int p = 29; // 11
	int q = 23; // 7;
	int e = 5; //7; works!

	long n = p * q;
	long fi = (p - 1)*(q - 1);

	int d = mp(e, q, p);

	//cout << "test : " << mp(11, 3, 5) << endl;
	cout << " d : " <<d << " , e :" << e << " , fi :" << fi << endl;

	int m = 31;
	int dcoded = encode(m, e, n);
	d = 493;
	cout << dcoded << " message : " << m << endl;
	cout << "try e? " << encode(dcoded, e, n) << endl;
	cout << "try d? " << encode(dcoded, d, n) << endl;
	//cout << pa(t, (7*5)-1, 7*5) << endl;
}

long encode(int data_bit, int key, int base) {
	return compressMod(data_bit, key, base);
}

long mp(long m, long q, long p) {
	long n = q * p;
	cout << n << endl;
	if (p == 1)
		p = 2;
	if (q == 1)
		q = 2;
	
	long base = (q - 1) * (p - 1) - 1;
	cout << base << " b " << q * p << endl;
	return compressMod(m, base, base + 1);
}

long compressMod(int num,int power, int base) {
	//cout << num << " ," << power << " ," << base << endl;
	if (power > 2) {
		// Get a smaller number!
		int tempv = power % 2;
		int mval = modPow(num, tempv, base);

		int cpow = power - tempv;
		int sp = cpow / 2;

		long cer = compressMod(num, sp, base);
		long x = compressMod(cer, 2, base);

		return (x * mval) % base;
	}
	return modPow(num, power, base);
}

long modPow(long num, int power, long base) {
	unsigned long long vnum = pow(num, power);
	return vnum % base;
}


