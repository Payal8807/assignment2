#include <stdio.h>
#include <string.h>

void reverse_words(char *sentence) {
    int length = strlen(sentence);
    char reversed[length + 1];
    int word_start = length;
    int word_end = length;
    int index = 0;

    for (int i = length - 1; i >= 0; i--) {
        if (sentence[i] == ' ' || i == 0) {
            if (i == 0) {
                word_start = i;
            } else {
                word_start = i + 1;
            }
            for (int j = word_start; j < word_end; j++) {
                reversed[index++] = sentence[j];
            }
            if (i != 0) {
                reversed[index++] = ' ';
            }
            word_end = i;
        }
    }
    reversed[index] = '\0';
    printf("Reversed sentence: %s\n", reversed);
}

int main() {
    char sentence[] = "Hello world this is C";
    reverse_words(sentence);
    return 0;
}