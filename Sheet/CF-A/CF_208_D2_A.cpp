/*
 *  CF_208_D2_A.cpp
 *
 *  Created on: Jan 9, 2020
 *      Author: Mohamed sakr
 *      Name: Dubstep
 *      URL: http://codeforces.com/contest/208/problem/A
 */








#include<bits/stdc++.h>
using namespace std;


string trim(string str)
{

	int len = str.length();
	for(int i = 0; i < len; i++)
		if(str[i] == ' ')
		{
			str.replace(i, 1, "");
			i--;
		}
		else
			break;

	len = str.length();
	for(int i = len - 1; i >= 0; i--)
		if(str[i] == ' ')
		{
			str.replace(i, 1, "");
		}
		else
			break;
	return str;
}

int main()
{
	string song;
	cin>>song;
	int pos = song.find("WUB");
	while(pos != -1)
	{
		song.replace(pos, 3, " ");
		pos = song.find("WUB");
	}
	cout<<trim(song);

	return 0;
}
