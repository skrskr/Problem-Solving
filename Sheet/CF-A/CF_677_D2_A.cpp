/*
 *  CF_677_D2_A.cpp
 *
 *  Created on: Sep 28, 2019
 *      Author: Mohamed sakr
 */



#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,h, val, minW = 0;
		cin>>n>>h;
		while(n--)
		{
			cin>>val;
			minW++;
			minW += (val > h);
		}
		cout<<minW;

	return 0;
}
