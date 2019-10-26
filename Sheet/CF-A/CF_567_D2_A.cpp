/*
 *  CF_567_D2_A.cpp
 *
 *  Created on: Oct 26, 2019
 *      Author: Mohamed sakr
 */








#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, arr[100001];
	cin>>n;

	for(int i = 0; i < n; i++)
		cin>>arr[i];

	cout<<(arr[1] - arr[0])<<" "<<(arr[n-1] - arr[0])<<"\n";

	for(int i = 1; i < n - 1; i++)
	{
		int minV = min(arr[i] - arr[i - 1], arr[i + 1] - arr[i]);
		int maxV = max(arr[n-1] - arr[i], arr[i] - arr[0]);
		cout<<minV<<" "<<maxV<<"\n";
	}

	cout<<(arr[n-1] - arr[n-2])<<" "<<(arr[n-1] - arr[0])<<"\n";
	return 0;
}
