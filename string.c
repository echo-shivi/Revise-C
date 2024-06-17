#include <stdio.h>

int main()
{

    // string ko initialize
    char name[] = {'S', 'H', 'R', 'A', 'D', 'H', 'A', '\0'};
    char name1[] = "SHRADHA";
    // upar m com piler apne se \0 daal dega agar single quotes m kr diye toh error dega
    char clg[] = {'A', 'P', 'N', 'A', ' ', 'C', 'O', 'L', 'L', 'E', 'G', 'E', '\0'};
    char clg1[] = "Apna College";
    char naam[50];
    scanf("%s", naam);
    printf("%s", naam);
    char fullnaam[50];
    // scanf jo h na nhi le sakta space-- scanf cannot input multi word strings with spaces
    // here gets( ) & puts() come into  picture
    // string functions-- char str[101];
    // gets(str);--in------input a string even a multi word
    // but warning!! its dangerous and unsafe now
    // so we use fgets(str,n,file)--> use fgets(str,n,stdin)--(stdin = standard input)-----stops when n-1 chars input or new line is encountered
    // puts(str);--out------outputs a string
    // scanf("%s", fullnaam);
    // printf("%s \n", fullnaam);

    char str[100];
    fgets(str, 100, stdin);
    puts(str);

    return 0;
}