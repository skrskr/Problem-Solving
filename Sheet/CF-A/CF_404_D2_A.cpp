/*
 *  CF_404_D2_A.cpp
 *
 *  Created on: Jan 9, 2020
 *      Author: Mohamed sakr
 *      Name: Valera and X
 *      URL: https://codeforces.com/contest/404/problem/A
 */








#include<bits/stdc++.h>
using namespace std;
const int MAX = 305;

int main()
{
	char paper[MAX][MAX], ch;
	int n;
	cin>>n;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			cin>>paper[i][j];

	ch = paper[0][0];
	for(int i = 0; i < n; i++)
		if(ch != paper[i][i] || ch != paper[i][n - i - 1])
		{
			cout<<"NO";
			return 0;
		}
	if(paper[0][0] == paper[0][1])
	{
		cout<<"NO";
		return 0;
	}
	ch = paper[0][1];
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++ )
			if(i != j && j != n - i - 1 && ch != paper[i][j])
			{
				cout<<"NO";
				return 0;
			}
	cout<<"YES";
	return 0;
}
