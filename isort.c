#include "isort.h"
#include <stdio.h>
#define LEN 10


int main(){
	int arr[50] = {0};
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
	





}
int shift_element(int* arr, int i){
	while(i){
		*(arr+i) = *(arr+i-1);
		i--;
	}
	return 0;
}
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
			if((*(arr+i)>*(arr+j)  || j==0) && temp <len )
			{
				printf("i = %d, arr[i] = %d \n  j = %d, arr[j] = %d \n temp = %d, arr[temp] = %d \n ", i, arr[i], j, arr[j], temp, arr[temp]);
				
				for(int k=0; k<10; k++){
					printf("%d, ", arr[k]); 
		
				}
				printf("\n");
				int tempvalue = *(arr+i);
				shift_element(arr+temp, i);
				*(arr+temp) = tempvalue;
				printf("i = %d, arr[i] = %d \n  j = %d, arr[j] = %d \n temp = %d, arr[temp] = %d \n ", i, arr[i], j, arr[j], temp, arr[temp]);
				j=-1;
				for(int k=0; k<10; k++){
					printf("%d, ", arr[k]); 
		
				}
				printf("\n\n\n");
				j=-1;
				printf("\n");

			}
			j--;
				
		}	
	}
	return 0;


}
