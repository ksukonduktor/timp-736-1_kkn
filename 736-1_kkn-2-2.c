#include <stdio.h>
int main()
{ 
 int i,n,num,proiz=1; 
 scanf("%d",&n);
 for(i=0;i<n;i++)
{
  scanf("%d",&num);
  proiz=proiz*num;
};
printf("%d\n",proiz);
return 0;
}
