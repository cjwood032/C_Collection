#include <stdio.h>
#include <math.h>
int gcd(int i, int j)
{
    if (j==0)
    {
        return i;
    }
    else 
        return gcd(j, i%j); 
}
float absol(float f)
{
    if (f<0)
        return -f;
    else
        return f;
}
float sqart(float f)
{
    float res;
    if (f!=absol(f))
    { 
        printf("negative numbers");
        return -1.0;
    }
    else 
    {
        res =sqrt(f);
        return f;
    }

}
int main()
{
    int i = 42;
    int j = 56;
    int x = 0;
    float fn = -56;
    float fp = 25;
    float ffn;
    float ffp;
    float sq = sqart(25.0);
    x= gcd(i,j);
    ffn = absol(fn);
    ffp = absol(fp);
    printf("GCD is %d\nabs of %.0f is %.0f\nabs of %.0f is %.0f\nsquare root is %.1f", x, fn,ffn,fp,ffp,sq);
    
}