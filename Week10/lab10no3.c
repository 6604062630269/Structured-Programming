#include <stdio.h>
#include <string.h>
int sumdigit(char text[]);
int main()
{
	char input[100];
	printf("Enter input: ");
	gets(input);
	int sum = sumdigit(input);
	printf("Sum of digit char %d\n",sum);
	
	return 0;
}
int sumdigit(char text[])
{
	int digit = strlen(text);
	int i,sum=0;
	for(i=0;i<digit;i++)
	{
		if(text[i]>=48 && text[i]<=57)
		{
			sum+=text[i]-48;
		}
	}
	return sum;
}