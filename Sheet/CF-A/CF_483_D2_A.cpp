/*
 *  CF_483_D2_A.cpp
 *
 *  Created on: Jan 12, 2020
 *      Author: Mohamed sakr
 *      Name: Counterexample
 *      URL: https://codeforces.com/contest/483/problem/A
 */








#include<bits/stdc++.h>
using namespace std;

int main()
{
	unsigned long long l, r;
	cin>>l>>r;
	if(l % 2)
		l++;
	if((l + 2) > r)
		cout<<"-1";
	else
		cout<<l<<" " <<(l+1)<<" "<<(l + 2);
	
	return 0;
}
