/*
 *  CF_365_D2_A.cpp
 *
 *  Created on: Jan 17, 2020
 *      Author: Mohamed sakr
 *      Name: Good Number
 *      URL: http://codeforces.com/contest/365/problem/A
 */








#include<bits/stdc++.h>
using namespace std;

bool isGoodNumber(int a, int k)
{
	bool exist[10] = { false };
	while(a != 0)
	{
		int r = a % 10;
		exist[r] = true;
		a /= 10;
	}
	for(int i = 0; i <= k; i++)
		if(!exist[i])
			return false;

	return true;
}

int main()
{
	int n, k, a, cnt = 0;
	cin>>n>>k;
	while(n--)
	{
		cin>>a;
		cnt += isGoodNumber(a, k);
	}
	cout<<cnt;

	return 0;
}
