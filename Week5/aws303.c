#include <stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    char check[num];
    scanf("%s",&check);

    int count,i,j;
    scanf("%d",&count);
    char exam[num];
    int score[count];
    for (i=0;i<count;i++) {
        scanf("%s",&exam);
        score[i]=0;
        for(j=0;j<num;j++)
        {
            if(check[j]==exam[j])
            {
                score[i]+=1;
            }
        }
    }
    for (i=0;i<count;i++) {
        printf("std %d => %d\n",i+1,score[i]);
    }

    return 0;
}