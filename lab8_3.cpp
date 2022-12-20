#include<iostream>
using namespace std;

char before(char x){
	char y = toupper(x);
if (x==y and x != '0')
	{
		if (x>'A')
		{
			x= x-1;

			
		}else{
			x='Z';
		}
	}else {
		x='0';
	}
	return x ;
}