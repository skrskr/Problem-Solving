/*
 *  CF_112_D2_A.cpp
 *
 *  Created on: Sep 28, 2019
 *      Author: Mohamed sakr
 */








#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str1, str2;
	cin>>str1>>str2;

	int len = str1.length();
	int res = 0;
	for(int i = 0; i < len; i++)
	{
		if(tolower(str1[i]) > tolower(str2[i]))
		{
			res = 1;
			break;
		}
		else if (tolower(str1[i]) < tolower(str2[i]))
		{
			res = -1;
			break;
		}
	}
	cout<<res;

	//Convert str1, str2 toLowerCase or toUpperCase and use strcmp function
	//cout<<strcmp(str1,str2);

	return 0;
}
