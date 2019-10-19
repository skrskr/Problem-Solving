/*
 *  UVA_408.cpp
 *
 *  Created on: Oct 19, 2019
 *      Author: Mohamed sakr
 */








#include<bits/stdc++.h>
using namespace std;

int main()
{

	int s, m;
	while(cin>>s>>m)
	{
		bool flags[m] = {false};
		bool bad = false;

		int lastVal = 0;

		for(int i = 0; i < m; i++)
		{
			int val = (lastVal + s) % m;
			if(flags[val])
			{
				bad = true;
				break;
			}

			flags[val] = true;
			lastVal = val;
		}
		cout<<right<<setw(10)<<s<<setw(10)<<m<<"    "<<(bad ? "Bad Choice\n\n" : "Good Choice\n\n");
	}

	return 0;
}
