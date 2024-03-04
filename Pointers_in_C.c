#include <stdio.h>

void update(int *a,int *b) {
    int s,ad;
    s=*a+*b;
    ad=*a-*b;
    *a=s;
    *b=abs(ad);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
