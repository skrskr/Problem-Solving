/*
 *  CF_80_D2_A.cpp
 *
 *  Created on: Jan 11, 2020
 *      Author: Mohamed sakr
 *      Name: Panoramix's Prediction
 *      URL: https://codeforces.com/contest/80/problem/A
 */








#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
	int len = sqrt(n);
	for(int i = 2; i <= len; i++)
		if(n % i == 0)
			return false;
	return true;
}

int main()
{
	int n, m;
	cin>>n>>m;
	if(!isPrime(m))
		cout<<"NO";
	else
	{
		int x = n + 1;
		while(true)
		{
			if(isPrime(x)){
				if(x == m){
					cout<<"YES";
					break;
				} else {
					cout<<"NO";
					break;
				}
			}
			else if(x >= m)
			{
				cout<<"NO";
				break;
			}
			x++;
		}
	}
	return 0;
}
