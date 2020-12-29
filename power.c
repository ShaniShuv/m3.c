#include <stdio.h>
#include "myMath.h"
#ifndef e
#define e 2.71828
#endif
	

// this function calculate the power of exponent by a given integer 
double Exponent(int x){
	double ans= 1;
	int i= x>=0;
	if(i){
		while(x){
			ans =ans*e;
			x--;
		}
	}
	else{
		while(x){
			ans =ans*e;
			x++;
		}
		ans = div(1, ans);
	}
	return ans;	
}

// this function calculate the power of one given real number by one given integer
double Power(double x, int y)
{
	int i = (x==0);
	if(i){
		return 0;
	}
	i = (y>=0);


	double ans=1;
	if(i){
		while(y){
		ans = ans*x;
		y= y-1;
		}
	}
	else{
		while(y){
		ans = ans*x;
		y= y+1;
		}
		ans=div(1, ans);
	}
	return ans;
}

