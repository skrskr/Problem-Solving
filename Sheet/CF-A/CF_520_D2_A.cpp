/*
 *  CF_520_D2_A.cpp
 *
 *  Created on: Oct 26, 2019
 *      Author: Mohamed sakr
 */








#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	string str;
	cin>>str;

	if(n < 26)
		cout<<"NO";
	else
	{
		bool arr[26] = {false};
		for(int i = 0; i < n; i++)
		{
			arr[tolower(str[i]) - 97] = true;
		}

		for(int i = 0; i < 26; i++)
			if(!arr[i])
			{
				cout<<"NO";
				return 0;
			}
		cout<<"YES";
	}
	return 0;
}
