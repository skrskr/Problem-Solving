/*
 *  CF_228_A.cpp
 *
 *  Created on: Oct 11, 2019
 *      Author: Mohamed sakr
 */








#include<bits/stdc++.h>
using namespace std;

int main()
{

	int s1, s2, s3, s4, cnt = 0;
	cin>>s1>>s2>>s3>>s4;

	cnt += (s1 == s2 || s1 == s3 || s1 == s4);
	cnt += (s2 == s3 || s2 == s4);
	cnt += (s3 == s4);

	cout<<cnt;
	return 0;
}
