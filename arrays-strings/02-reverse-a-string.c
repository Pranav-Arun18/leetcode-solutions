#include <stdio.h>
#include <string.h>

void reverseString(char* s, int sSize) {
    int left = 0;
    int right = sSize - 1;

    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}

int main() {
    // Test Case 1: Normal case
    char str1[] = "hello";

    printf("Test Case 1:\n");
    printf("Input: %s\n", str1);

    reverseString(str1, strlen(str1));

    printf("Output: %s\n\n", str1);


    // Test Case 2: Edge case
    char str2[] = "a";

    printf("Test Case 2:\n");
    printf("Input: %s\n", str2);

    reverseString(str2, strlen(str2));

    printf("Output: %s\n", str2);

    return 0;
}

