#include<stdio.h>
#include<math.h>
#define e 0.0001
#define f(x) (x*x*x-2*x-5)
#define g(x) (3*x*x-2)
int main()
{
    float a,b,c;
    int i=1;
    printf("enter the values of a n b");
    printf("\n");
    scanf("%f %f",&a,&b);
    if(f(a)*f(b)<=0)
    {
        if(fabs(f(a))<fabs(f(b)))
        {
            c=a;
        }
        else
        {
            c=b;
        }
        do
        {
            c=(c-(f(c)/g(c)));
            printf("i=%d |a=%.4f |b=%.4f |c=%.4f |f(a)=%.4f |f(b)=%.4f |f(c)=%.4f", i,a,b,c,f(a),f(b),f(c));
            printf("\n");
            i++;

        }
        while(fabs(f(c))>e);
        printf("\n");
        printf("roots is %0.4f",c);
    }
    else
    {
        printf("not exist");

    }
    return 0;

}
