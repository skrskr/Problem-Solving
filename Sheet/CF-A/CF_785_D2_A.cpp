/*
 *  CF_785_D2_A.cpp
 *
 *  Created on: Jan 11, 2020
 *      Author: Mohamed sakr
 *      Name: Anton and Polyhedrons
 *      URL: https://codeforces.com/contest/785/problem/A
 */








#include<bits/stdc++.h>
using namespace std;

int faceCount(string str)
{
	if(str == "Tetrahedron")
		return 4;
	else if(str == "Cube")
			return 6;
	else if(str == "Octahedron")
			return 8;
	else if(str == "Dodecahedron")
			return 12;
	else if(str == "Icosahedron")
			return 20;
	return 0;
}

int main()
{
	int n, total = 0;
	string str;
	cin>>n;
	while(n--)
	{
		cin>>str;
		total += faceCount(str);
	}
	cout<<total;
	return 0;
}
