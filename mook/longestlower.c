#include<stdio.h>
#include<string.h>
int main(void){
    int n;
    int keep_l[100];

    //input n
    scanf("%d",&n);

    //input char
    int i,j,ii = 0;
    int k[n];
    char t[n][20];
    char lower[n][20];
    for(i = 0;i < n;i++){
        scanf("%s",&t[i]);
        keep_l[i] = strlen(t[i]);
        k[i] = 0;
        for(j = 0;j < keep_l[i];j++){
            if(t[i][j] >= 'a' && t[i][j] <= 'z'){
                k[i]++;
            }
        }
    }
    for(i = 0;i < n;i++){
        if(k[i] == keep_l[i]){
            strcpy(lower[ii],t[i]);
            ii++;
        }
    }
    int max;
    char maxlet[20][20];
    strcpy(maxlet[0],lower[0]);
    max = strlen(lower[0]);
    for(i = 0;i < ii;i++){
        int cmp;
        cmp = strlen(lower[i]);
        if(cmp > max){
            strcpy(maxlet[0],lower[i]);
        }
    }
    //output
    printf("%s",maxlet[0]);

    return 0;
}

