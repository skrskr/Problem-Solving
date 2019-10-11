/*
 *  CF_344_D2_A.cpp
 *
 *  Created on: Sep 28, 2019
 *      Author: Mohamed sakr
 */








#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, g = 1;
	string str,temp;
	cin>>n;
	cin>>temp;
	n--;
	while(n--)
	{
		cin>> str;
		g += (str != temp);
		temp = str;
	}
	cout<<g;

	return 0;
}
