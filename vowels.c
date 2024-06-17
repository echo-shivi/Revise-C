#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toLower(char str[]);

int count(char str[]);
void presentornot(char str[], char c);

int main()
{
    char word[100];
    fgets(word, 100, stdin);
    toLower(word);
    char ch = 'L';
    ch = tolower((unsigned char)ch);
    presentornot(word, ch);
    int res = count(word);
    printf("Count of Vowvels: %d", res);
    return 0;
}
void toLower(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = tolower((unsigned char)str[i]);
    }
}

void presentornot(char str[], char ch)
{
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == ch)
        {
            printf("yes");
            return;
        }
    }
    printf("nope");
}

int count(char str[])
{
    int cnt = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            cnt++;
        }
    }
    return cnt;
}