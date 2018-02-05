#include<stdio.h>
int main()
{
int a,d,n,i,sum,value;
printf("enter the num");
scanf("%d",&n);
printf("Enter the first num");
scanf("%d",&a);
printf("enter the diference");
scanf("%d",&d);
value = a;
printf("AP SERIES\n");
for(i = 0; i<n; i++)
{
printf("%d ", value);
sum += value;
value = value + d;
}
printf(" %d\n",n,sum);
return 0;
}

