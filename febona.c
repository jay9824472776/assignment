#include<stdio.h>
main()
{
	int n1=0,n2=1,n,i,n3;
	printf("enter terms:");
	scanf("%d",&n);
	if(n>=1)
	printf("%d",n1);
	if(n>=2)
	printf("\n%d",n2);
	
  for(i=3;i<=n;i++)
    {
	n3=n1+n2;
    printf("\n%d",n3);
    n1=n2;
    n2=n3;
    } 
    return 0;
}
