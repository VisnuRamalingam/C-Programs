#include <stdio.h>
int main()
{
    char c;
    int Vowel, vowel;

    printf("Enter an alphabet: ");
    scanf("%c",&c);

    Vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (Vowel || vowel)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    return 0;
}
