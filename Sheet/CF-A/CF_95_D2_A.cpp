/*
 *  CF_95_D2_A.cpp
 *
 *  Created on: Sep 28, 2019
 *      Author: Mohamed sakr
 */








#include<bits/stdc++.h>
using namespace std;

string toUpperCase(string str, int len)
{
	string res = "";
	for(int i = 0; i < len; i++)
		res += toupper(str[i]);
	return res;
}

string toLowerCase(string str, int len)
{
	string res = "";
	for(int i = 0; i < len; i++)
		res += tolower(str[i]);
	return res;
}

int main()
{
	string str;
	cin>>str;
	int len = str.length();
	int u = 0, l = 0;

	for(int i = 0; i < len; i++)
	{
		if(str[i] >= 97)
			l++;
		else
			u++;
	}
	if (u > l)
		cout<<toUpperCase(str, len);
	else
		cout<<toLowerCase(str,len);

	return 0;
}
