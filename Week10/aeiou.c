#include <stdio.h>
#define MAX 50

void countVowel(int [], char []);

int main() {
    char Vowel[6] = {'A', 'E', 'I', 'O', 'U'};
    char text[MAX];
    int count[5] = {0,0,0,0,0};
    printf("Enter text: ");
    scanf("%s", text);
    countVowel(count, text);

    for (int i=0; i<5; i++) {
        printf("Text : [%c] has %d vowels\n", Vowel[i], count[i]);
    }
    return 0;
}

void countVowel(int count[], char t[]) {
    int i=0;
    while (i<MAX && t[i]!= '\0') {
        if (t[i]=='A' || t[i]=='a') {
            count[0]++;
        } else if (t[i]=='E' || t[i]=='e' ) {
            count[1]++;
        } else if (t[i]=='I' || t[i]=='i' ) {
            count[2]++;
        } else if (t[i]=='O' || t[i]=='o' ) {
            count[3]++;
        } else if (t[i]=='U' || t[i]=='u') {
            count[4]++;
        }
        i++;
    }
}
