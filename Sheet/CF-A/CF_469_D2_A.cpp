/*
 *  CF_469_D2_A.cpp
 *
 *  Created on: Jan 8, 2020
 *      Author: Mohamed sakr
 *      Name: I Wanna Be the Guy
 *      URL: http://codeforces.com/contest/469/problem/A
 */








#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, p, v;
	cin>>n;
	set<int> a;
	cin>>p;
	for(int i = 0; i < p; i++)
	{
		cin>>v;
		a.insert(v);
	}
	
	cin>>p;
	for(int i = 0; i < p; i++)
	{
		cin>>v;
		a.insert(v);
	}

	if((int)a.size() != n)
		cout<<"Oh, my keyboard!";
	else
		cout<<"I become the guy.";
	return 0;
}
