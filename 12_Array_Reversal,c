#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i,s;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    int rarr[num];
    for(i=0;i<num;i++)
    {
        s=arr[i];
        arr[i]=rarr[(num-1)-i];
        rarr[(num-1)-i]=s;
    }
    for(i=0;i<num;i++)
    {
        arr[i]=rarr[i];
    }

    for(i = 0; i<num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
