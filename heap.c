#include<stdio.h>
#include<time.h>

heapsort(int h[], int n)
{
	int i, t;
	heapbottomup(h,n);
	for(i=n;i>=2;i--)
	{
		t=h[i];
		h[i]=h[1];
		h[1]=t;
		heapadjust(h,1,i-1);
	}

}

heapadjust(int h[], int i, int n)
{
	int j, k,v;
	int heap;

	k=i;
	v=h[k];
	heap=0;
	while(!heap && 2*k<=n)
	{
		j=2*k;
		if(j<n)
			if(h[j]<h[j+1])
				j=j+1;

			if(v>=h[j])
				heap=1;

			else
			{
				h[k]=h[j];
				k=j;

			}
			h[k]=v;
	}
}

heapbottomup(int h[], int n)
{
	int i;
	for(i=(n/2);i>=1;i--)
	{
		heapadjust(h,i,n);
	}
}
	

	 main()
{

	int i,a[100000],n;
	
	clock_t start ,end; //s-start, e-end.
	printf("Enter the number of elements:\n");
	scanf("%d",&n);

	printf("The elements are:\n");
	for(i=1;i<n;i++)
	{
		a[i]=rand()%100;
		printf("%d\t",a[i]);
	}
	start=clock();
	for(i=1;i<40000;i++)
		heapsort(a,n);

	end=clock();
	
	printf("T\nhe sorted elements are:\n");
	for(i=1;i<n;i++)
		printf("%d\t",a[i]);

	printf("The time is :%f",((float)(end-start))/CLOCKS_PER_SEC);

}