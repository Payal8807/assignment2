#include <stdio.h>

void despace(char*str){
     int i = 0, j = 0;
    while (str[i]) {
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0';
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    despace(str);
    printf("String after removing spaces: %s\n", str);

    return 0;
}

