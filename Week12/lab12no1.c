#include <stdio.h> 
#include <stdlib.h> 
 
void addRecord(char *name, int age); 
 
int main() { 
    char name[64]; int age; 
    printf("Enter name: ");  
    scanf("%s", name); 
    printf("Enter age: ");  
    scanf("%d", &age); 
    addRecord(name, age); 
    return 0; 
} 
//You must have created a new folder by now 
 
void addRecord(char *name, int age) { 
    FILE *fp; 
    fp = fopen("lab12/no1/first.txt", "r"); 
    if (fp != NULL) { 
        fclose(fp); 
        fp = fopen("lab12/no1/first.txt", "a"); 
        fprintf(fp,"Name : %s, Age : %d\n",name,age); 
        fclose(fp); 
    } else { 
        fclose(fp); 
        fp = fopen("lab12/no1/first.txt", "w"); 
        fprintf(fp,"Name : %s, Age : %d\n",name,age);   
        fclose(fp); 
    }
}