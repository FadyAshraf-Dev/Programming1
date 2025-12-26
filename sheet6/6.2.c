#include <stdio.h>
#include <string.h>

int main()
{
    char ch, s[80],b[80];

    int n;
    gets(s);
    scanf ("%c %d", &ch ,&n);

    strcpy (b, &s[n-1]);
    s[n-1] =ch;
    strcpy(&s[n], b);

    printf("\n The new string is:");
    puts(s);
    return 0;
}
