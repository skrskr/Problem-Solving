/*
 *  CF_766_A.cpp
 *
 *  Created on: Oct 26, 2019
 *      Author: Mohamed sakr
 */








#include<bits/stdc++.h>
using namespace std;

int main()
{
	string a, b;
	getline(cin,a);
	getline(cin,b);

	if(a == b)
		cout<<"-1";
	else
		cout<<max(a.size(), b.size());

	return 0;
}
