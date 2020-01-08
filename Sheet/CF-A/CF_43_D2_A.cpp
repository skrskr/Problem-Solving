/*
 *  CF_43_D2_A.cpp
 *
 *  Created on: Jan 8, 2020
 *      Author: Mohamed sakr
 *      Name: Football
 *      URL: http://codeforces.com/contest/43/problem/A
 */








#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, fw = 1, sw = 0;
	string f, s, t;
	cin>>n;
	cin>>f;
	n--;
	while(n--)
	{
		cin>>t;
		if(t == f)
			fw++;
		else
		{
			sw++;
			s = t;
		}
	}
	
	cout<<((fw > sw)? f : s);

	return 0;
}
