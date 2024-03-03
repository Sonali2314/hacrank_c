#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
char c;
char ch[20];
char s[100];
scanf("%c",&c);
scanf("%s", ch);
getchar();
scanf("%[^\n]%*c", s);
printf("%c\n",c);
printf("%s\n",ch);

printf(s);
    return 0;
}
