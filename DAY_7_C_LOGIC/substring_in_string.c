#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];

    printf("Enter elements in main string: ");
    gets(s1);
    printf("Enter elements in sub string: ");
    gets(s2);

    char *p = strstr(s1, s2);

    if (p) {  
        printf("String Found\n");
        printf("The sub string is: %s\n", s2);
    } else {
        printf("Substring not found!\n");
    }

    return 0;
}

