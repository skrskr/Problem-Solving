/*
 *  CF_799_A.cpp
 *
 *  Created on: Oct 11, 2019
 *      Author: Mohamed sakr
 */








#include<bits/stdc++.h>
using namespace std;

int main()
{
	double n, t, k, d, o1 = 0, o2 = 0;

	cin>>n>>t>>k>>d;

	int g = (n + k - 1) / k;
	o2 = d;
	for(int i = 0; i < g; i++)
	{
		if(o1 <= o2)
			o1 += t;
		else
			o2 += t;
	}


	if(max(o1,o2) < g * t)
		cout<<"YES";
	else
		cout<<"NO";


	return 0;
}
