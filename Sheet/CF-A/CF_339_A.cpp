/*
 *  CF_339_A.cpp
 *
 *  Created on: Oct 11, 2019
 *      Author: Mohamed sakr
 */








#include<bits/stdc++.h>
using namespace std;

int main()
{
	const int SIZE = 4;
	int arr[SIZE] = {0};
	string str;
	char ch;
	cin>>str;
	int len = str.length();

	for(int i = 0; i < len; i += 2)
		arr[str[i] - '0']++;

	string res = "";
	for(int i = 1; i < SIZE; i++)
	{
		for(int j = 0; j < arr[i]; j++)
		{
			ch = i + 48;
			res += ch;
			res += "+";
		}
	}

	if(res[res.length() - 1] == '+')
		res[res.length() -1 ] = '\n';
	cout<<res;

	return 0;
}
