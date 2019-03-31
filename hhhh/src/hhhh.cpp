//============================================================================
// Name        : hhhh.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<vector>
#include<string>
#include<stdlib.h>
using namespace std;

int swap(int,int,std::string);
int main() {

	int n;
	cout<<"podaj liczbe\n";
	cin>>n;
	//std::vector<int> liczba;
	char bufor [1000];
	int best = n;
	std::string liczba(itoa(n,bufor,10));
	std::cout<<"liczba to :"+liczba<<endl;
	std::string actual;
	for(int base = 0;base<liczba.size();base++)
	{
		for(int toswap = 0;toswap<liczba.size();toswap++)
			{
			if(base!=toswap){
				int  x = swap(base,toswap,liczba);
				if(x>best)
					best = x;
				}
			}
	}
	std::cout<<"najlepsza :"<<best<<endl;
	return 0;
}
int swap(int base,int swap ,std::string liczba)
{
	std::string tmp(liczba);
	tmp[base] = liczba[swap];
	tmp[swap] = liczba[base];
	return atoi(tmp.c_str());
};

