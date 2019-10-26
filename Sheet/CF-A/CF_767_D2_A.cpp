/*
 *  CF_767_D2_A.cpp
 *
 *  Created on: Oct 26, 2019
 *      Author: Mohamed sakr
 */








#include<bits/stdc++.h>
using namespace std;

int main()
{

	int n, j, val;
	bool arr[100001]={false};
	cin>>n;
	j = n;
	for(int i = 1; i <= n; i++)
	{
		cin>>val;
		arr[val] = true;
		for(;arr[j]; j--)
			cout<<j<<" ";

		cout<<"\n";
	}

	return 0;
}
