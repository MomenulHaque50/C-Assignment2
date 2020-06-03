#include<stdio.h>
long Permutation(int n, int r);
long Combination(int n, int r);
long Factorial(int x);


int main(void)
{
    int *ptr;
    int i;
      ptr = (int*) malloc(2* sizeof(int));
    printf("Enter two numbers: ");
    for(i = 0; i < 2; ++i)
    {
        scanf("%d", ptr + i);
    }

    printf("Permutation = %ld\n", Permutation(*(ptr + 0), *(ptr + 1)));
    printf("Combination = %ld", Combination(*(ptr + 0), *(ptr + 1)));

    return 0;
}


long Permutation(int n, int r)
{
    return Factorial(n) / Factorial(n-r);
}

long Combination(int n, int r)
{
    return Permutation(n, r) / Factorial(r);
}

long Factorial(int x)
{

  if (x>=1)
        return x*Factorial(x-1);
    else
        return 1;

}
