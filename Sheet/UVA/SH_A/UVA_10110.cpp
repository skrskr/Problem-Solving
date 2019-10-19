/*
 *  UVA_10110.cpp
 *
 *  Created on: Oct 19, 2019
 *      Author: Mohamed sakr
 */







// UVA 10110 Light, more light

#include<bits/stdc++.h>
using namespace std;

int main()
{
	// Count the number of divisor of n
	// if n have sqrt # of divisors odd 9 -> (1*9, 3*3) divisors (1, 3, 9) odd
	// if n NOT have sqrt then # of divisors event  10 -> (1*10, 2*5) divisors (1, 2, 5, 10) even
	// if # of divisors odd the light ON else the light OFF

	unsigned int n, x;

	cin>>n;
	while(n){

		x = sqrt(n);

		if(x * x == n)
			cout<<"yes\n";
		else
			cout<<"no\n";

		cin>>n;
	}

	return 0;
}
