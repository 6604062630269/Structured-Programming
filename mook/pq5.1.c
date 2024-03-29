#include<stdio.h>
#include<string.h>


int main(void){
    int i = 0,ii = 0,k = 0;
    int keep_l[20];
    char text[30][30];
    char keep_t[30][30];
    char t[30][30];
    gets(text);
    int keep = strlen(text);
    while(strcmp(t,"end_of_string")){
        fflush(stdin);
        gets(t);
        strcpy(keep_t[i],t);
        keep_l[i] = strlen(t);
        i++;
    }
//---------debug-----------------//
//    for(ii = 0;ii < i;ii++){
//        printf("%s\n",keep_t[ii]);
//    }
//    printf("%d\n",keep);
//     for(ii = 0;ii < i;ii++){
//        printf("%d\n",keep_l[ii]);
//    }
//    printf("%d\n",i);
//----------debug-----------------//

    char min[20][30];
    for(ii = 0;ii < i;ii++){
        if(keep_l[ii] < keep){
            strcpy(min[k],keep_t[ii]);
            k++;
        }
    }
    for(ii = 0;ii < k-1;ii++){
        printf("%s\n",min[ii]);
    }
}
