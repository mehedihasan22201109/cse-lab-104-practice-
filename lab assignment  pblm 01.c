#include <stdio.h>
int Getfactorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * Getfactorial(n - 1);
    }
}
int main() {
    int n,result;
    printf(" n = ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative integers.\n");
    } else {
         result = Getfactorial(n);
        printf("%d! = %d\n", n, result);
    }

    return 0;
}


