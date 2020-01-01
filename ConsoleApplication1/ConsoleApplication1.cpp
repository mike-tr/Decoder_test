// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <math.h>

using namespace std;

long pa(int m, int e, int n);
long mp(long m, long q, long p);
int main()
{
	int p = 307;
	int q = 311;

	long n = p * q;
	long fi = (p - 1)*(q - 1);
	long e = fi - 1;



	int t = pa(3, (7 * 5) - 1, 7 * 5);

	cout << mp(4, 3, 5);
	//cout << t << endl;
	//cout << pa(t, (7*5)-1, 7*5) << endl;
}

long pa(int m, int e, int n) {
	return (long)pow(m, e) % n;
}

long mp(long m, long q, long p) {
	long n = q * p;
	if (p == 1)
		p = 2;
	if (q == 1)
		q = 2;
	unsigned long long int x = pow(m, (q - 1)*(p - 1) - 1);
	return x % n;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
