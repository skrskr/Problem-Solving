/*
 *  CF_268_D2_A.cpp
 *
 *  Created on: Sep 28, 2019
 *      Author: Mohamed sakr
 */








#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, arr[30][2] = {0};
	cin>>n;
	for(int i = 0; i < n; i++)
		cin>>arr[i][0]>>arr[i][1];

	int cnt = 0;

	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			cnt += (arr[i][1] == arr[j][0]);

	cout<<cnt;

	return 0;
}
