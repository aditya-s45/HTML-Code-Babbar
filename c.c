#include<stdio.h>



int fibo(int n) {
    if (n == 1 || n == 2)  // Base case: If n is 1 or 2, return 1
        return 1;
    else                    // Recursive case: Calculate F(n) as the sum of F(n-1) and F(n-2)
        return (fibo(n-1) + fibo(n-2));
}
