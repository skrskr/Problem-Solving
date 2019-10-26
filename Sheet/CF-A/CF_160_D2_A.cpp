/*
 *  CF_160_D2_A.cpp
 *
 *  Created on: Oct 26, 2019
 *      Author: Mohamed sakr
 */








#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, sum = 0, cnt = 0, partSum = 0, arr[100];
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		cin>>arr[i];
		sum += arr[i];
	}

	sort(arr, arr + n);

	for(int i = n-1; i >= 0; i--)
	{
		partSum += arr[i];
		cnt++;
		if(partSum > sum - partSum)
			break;
	}

	cout<<cnt;
	return 0;
}
