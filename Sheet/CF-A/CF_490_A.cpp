/*
 *  CF_490_A.cpp
 *
 *  Created on: Oct 11, 2019
 *      Author: Mohamed sakr
 */








#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t1[5000] = {0}, t2[5000] = {0}, t3[5000] = {0};
	int len1 = 0, len2 = 0, len3 = 0, n = 0, w = 0, t = 0;
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		cin>>t;
		switch(t)
		{
			case 1:
				t1[len1++] = i + 1;
				break;
			case 2:
				t2[len2++] = i + 1;
				break;
			case 3:
				t3[len3++] = i + 1;
				break;
		}
	}

	w = min(len1, len2);
	w = min(w, len3);

	cout<<w<<"\n";
	for(int i = 0; i < w; i++)
		cout<<t1[i]<<" "<<t2[i]<<" "<<t3[i]<<"\n";

	return 0;
}
