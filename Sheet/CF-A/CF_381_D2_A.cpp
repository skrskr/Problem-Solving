/*
 *  CF_381_D2_A.cpp
 *
 *  Created on: Sep 28, 2019
 *      Author: Mohamed sakr
 */








#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[1001], n;
	cin>>n;
	int l = 0, r = n - 1, s = 0, d = 0;
	for(int i = 0; i< n; i++)
		cin>>arr[i];
	for(int i = 0; i < n; i++)
	{
		if(i % 2)
		{
			// Dima Turn
			if(arr[l] > arr[r])
				d += arr[l], l++;
			else
				d += arr[r], r--;
		}
		else
		{
			// Sereja  Turn
			if(arr[l] > arr[r])
				s += arr[l], l++;
			else
				s += arr[r], r--;
		}
	}
	cout<<s <<" "<< d;
	return 0;
}
