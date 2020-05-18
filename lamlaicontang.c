#include<stdio.h>
#include<stdlib.h>
void nhap(int *a,int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		printf("a[%i]=",i);
		scanf("%i",(a+i));
	}
}

void contang(int *a,int n)
{
int i=1,j,dem[100];
for(i=1;i<n;i++)
dem[i]=0;
i=1;
	while(i<n)
	{ j=i;
		while(*(a+j)<*(a+j+1)&&j<n)
				{
					dem[i]++;
					j++;
				}
	i++;
	}
		for(i=1;i<n;i++)
		printf("dem[%i]=%i \n",i,dem[i]);
	int max,m[100];
	max=dem[1];
	for(i=1;i<n;i++)
	if(dem[i]>max)
	max=dem[i];

	int t=1;
	for(i=1;i<n;i++)
	if(dem[i]==max)
	{
	       m[t]=i;
		   t++;
	}
    j=1;int k;
    printf("%i \n",max);
	while(j<=t-1)
	{
		for(i=m[j];i<=m[j]+max;i++)
		printf("%i",*(a+i));
		printf("\n hihi");
		j++;
	}	
	
}
int *minn(int *a,int n)
{
	int i;
int	min =*(a+1);
	for(i=1;i<=n;i++)
	if(min>*(a+i))
	min=*(a+i);
	return &min;
}
int main()
{
	int *a;
	a=(int *)malloc(sizeof(int));
	int n;
	printf("nhap so phan tu cua mang n=");
	scanf("%i",&n);
	printf("nhap mang \n");
	nhap(a,n);
	contang(a,n);
	printf("\n min= %i",*minn(a,n));
}
