/*
 *  CF_791_D2_A.cpp
 *
 *  Created on: Sep 28, 2019
 *      Author: Mohamed sakr
 */





#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, y = 0;
	cin>>a>>b;

	while(a <= b)
	{
		a *= 3;
		b *= 2;
		y++;

	}

	cout<<y;

	return 0;
}
