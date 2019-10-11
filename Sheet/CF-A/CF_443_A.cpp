/*
 *  CF_443_A.cpp
 *
 *  Created on: Oct 11, 2019
 *      Author: Mohamed sakr
 */








#include<bits/stdc++.h>
using namespace std;

int main()
{
	const int SIZE = 26;
	string str;
	int arr[SIZE] = {0}, cnt = 0;
	getline(cin,str);
	int len = str.length();

	if(len > 2)
	{
		for(int i = 1; i < len; i += 3)
			arr[str[i] - 'a']++;

		for(int i = 0; i < SIZE; i++)
			cnt += (arr[i] > 0);
	}
	cout<<cnt;
	return 0;
}
