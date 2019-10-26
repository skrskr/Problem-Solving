/*
 *  CF_768_D2_A.cpp
 *
 *  Created on: Oct 26, 2019
 *      Author: Mohamed sakr
 */








#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[100000], n, cnt = 0;
	cin>>n;
	for(int i = 0; i < n; i++)
		cin>>arr[i];

	sort(arr, arr + n);

	for(int i = 1; i < n-1; i++)
	    cnt += (arr[i] > arr[0]  && arr[i] < arr[n-1]);

	cout<<cnt;
	return 0;
}
