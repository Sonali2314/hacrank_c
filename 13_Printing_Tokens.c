#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char s[1000];
    char c='\0';
    scanf("%[^\n]%*c", &s);
    int i,n,j,k;
    strcat(s,&c);
    for(i=0;i<=1000;i++)
    {
        if(s[i]==c)
        {
            n=i;
            break;
        }
    }
    for(i=0;i<=n;i++)
    {
        if(s[i]==' ')
        {
            s[i]='\n';
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%c",s[i]);
    }
    return 0;
}
