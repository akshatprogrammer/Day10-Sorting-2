void quicksort(int *a,int l,int r)
{
	if(l<=r)
	{
		int p = partition(a,l,r);
		quicksort(a,l,p-1);
		quicksort(a,p+1,r);
	}
}
int partition(int *a,int l,int r)
{
	int j = l-1,i=l,pivot=a[r];
	while(i<=r)
	{
		if(a[i]<=a[r])
		{
			j++;
			swapp(&a[i],&a[j]);
		}
		i++;
	}
	return j;
}
void swapp(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b; 
	*b=t;
}
