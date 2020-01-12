/*
 *  CF_486_D2_A.cpp
 *
 *  Created on: Jan 11, 2020
 *      Author: Mohamed sakr
 *      Name: Calculating Function
 *      URL: http://codeforces.com/contest/486/problem/A
 */








#include<bits/stdc++.h>
using namespace std;

int main()
{
	unsigned long long n;
	cin>>n;
	if(n%2)
		cout<<"-"<<((n+1)/2);
	else
		cout<<(n/2);

	return 0;
}
