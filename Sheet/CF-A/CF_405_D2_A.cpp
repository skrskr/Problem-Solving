/*
 *  CF_405_D2_A.cpp
 *
 *  Created on: Sep 28, 2019
 *      Author: Mohamed sakr
 */








#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[101], n;

	cin>>n;
	for(int i = 0; i < n; i++)
		cin>>arr[i];
	sort(arr, arr+n);
	for(int i = 0; i < n; i++)
		cout<<arr[i] <<" ";

	return 0;
}
