/*
 *  CF_742_D2_A.cpp
 *
 *  Created on: Jan 9, 2020
 *      Author: Mohamed sakr
 *      Name: Arpa’s hard exam and Mehrdad’s naive cheat
 *      URL: https://codeforces.com/contest/742/problem/A
 */








#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	/*
	if(n == 0)
		cout<<1;
	else if(n % 2) //odd
	{
		// 1 5 9  13 17  -> 8
		// 3 7 11 15 19  -> 2
		if((n - 1) % 4 == 0)
			cout<<8;
		else
			cout<<2;
	}
	else //even
	{
		// 2 6 10 14 -> 4
		// 4 8 12 16 -> 6
		if(n%4 == 0)
			cout<<6;
		else
			cout<<4;
	}
	*/
	// 1 5 9  13 17  -> 8  (n % 4) = 1
	// 3 7 11 15 19  -> 2  (n % 4) = 3

	// 2 6 10 14 -> 4      (n % 4) = 2
	// 4 8 12 16 -> 6      (n % 4) = 0

	int arr[] = {6, 8, 4, 2};
	cout<<((n == 0) ? 1 : arr[n % 4]);
	return 0;
}
