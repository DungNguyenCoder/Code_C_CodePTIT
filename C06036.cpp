#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char s[100005];

int main()
{
    gets(s);
    printf("%d",strlen(s) - 1);
}