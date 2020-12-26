# include <stdio.h>
# include <string.h>
# include "find.h"
# define LINE 256
# define WORD 30


/**
int getLine(char s[])
{
	char c = 0;
	int i = 0;
	int j = 0;
	while(i<LINE)
	{
		if(scanf("%c", &c)==1 && c!='\n')
		{
			*(s+i)=c;
			i++;
		}
		else
		{
			j = i;
			i = LINE;
		}
	}
	
	/**
	while(i<LINE)
	{
		if(scanf("%c", &c)==1 && c!='\n')
		{
			*(s+i)=c;
			i++;
		}
		else
		{
			j = i;
			i = LINE;
		}
	}
	///////////////////////////////**
	
	//test
	for(int k=0; k<LINE; k++)
	{
		printf("%c, ", s[k]); 
		
	}	
	
	//eot
	*(s+j+1) = '\0';
	return j;
}
*/
int getWord(char w[])
{
	char c = 0;
	int i = 0;
	int j = 0;
	
	while(i<WORD)
	{
		scanf("%c", &c);
		if( c!='\n' && c!='\t' && c!=' ')
		{
			*(w+i)=c;
			i++;
		}
		else
		{
			j = i;
			i = WORD;
		}
	}
	
		*(w+j) = NULL;
	//  test
	printf("the word is: ");
	int k = 0;
	while(w[k])
	{
		printf("%c", w[k]); 
		k++;
	}
	printf("\n");
	


	return j;

}


int subString( char * str1, char * str2)
{
	int l1 = strlen(str1);
	int l2 = strlen(str2);
	
	if(l1<l2)
	{
		//printf("if(l1<l2)\n");
		char * tempP = str1;
		str1 = str2;
		str2 = tempP;
		int tempL = l1;
		l1 = l2;
		l2 = tempL;
	}
	int i = 0;
	
	while(i < l1-l2+1)
	{
		//printf("while(i < l1-l1)\n");
		if(*(str1+i) == *(str2))
		{
			int j = 1, k = i+1;
			while(j < l2)
			{
				if(*(str1+k) == *(str2+j))
				{
					//printf("if(*(str1+k) == *(str2+j))\n");
					k++;
					j++;
				}
				else
				{
					j = l2+1;
				}
			}
			if(j==l2)
			{
				//printf("if(j==l2)\n");
				return 1;
			}
		}
		i++;
	}	
	return 0;
}

int similar(char *str1, char *str2, int n)
{
	int l1 = strlen(str1);
	int l2 = strlen(str2);
	int i =0;
	while(i < l1-l2+1)
	{
		//printf("while(i < l1-l1)\n");
		if(*(str1+i) == *(str2))
		{
			//printf("%c, %c\n", *(str1+i), *(str2));
			int j = 1, k = i+1, counter = 0;
			while(j < l2 && counter<=n && k<l1)
			{
				if(*(str1+k) == *(str2+j))
				{
					//printf("if(*(str1+k) == *(str2+j))\n");
					//printf("%c, %c\n", *(str1+k), *(str2+j));
					k++;
					j++;
				}
				else
				{
					counter++;
					k++;
				}
			}
			if(k-counter==l2)
			{
				//printf("if(j==l2)\n");
				return 1;
			}
		}
		i++;
	}	
	return 0;
	
	
}


//works good
void print_lines(char * str)
{
	char line[LINE] = {0};
	//int print = 0;
	//int i = j = 0;
	//while(fgets(line, LINE, stdin))
	while(*(line))
	{
		
		if(subString(line, str))
		//if(strstr(line, str))
		{
			printf("%s", line);
		}
	}
}
/**
void print_lines(char * str)
{
	char line[LINE] = getLine;
	//int print = 0;
	//int i = j = 0;
	//while(fgets(line, LINE, stdin))
	while(*(line))
	{
		
		if(subString(line, str))
		//if(strstr(line, str))
		{
			printf("%s", line);
		}
	}
}
*/
void print_similar_words(char * str)
{
	char word[WORD] = {0};
	//int print = 0;
	//int i = j = 0;
	//while(fgets(line, LINE, stdin))
	while(getWord(word))
	{
		//word = mystring\0;
		//word = {0}\0;
		if(similar(word, str, 1))
		//if(strstr(line, str))
		{
			printf("%s\n", word);
		}
	}
}



