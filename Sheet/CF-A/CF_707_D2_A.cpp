/*
 *  CF_707_D2_A.cpp
 *
 *  Created on: Jan 9, 2020
 *      Author: Mohamed sakr
 *      Name: Brain's Photos
 *      URL: http://codeforces.com/contest/707/problem/A
 */








#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	char ch;
	bool colored = false;
	cin>>n>>m;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
		{
			cin>>ch;
			if(!colored && (ch == 'C' || ch == 'M' || ch == 'Y'))
				colored = true;
		}
	
	cout<<((colored) ? "#Color" : "#Black&White");
	return 0;
}
