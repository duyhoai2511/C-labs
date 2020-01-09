#include <stdio.h>
#include <string.h>
#include <conio.h>
int main()
{
	int i;
	char str[100];
	int key;
	do {
		printf("\nPlease enter string: ");
		gets(str);
		printf("The old string: %s",str);
		for(i=strlen(str);i>=0;i--)
		{
			if(str[i]==' ')
			{ 
				str[i]='\0';
				printf("\nThe reversed string:%s ", &(str[i])+1);
			}
		}	
		printf("%s",str);
		printf("\nPress enter to continue another reverse, ESC to exit");
		key=getch();
	}while(key!=27);	
}
