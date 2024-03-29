#include<stdio.h>

int check(int A[],int B[],int length);

int main(void){
    int n;
    scanf("%d",&n);
    int i;
    int num[n];
    int num2[n];
    for(i = 0;i <n;i++){
        scanf("%d",&num[i]);
    }
    for(i = 0;i <n;i++){
        scanf("%d",&num2[i]);
    }
    check(&num,&num2,n);
}

int check(int A[],int B[],int length){
    int count = 0;
    int i,ii = 0;
    int m[10];
    for(i = 0;i <length;i++){
        if(A[i] > B[i]){
            count++;
            m[ii] = i+1;
            ii++;
        }
    }
    printf("%d\n",count);
    for(i = 0;i < count;i++){
        printf("%d ",m[i]);
    }
}

