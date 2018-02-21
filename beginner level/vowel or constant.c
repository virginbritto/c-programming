#include <stdio.h>
int main()
{
    char c;
    int smallsizeVowel,capitalsizeVowel;

    printf("Enter an alphabet: ");
    scanf("%c",&c);

    smallsizeVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    capitalsizeVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (smallsizeVowel || capitalsizeVowel)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    return 0;
}
