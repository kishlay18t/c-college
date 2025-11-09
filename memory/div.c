#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  // k is the maximum value. n --> 1 to n.
  int maxand = 0, maxor = 0, maxxor = 0;
  
  for (int a = 1; a <= n; a++)
  {
    for (int b = a+1; b <= n; b++)
    {
        int andval = a&b, orval = a | b, xorval = a ^ b;
        
        if (andval < k && andval > maxand)   maxand = andval ;
        if (orval < k && orval > maxor)     maxor = orval ;
        if (xorval < k && xorval > maxxor)    maxxor =xorval;
    }
  }
  
    printf("%d\n%d\n%d\n", maxand,maxor,maxxor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
