#include <stdio.h>
#include "myMath.h"

// this function calculate addition between two given real numbers and returns the result
float add (float x, float y){
	return x+y;
}
// this function calculate subtraction between two given real numbers and returns the result
float sub (float x, float y){
	return x-y;
}
// this function calculate multiplication between two given numbers, one is a real number and the other is integer, it returns the result
double mul(double x, int y){
	return x*y;
}
// this function calculate division of one real number by an integer, it returns the result
double div(double x, int y){
	if(!y){
		return 0;
	}
	return x/y;
}
