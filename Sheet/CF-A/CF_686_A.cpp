/*
 *  CF_686_A.cpp
 *
 *  Created on: Oct 11, 2019
 *      Author: Mohamed sakr
 */








#include<bits/stdc++.h>
using namespace std;

int main()
{
	unsigned long long n, x, d, sc = 0;
	cin>>n>>x;
	char ch = ' ';
	while(n--)
	{
		cin>>ch>>d;
		if(ch == '+')
			x += d;
		else
		{
			if(x >= d)
				x -= d;
			else
				sc++;
		}
	}
	cout<<x<<" "<<sc;
	return 0;
}
