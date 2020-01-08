/*
 *  CF_318_D2_A.cpp
 *
 *  Created on: Jan 8, 2020
 *      Author: Mohamed sakr
 *      Name: Even Odds
 *      URL: http://codeforces.com/contest/318/problem/A
 */








#include<bits/stdc++.h>
using namespace std;

int main()
{
	unsigned long long n, k, half;
	cin>>n>>k;
	
	half = (n + 1) / 2;
	cout<<((k <= half) ? (2 * k -1) : (k - half) * 2);
	return 0;
}
