#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



void calculate_the_maximum(int n, int k) 
{
    int max_and = 0, max_or =0, max_xor = 0;
    for (int a=1; a< n; a++)
    {
        for(int b= a+1; b<=n; b++)
        {
            int v_and = a&b;
            int v_or = a|b;
            int v_xor = a^b;
            
            if(v_and < k && v_and > max_and) max_and = v_and;
            if(v_or < k && v_or > max_or) max_or = v_or;
            if(v_xor < k && v_xor > max_xor) max_xor = v_xor;
        }
    }
    printf("%d\n%d\n%d\n", max_and,max_or,max_xor);
    
}

int main() 
{
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
