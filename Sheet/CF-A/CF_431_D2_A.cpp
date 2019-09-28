/*
 *  CF_431_D2_A.cpp
 *
 *  Created on: Sep 28, 2019
 *      Author: Mohamed sakr
 */








#include<bits/stdc++.h>
using namespace std;

int main()
{

	int arr[5] = {0}, cnt = 0;
	for(int i = 1; i < 5; i ++)
		cin>>arr[i];

	string str;
	cin>>str;
	int len = str.length();
	for(int i = 0; i < len; i++)
	{
		cnt += arr[str[i] - '0'];
	}
	cout<<cnt;

	return 0;
}
