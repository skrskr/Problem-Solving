/*
 *  CF_474_D2_A.cpp
 *
 *  Created on: Oct 26, 2019
 *      Author: Mohamed sakr
 */








#include<bits/stdc++.h>
using namespace std;

int main()
{
	string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
	char ch;
	int dir = 0;
	cin>>ch;
	if(ch == 'R')
		dir = -1;
	else
		dir = 1;

	string str;
	cin>>str;
	int strLen = str.length();
	for(int i = 0; i < strLen; i++)
	{
		int pos = keyboard.find(str[i]);
		cout<<keyboard[pos + dir];
	}

	return 0;
}
