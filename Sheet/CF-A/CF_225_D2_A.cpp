/*
 *  CF_225_D2_A.cpp
 *
 *  Created on: Jan 17, 2020
 *      Author: Mohamed sakr
 *      Name: Dice Tower
 *      URL: http://codeforces.com/contest/225/problem/A
 */








#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, top, a, b;
	cin>>n>>top;
	int bottom = 7 - top;
	while(n--)
	{
		cin>>a>>b;
		if(a == top || a == bottom || b == top || b == bottom)
		{
			cout<<"NO";
			return 0;
		}
	}
	
	cout<<"YES";
	return 0;
}
