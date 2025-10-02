#include <stdio.h>

int main()
{
    char sentence[200];
    int i = 0, letters = 0, digits = 0, spaces = 0, words = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    while (sentence[i] != '\0')
    {
        if ((sentence[i] >= 'A' && sentence[i] <= 'Z') ||
            (sentence[i] >= 'a' && sentence[i] <= 'z'))
        {
            letters++;
        }
        else if (sentence[i] >= '0' && sentence[i] <= '9')
        {
            digits++;
        }
        else if (sentence[i] == ' ')
        {
            spaces++;
        }
        i++;
    }

    if (letters > 0 || digits > 0)
        words = spaces + 1;

    printf("\nResult:\n");
    printf("Letters: %d\n", letters);
    printf("Digits : %d\n", digits);
    printf("Spaces : %d\n", spaces);
    printf("Words  : %d\n", words);

    return 0;
}
