/*
 *  CF_71_A.cpp
 *
 *  Created on: Oct 11, 2019
 *      Author: Mohamed sakr
 */








#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	string str;
	cin>>n;
	while(n--)
	{
		cin>>str;
		int len = str.length();
		if(len > 10)
			cout<<str[0]<<(len - 2)<<str[len-1]<<"\n";
		else
			cout<<str<<"\n";
	}
	return 0;
}
