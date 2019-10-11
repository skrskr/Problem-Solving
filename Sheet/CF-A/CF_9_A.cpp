/*
 *  CF_9_A.cpp
 *
 *  Created on: Oct 11, 2019
 *      Author: Mohamed sakr
 */








#include<bits/stdc++.h>
using namespace std;

int main()
{

	int y, w;
	cin>>y>>w;

	int r = 6 - (max(y,w)) + 1;

	switch(r)
	{
		case 0:
			cout<<"0/1";
			break;
		case 1:
			cout<<"1/6";
			break;
		case 2:
			cout<<"1/3";
			break;
		case 3:
			cout<<"1/2";
			break;
		case 4:
			cout<<"2/3";
			break;
		case 5:
			cout<<"5/6";
			break;
		case 6:
			cout<<"1/1";
			break;
	}

	return 0;
}
