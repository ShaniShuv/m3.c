#include <stdio.h>
#include "temp.h"
#include "find.h"

int main(){
	char s[] = "cat";
	print_lines(s);
	printf("test2:\n");
	print_similar_words(s);
	
	/**
	char s1[] = "123456";
	char s2[] = "135";
	printf(" s1 = %s, s2 = %s, if similar = %d, should be = 1  \n", s1, s2, similar(s1, s2, 3));
	printf(" s1 = %s, s2 = %s, if similar = %d, should be = 1  \n", s1, s2, similar(s1, s2, 2));
	printf(" s1 = %s, s2 = %s, if similar = %d, should be = 0  \n", s1, s2, similar(s1, s2, 1));
	char s3[] = "15";
	printf(" s1 = %s, s3 = %s, if similar = %d, should be = 0  \n", s1, s3, similar(s1, s3, 2));
	printf(" s1 = %s, s3 = %s, if similar = %d, should be = 1 \n", s1, s3, similar(s1, s3, 3));
	*/

	
	/**
	char s1[] = "123456";
	char s2[] = "123456";
	printf(" s1 = %s, s2 = %s, if sub string = %d \n", s1, s2, subString(s1, s2));
	printf(" s1 = %s, s2 = %s, if sub string = %d \n", s2, s1, subString(s2, s1));
	char s3[] = "56";
	printf(" s1 = %s, s3 = %s, if sub string = %d \n", s1, s3, subString(s1, s3));
	printf(" s1 = %s, s3 = %s, if sub string = %d \n", s3, s1, subString(s3, s1));
	*/
	
	//char s[10];
	//getWord(s);
	
//	int i = 5;
//	int* p = &i;
//	*p = 6;
//	int j = *p;
//	printf("i = %d, j = %d", i, j);
//	printf("lalala");
	

	//int arr[10] = {1, 2, 3, 4, 5, 6, 7};
	//shift_element(arr, 2);
	
	/**
	int arr1[13] = {6, 7, 3, 9, 1, 0, 13, 56};
	insertion_sort(arr1, 10); 
	
	for(int i=0; i<10; i++){
		printf("%d, ", arr1[i]); 
		
	}
	printf("\n");
	*/
	



}
