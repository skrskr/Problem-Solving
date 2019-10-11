/*
 *  CF_770_A.cpp
 *
 *  Created on: Oct 11, 2019
 *      Author: Mohamed sakr
 */








#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, k;
	cin>>n>>k;
	char ch;
	string res = "";
	for(int i = 0; i < n; i++)
	{
		ch = (i%k) + 97;
		res += ch;
	}
	cout<<res;
	
	return 0;
}
