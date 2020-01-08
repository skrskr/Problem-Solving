/*
 *  CF_584_D2_A.cpp
 *
 *  Created on: Jan 8, 2020
 *      Author: Mohamed sakr
 *      Name: Olesya and Rodion
 *      URL: http://codeforces.com/contest/584/problem/A
 */








#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, t;
	cin>>n>>t;
	if(n == 1 && t == 10)
		cout<<-1;
	else
	{
		int d = (t == 10) ? 1 : t;
		for(int i = 0; i < n - 1; i++)
			cout<<d;
		cout<<((t == 10) ? (0) : (d));
	}
	return 0;
}
