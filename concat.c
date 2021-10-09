#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void conc (char*, char*, char*, int l);
void conc (char*f, char*s, char*t, int l)
{
    t = (char*)malloc (l+1);
    while (*f!='\0', *s!='\0')
    {
        *t= *f;
        t++; f++;
        *t= *s;
        t++; s++;
    }
    if (*f == '\0')
    {
        while (*s!='\0')
        {
            *t =*s;
            s++;
            t++;
        }
    }
    if (*s == '\0')
    {
        while (*f != '\0')
        {
            *t = *f;
            t++;
            f++;
        }
    }
    *t= '\0';
}
void main ()
{
    char first[50];
    char second[50];
    char target [1003];
    scanf ("%s", first);
    scanf ("%s", second);
    int x = strlen(first);
    x = x + strlen(second);
    conc(first, second, target, x);
    printf ("%s", target);
}