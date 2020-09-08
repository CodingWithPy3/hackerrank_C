#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



void calculate_the_maximum(int n, int k) {
  int i,j,temp,and_min=0,or_min=0,xor_min=0;
  
  for (i=1;i<=n;i++)
  {
      for (j=i+1;j<=n;j++)
      {
         
          temp = i&j;
          if( temp>and_min && temp < k ) and_min = temp;
           temp = i|j;
          if( temp>or_min && temp < k ) or_min = temp;
          temp = i^j;
          if( temp>xor_min && temp < k ) xor_min = temp;
    }
  }
    
    printf("%d\n%d\n%d",and_min,or_min,xor_min);


}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

