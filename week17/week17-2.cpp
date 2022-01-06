#include <stdio.h>
int main()
{
    int N=123456782;

    while(N > 0)
    {
        printf("%d => %d %d \n",N,N/10,N%10);
        N = N / 10;
    }
}

