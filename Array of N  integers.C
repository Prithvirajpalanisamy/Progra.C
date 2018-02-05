#include<stdio.h>
main()
{
int N,K,i,a[50],sum=0;
scanf("%d",&N);
scanf("%d",&K);
for(i=0;i<N;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<K;i++)
{
sum=sum+a[i];
}
printf("%d",sum);
getch();
return 0;
}
