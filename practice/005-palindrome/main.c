#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_palindrome(char string[]);

int main(void) 
{   
    char my_string[] = "bd67a76db"; 

    if (is_palindrome(my_string))
        printf("%s --- is a palindrome.\n", my_string);
    else 
        printf("%s --- is not a palindrome.\n", my_string);

    return 0;
}

bool is_palindrome(char string[]){
    int length = strlen(string);
    int middle = length / 2;

    for (int i=0; i < middle; i++)
        if (string[i] != string[length - i - 1])
            return false;

    return true; 
}