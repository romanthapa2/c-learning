#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("enter a character you want to check \n");
    scanf("%s", str);
    int strlength = strlen(str);
    int isPalindrome = 0;

    for (int i = 0; i < strlength / 2; i++)
    {
        if (str[i] != str[strlength - i - 1])
        {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome)
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}