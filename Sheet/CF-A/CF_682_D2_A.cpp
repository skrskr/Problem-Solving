/*
 *  CF_682_D2_A.cpp
 *
 *  Created on: Jan 17, 2020
 *      Author: Mohamed sakr
 *      Name:  Alyona and Numbers
 *      URL: http://codeforces.com/contest/682/problem/A
 */








#include<bits/stdc++.h>
using namespace std;

int main()
{

	int n, m;
	cin>>n>>m;
	unsigned long long cnt = 0;
	if(n > m)
		swap(n, m);

	for(int i = 1; i <= n; i++)
		cnt += (m + (i%5)) / 5;
	cout<<cnt;
	return 0;
}
