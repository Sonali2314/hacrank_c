#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



void calculate_the_maximum(int n, int k) {
  int mor=0, mand=0, mxor=0;
  for(int i=1;i<=n;i++){
      for(int j=i+1;j<=n;j++){
          int tand=i&j;
          int tor=i|j;
          int txor=i^j;
          if (tand>mand && tand<k)
          {
              mand=tand;
          }
          if (tor>mor && tor<k)
          {
              mor=tor;
          }
          if (txor>mxor && txor<k)
          {
              mxor=txor;
          }
      }
  }
  printf("%d\n%d\n%d",mand,mor,mxor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
