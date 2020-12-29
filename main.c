#include <stdio.h>
#include "myMath.h"


int main(){
	float x = 0;
	printf("Please insert a real number\n");
	scanf("%f", &x);
	float ans1=0, ans2=0, ans3=0, temp=0;
	
	int intX = x;
	ans1 = Exponent(intX);
	ans1 = add(ans1, Power(x, 3));
	ans1= add(ans1, -2);
	
	ans2= Power(x, 2);
	ans2 = mul(ans2, 2);
	temp=mul(x, 3);
	ans2 = add(temp, ans2);
	temp = 0;
	
	temp = Power(x, 3);
	temp = mul(temp, 4);
	temp = div(temp, 5);
	ans3 = mul(x, -2); 
	ans3 = add(ans3, temp);
	
	printf("f(x) = e^x + x^3 - 2 = %0.4f \n", ans1);
	printf("f(x) = 3x + 2x^2 = %0.4f \n", ans2);
	printf("f(x) = (4x^3)/5 - 2x = %0.4f \n", ans3);
}
