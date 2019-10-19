/*
 *  CF_136_D2.cpp
 *
 *  Created on: Oct 19, 2019
 *      Author: Mohamed sakr
 */








#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, val, arr[101];
	cin>>n;
	for(int i = 1; i <= n; i++)
	{
		cin>>val;
		arr[val] = i;
	}

	for(int i = 1; i <= n; i++)
		cout<<arr[i]<<" ";
	return 0;
}
