//Write a program to Remove duplicate characters. 

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, len;
    int visited[256] = {0};

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);
    j = 0;

    for (i = 0; i < len; i++) {
        if (!visited[(unsigned char)str[i]]) {
            visited[(unsigned char)str[i]] = 1;
            str[j++] = str[i];
        }
    }

    str[j] = '\0';

    printf("String after removing duplicates: %s\n", str);

    return 0;
}