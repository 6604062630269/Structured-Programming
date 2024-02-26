#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int showremovestr(char str1[],char str2[],int arryremove[]);
int main ()
{
    char str1[100], str2[100], str_rem[100];
    int i = 0, j = 0, k = 0;
 	
    printf ("Enter the First string:\n");
    fflush (stdin);
    gets (str1);
 
    printf ("Enter the Second string:\n");
    gets (str2);
 	
 	int strnum = strlen(str1);
 	int arryremove[strnum];
 	showremovestr(str1,str2,arryremove);
 	
    for (i = 0; str1[i]!= '\0'; i++)
    {
        for (j = 0; str2[j] != '\0'; j++)
        {
            if (str1[i] == str2[j])
            {
                continue;
            }
            else
            {
                str_rem[k] = str2[j];
                k ++;
            }
        }
        str_rem[k] = '\0';
        strcpy (str2, str_rem);
        k = 0;
    }
    
    printf("removing: %s\n",str1);
    for(i=0;i<strnum;i++)
    {
    	printf("remove %c = %d\n",str1[i],arryremove[i]);
	}
	printf ("On removing characters from second string we get: %s\n", str_rem);
    return 0;
}
int showremovestr(char str1[],char str2[],int arryremove[])
{
	int i,j;
	int strnum1 = strlen(str1);
	int strnum2 = strlen(str2);
	for(i=0;i<strnum1;i++)
	{
		arryremove[i]=0;
		for(j=0;j<strnum2;j++)
		{
			if(str1[i] == str2[j])
			{
				arryremove[i]+=1;
			}
		}
	}
}


