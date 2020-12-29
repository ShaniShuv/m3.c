#include "isort.h"
#include <stdio.h>
#define LEN 50

// the main func that scan 50 integers and put then in a zeroed array named arr 
int main(){
	int arr[LEN] = {0};
	for(int k=0; k<LEN; k++)
	{
		scanf("%d", (arr+k));
	}
	insertion_sort(arr, LEN);
	
	
	
	for(int k=0; k<LEN; k++)
	{
		printf("%d", *(arr+k)); 
		if(k!=LEN-1)
		{
			printf(",");
		}
	}
	
	printf("\n");
}
// a func that gets alocation in the array arr, and shift tne i next numbers to the right
int shift_element(int* arr, int i){
	int j=i;
	while(j>0){
	//i--;
		*(arr+j) = *(arr+j-1);
		j--;
	}
	return 0;
}
// a func that gets an array, and sort it, if the sort succeed it returns 0
int insertion_sort(int* arr , int len)
{
	for(int i=1; i<len; i++)
	{
		int temp = len+10;
		int j=i-1;
		while(j>=0)
		{
			if(*(arr+i)<*(arr+j))
			{
				temp = j;
			}
			else if(*(arr+i)>*(arr+j))
			{
				int tempvalue = *(arr+i);
				shift_element(arr+temp, i-temp);
				*(arr+temp) = tempvalue;
				j=-1;

			}
			if(temp==0)
			{
				int tempvalue = *(arr+i);
				shift_element(arr+temp, i);
				*(arr+temp) = tempvalue;
				j=-1;
			}
			j--;	
		}	
	}
	return 0;
}
