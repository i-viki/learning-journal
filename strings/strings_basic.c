#include <stdio.h>
#include <string.h>

/* Strings in C - TN 11th Std */
int main()
{
    char str1[50], str2[50];

    printf("Enter a string: ");
    gets(str1);

    printf("Length: %d\n", strlen(str1));

    strcpy(str2, str1);
    printf("Copied string: %s\n", str2);

    strrev(str1);
    printf("Reversed: %s\n", str1);

    strupr(str2);
    printf("Uppercase: %s\n", str2);

    strlwr(str2);
    printf("Lowercase: %s\n", str2);

    return 0;
}
