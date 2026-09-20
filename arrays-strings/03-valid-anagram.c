#include <stdio.h>
#include <stdbool.h>

bool isAnagram(char* s, char* t) {
    int count[26] = {0};

    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
    }

    for (int i = 0; t[i] != '\0'; i++) {
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return false;
        }
    }

    return true;
}

int main() {

    // Test Case 1
    char s1[] = "anagram";
    char t1[] = "nagaram";

    printf("Test Case 1:\n");
    printf("s = \"%s\"\n", s1);
    printf("t = \"%s\"\n", t1);

    if (isAnagram(s1, t1))
        printf("Output: true\n\n");
    else
        printf("Output: false\n\n");


    // Test Case 2
    char s2[] = "rat";
    char t2[] = "car";

    printf("Test Case 2:\n");
    printf("s = \"%s\"\n", s2);
    printf("t = \"%s\"\n", t2);

    if (isAnagram(s2, t2))
        printf("Output: true\n");
    else
        printf("Output: false\n");

    return 0;
}