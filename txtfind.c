# include <stdio.h>
# include <string.h>
# include "txtfind.h"
# define LINE 256
# define WORD 30

int main()
{
	char s[WORD] = {0};
	getWord(s);
	char c = getchar();
	
	if(c=='a')
	{
		print_lines(s);
		
	}
	else if(c=='b')
	{
		print_similar_words(s);
	}
}
// scan a line to a given char array
int getLine(char s[])
{
	char c = 0;
	int i = 0;
	int j = 0;
	while(i<LINE)
	{
		if(scanf("%c", &c)==1 && c!='\n' && c!=EOF)
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
	*(s+j+1) = '\0';
	return j;
}
// scan a word to a given char array
int getWord(char w[])
{
	char c = 0;
	int i = 0;
	int j = 0;
	
	while(i<WORD)
	{
		scanf("%c", &c);
		if( c!='\n' && c!='\t' && c!=' ' && c!=EOF)
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
	
	*(w+j) = '\0';
	return j;

}

// checks if one string is sub string of t he other
int subString( char * str1, char * str2)
{
	int l1 = strlen(str1);
	int l2 = strlen(str2);
	
	if(l1<l2)
	{
		char * tempP = str1;
		str1 = str2;
		str2 = tempP;
		int tempL = l1;
		l1 = l2;
		l2 = tempL;
	}
	int i = 0;
	
	while(i < l1-l2)
	{
		if(*(str1+i+1) == *(str2))
		{
			int j = 1, k = i+2;
			while(j < l2)
			{
				if(*(str1+k) == *(str2+j))
				{
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
				return 1;
			}
		}
		i++;
	}	
	return 0;
}
// checks if two strings has less that n changes between them
int similar(char *str1, char *str2, int n)
{
	int l1 = strlen(str1);
	int l2 = strlen(str2);
	int i =0;
	while(i < l1-l2+1)
	{
		if(*(str1+i) == *(str2))
		{
			int j = 1, k = i+1, counter = 0;
			while(j < l2 && counter<=n && k<l1)
			{
				if(*(str1+k) == *(str2+j))
				{
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
				return 1;
			}
		}
		i++;
	}	
	return 0;
	
	
}
void print_lines(char * str)
{
	char line[LINE] = {0};
	getLine(line);
	getLine(line);
	while(getLine(line))
	{
		if(subString(line, str))
		{
			printf("%s\n", line);
		}
	}
}

void print_similar_words(char * str)
{
	char word[WORD] = {0};
	getWord(word);
	getWord(word);
	while(getWord(word))
	{
		if(similar(word, str, 1))
		{
			printf("%s\n", word);
		}
	}
}



