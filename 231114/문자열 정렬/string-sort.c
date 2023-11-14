#include <stdio.h>
#include <string.h>
int main() {
    char str[101];
    scanf("%s", str);

    for (int i = 0; i < strlen(str) - 1; i++) {
        for (int j = i + 1; j < strlen(str); j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    for (int i = 0; i < strlen(str); i++) {
        printf("%c", str[i]);
    }

    return 0; 
}