/*
 *  UVA_11231.cpp
 *
 *  Created on: Oct 19, 2019
 *      Author: Mohamed sakr
 */








#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, m, c;
	cin>>n>>m>>c;

	while(n != 0)
	{
		// All Possible white squares (n - 7) * (m -7) / 2
		// if (n - 7) is odd and (m - 7) is odd
		// if c == 1 then white squares more than black squares with one
		// if c == 0 then black squares more than white squares with one
		cout<<(((m - 7) * (n -7) + c )/2)<<"\n";
		cin>>n>>m>>c;
	}

	return 0;
}
