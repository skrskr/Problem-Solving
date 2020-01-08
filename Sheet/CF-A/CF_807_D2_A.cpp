/*
 *  CF_807_D2_A.cpp
 *
 *  Created on: Jan 8, 2020
 *      Author: Mohamed sakr
 *      Name: Is it rated?
 *      URL: http://codeforces.com/contest/807/problem/A
 */








#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, a, b, arr[1001];
	bool rated = false, unrated = false;
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		cin>>a>>b;
		if(a - b != 0)
			rated = true;

		arr[i] = a;
	}
	
	if(!rated)
	{
		for(int i = 0; i < n - 1; i++)
		{
			if(arr[i] < arr[i+1])
			{
				unrated = true;
				break;
			}
		}
	}

	if(rated)
		cout<<"rated";
	else if(unrated)
		cout<<"unrated";
	else
		cout<<"maybe";

	return 0;
}
