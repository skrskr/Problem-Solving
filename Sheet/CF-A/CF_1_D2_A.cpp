/*
 *  CF_1_D2_A.cpp
 *
 *  Created on: Jan 11, 2020
 *      Author: Mohamed sakr
 *      Name: Theatre Square
 *      URL: https://codeforces.com/contest/1/problem/A
 */








#include<bits/stdc++.h>
using namespace std;

int main()
{
	unsigned long long n, m, a;
	cin>>n>>m>>a;

	cout<<(((n + a - 1) / a)  * ((m + a - 1) / a));

	return 0;
}
