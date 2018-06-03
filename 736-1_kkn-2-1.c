#include <stdio.h>
int main(void)
{
 int i, n;
 double a, sum=0, sr=0;
 scanf ("%d",&n);
 for (i=1; i<n+1; i++)
{
  scanf ("%lf", &a);
  sum+=a;
  sr=sum/i;
}
 printf("%lf\n", sr);
 return 0;
}
