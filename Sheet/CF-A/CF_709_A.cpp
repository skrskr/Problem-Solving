/*
 *  CF_709_A.cpp
 *
 *  Created on: Oct 11, 2019
 *      Author: Mohamed sakr
 */








#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, b, d, a, cap = 0, cnt = 0;
	cin>>n>>b>>d;

	while(n--)
	{
		cin>>a;

		if(a > b)
			continue;

		cap += a;

		if(cap > d)
		{
			cap = 0;
			cnt++;
		}
	}

	cout<<cnt;
	return 0;
}
