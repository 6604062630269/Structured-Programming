#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n);

    for (int i=0; i<n; i++) {
        char fulltext[14];
        scanf("%s", fulltext);

        if (fulltext[0] > 57) {     // Not Digital ( Ascii )
            int count = 0;
            char user[5];
            while (fulltext[count] != ':') {    // Loop [Start - ':']
                user[count] = fulltext[count];
                count++;
            }
            if (count != 4) {
                continue;
            }

            int digital2 = 0;
            int UpperChar = 0;

            count = 5;     // Skip ':'
            char temp = fulltext[count];
            while (temp != '\0') {                  // Loop [':' - End]
                if (temp >= 48 && temp <= 57) {     // Is Digital
                    digital2++;
                } else if (temp >= 65 && temp <= 90) {
                    UpperChar++;
                }
                count += 1;
                temp = fulltext[count];
                // temp = fulltext[++count];
            }
            if (digital2 < 2 || !UpperChar) {
                continue;
            }
            user[4] = '\0';
            printf("%s\n", user);
        }
    }
    return 0;
}