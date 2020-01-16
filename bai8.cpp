#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <math.h>
int main()
{   int key, count;
	char s[31];
	int i,j;
	do{
		printf("\nPlease enter a string: ");
		gets(s);
		printf("\nFound characters:");
		for(i=0;i<strlen(s);i++)
		{
			for(j=0;j<strlen(s);j++)
			{
				if(s[i]==s[j])
				count +=1;
			}
				if(count==1)
				
				printf("%3c", s[i]);
				count =0;
			}
			printf("\n--------------------------------------------------- ");
			printf("\nPress enter to continue, Esc to exit ");
			key=getch();
    	}while (key!=27);
}
