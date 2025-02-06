#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

char* minWindow(char* s, char* t) {
    int countT[256] = {0};
    int countS[256] = {0};
    int count = 0;
    int start = 0; // left edge
    int initial_idx = -1; // for the best window
    int min_len_found = INT_MAX;

    for (int i = 0; t[i] != '\0'; i++) {
        countT[(int)t[i]]++;
    }

    int Slen = strlen(s);
    int Tlen = strlen(t);

    int i = 0;

    // Sliding window algorithm
    while (i < Slen) {
        char ch = s[i];
        countS[(int)ch]++;

        if (countT[(int)ch] != 0 && countS[(int)ch] <= countT[(int)ch]) {
            count = count + 1;
        }

        // If a valid window is found, move the start pointer to the right
        while (count == Tlen) {
            char start_ch = s[start];
            countS[(int)start_ch]--;

            if (countT[(int)start_ch] != 0 && countS[(int)start_ch] < countT[(int)start_ch]) {
                if (i - start + 1 < min_len_found) {
                    min_len_found = i - start + 1;
                    initial_idx = start;
                }
                count--;
            }

            start++;
        }

        i++;
    }

    if (initial_idx == -1) {
        printf("No valid window found\n");
        return NULL;
    }

    char* result = (char*)malloc(min_len_found + 1);
    strncpy(result, s + initial_idx, min_len_found);
    result[min_len_found] = '\0';

    return result;
}

int main() {
    char s[100], t[100];
    printf("Enter the main string: ");
    scanf("%s", s);
    printf("Enter the target string: ");
    scanf("%s", t);

    char* result = minWindow(s, t);
    if (result != NULL) {
        printf("Minimum window: %s\n", result);
        free(result);
    }

    return 0;
}
