#include <stdio.h>
int main()
{
    int primes[30] = {2, 3};
    int primecounter = 2;
    _Bool prime;
    for (int i = 5; i <= 100; i+=2)
    {
        int half = i / 2;
        _Bool prime = 1;
        for (int j = 2; j <= half; j++)
        {
            if (i % j == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime)
        {
            primes[primecounter] = i;
            primecounter++;
        }
        
    }
    for (int i =0; i<29; i++)
        {
            printf("[%d], ", primes[i]);
        }
    return 0;
}
/*
_Bool isPrime(int i)
{
    int half = i/2;
    _Bool prime = 1;
    for(int j = 2; j<=half; j++)
    {
        if (i%j==0)
        {
            prime = 0;
            break;
        }
    }
    return prime;
}
*/