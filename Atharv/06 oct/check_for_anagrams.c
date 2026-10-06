// Write a C program to check whether two strings are anagrams of each other.

/*
DON'Ts:

Don't use a second string to rearrange/sort the characters.
Don't sort either string.
Don't use any library function that directly checks for anagrams.
Don't assume both strings will have the same length.
Don't make the entire logic inside main() — use a separate function.
Don't ignore repeated characters. For example, aab and abb are not anagrams.
*/


#include <stdio.h>
#include <string.h>

void anagrams(char arr1[], char arr2[]);

int main()
{
    char arr1[500];
    char arr2[500];

    printf("Enter First word: ");
    fgets(arr1, 500, stdin);

    printf("Enter Second word: ");
    fgets(arr2, 500, stdin);

    anagrams(arr1, arr2);

    return 0;
}

void anagrams(char arr1[], char arr2[])
{
    if (strlen(arr1) != strlen(arr2))
    {
        printf("Not an anagram");
        return;
    }

    for (int i = 0; arr1[i] != '\0'; i++)
    {
        int n = 0;
        int m = 0;

        for (int j = 0; arr1[j] != '\0'; j++)
        {
            if (arr1[j] == arr1[i]) // count repeated elements in same array
            {
                n++;
            }
        }

        for (int j = 0; arr2[j] != '\0'; j++)
        {
            if (arr2[j] == arr1[i]) // then compare with second array
            {
                m++;
            }
        }

        if (n != m)
        {
            printf("Not an anagram");
            return;
        }
    }

    printf("It is an Anagram.");
}
