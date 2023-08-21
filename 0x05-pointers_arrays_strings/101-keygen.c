#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 9

int main(void)
{
    srand(time(NULL));
    
    const char valid_chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_.";
    
    char password[PASSWORD_LENGTH + 1]; 
    for (int i = 0; i < PASSWORD_LENGTH; i++)
    {
        int random_index = rand() % (sizeof(valid_chars) - 1); 
        password[i] = valid_chars[random_index];
    }
    password[PASSWORD_LENGTH] = '\0'; 

    printf("Generated password: %s\n", password);
    
    return 0;
}

