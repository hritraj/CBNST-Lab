#include<stdio.h>
#include<math.h>
#define f(x) x*x*x
int main()
{
    int i,j,a,b,n;
    float h,v1,v2=0,v;
    printf("Enter the lower and upper limit\n");
    scanf("%d%d",&a,&b);
    printf("Enter the number of interval\n");
    scanf("%d",&n);
    float x[n],y[n];
    h=(float)(b-a)/n;
    for(int i=0;i<=n;i++)
    {
        x[i]=a+i*h;
    }
    for(int i=0;i<=n;i++)
    {
        y[i]=f(x[i]);
    }
    v1=y[0]+y[n];
    for(int i=1;i<=n-1;i++)
    {
        v2=v2+y[i];
    }
    v=(float)((h/2)*(v1+2*v2));
    printf("integral is %f",v);
    return 0;
}
