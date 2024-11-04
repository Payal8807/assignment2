#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate_password(int length) {
    char possible_chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()";
    char password[length + 1];
    
    srand(time(0)); // Seed for random number generation
    
    for (int i = 0; i < length; i++) {
        int random_index = rand() % (sizeof(possible_chars) - 1);
        password[i] = possible_chars[random_index];
    }
    
    password[length] = '\0'; // Null-terminate the string
    
    printf("Generated password: %s\n", password);
}

int main() {
    int length;
    printf("Enter the desired length of the password: ");
    scanf("%d", &length);
    
    generate_password(length);
    
    return 0;
}