/*
 *  CF_294_A.cpp
 *
 *  Created on: Oct 11, 2019
 *      Author: Mohamed sakr
 */








#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, arr[101], m, x, y, left, right;

	cin>>n;
	for(int i = 1; i <= n; i++)
		cin>>arr[i];

	cin>>m;
	while(m--)
	{
		cin>>x>>y;
		left = y - 1;
		right = arr[x] - y;

		if(x != 1)
			arr[x+1] += right;
		if(x != n)
			arr[x - 1] += left;


		arr[x] = 0;
	}

	for(int i = 1; i <= n; i++)
		cout<<arr[i]<<"\n";

	return 0;
}
