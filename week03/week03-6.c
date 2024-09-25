//c
#include <stdio.h>
int main()
{
	int a[99],now,N=0,ans=0;
	while(1)
	{	
		scanf("%d",&now);
		if(now==0) break;
		a[N++] = now;
	}
	scanf("%d",&now);
	for(int i=0;i<N;i++)
	{
		if(a[i]==now) ans++;
	}
	printf("%d\n",ans);
}