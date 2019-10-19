/*
 *  UVA_10106.cpp
 *
 *  Created on: Oct 19, 2019
 *      Author: Mohamed sakr
 */








#include<bits/stdc++.h>
using namespace std;

const int MAX = 600;
typedef  int big[MAX];


void big_zero (big num)
{
	int i;
	for (i=0 ; i<MAX ; i++)
		num[i] = 0;
}

int big_len(big num)
{
	int j;
	for (j=MAX-1; j && !num[j]; j--);
	return j;
}

void big_from_str(big num, string str)	// num = reverse(str)
{
	int i, len = str.size()-1;
	big_zero(num);

	for(i=len;i>-1;i--)
		num[len-i] = str[i]-'0';
}

string big_to_str(big num)
{
	ostringstream oss;
	for (int i=big_len(num); i>=0; i--)
		oss<<num[i];
	return oss.str();
}

void big_product(big a, big b, big result)
{
	int len_a = big_len(a);
	int len_b = big_len(b);

	if(len_a < len_b)
	{
		big_product(b, a, result);
		return;
	}
    
	big_zero(result);
	int i, j;

	int cursor = 0, pos = 0;

	for(i=0; i<=len_b; pos = 0, cursor++, i++)
	{
		for(j=0; j<=len_a; j++, pos++)
		{
			result[pos+cursor] += b[i]*a[j];

			if(result[pos+cursor] >= 10)
			{
				result[pos+cursor+1] += result[pos+cursor]/10;
				result[pos+cursor]   %= 10;
			}
		}
	}
}

int main()
{
	string s1, s2;
	big a, b, res;

	while(cin>>s1)
	{
		cin>>s2;
		big_from_str(a, s1);
		big_from_str(b, s2);
		big_product(a,b,res);
		cout<<big_to_str(res)<<"\n";

	}
	return 0;
}
