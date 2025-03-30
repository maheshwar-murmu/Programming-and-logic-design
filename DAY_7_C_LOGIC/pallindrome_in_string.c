#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Enter a string: ");
    gets(s);

    int left = 0, right = strlen(s) - 1;
    int isPalindrome = 1;

    while (left < right && isPalindrome) {
        isPalindrome = (s[left] == s[right]);
        left++;
        right--;
    }

    if (isPalindrome)
        printf("Palindrome\n");
    else
        printf("Not a Palindrome\n");

    return 0;
}

