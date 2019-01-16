int comp(const void *a,const void *b)
{
    return (*(int*)a - *(int*)b);
}
int lb(int *a,int n,int x)
{
    int l=0;
    int r=n;
    int mid;
    while(l<r)
    {
        mid = (l+r)/2;
        if(a[mid]>x)
        {
            r=mid;
        }
        else
        {
            l=mid+1;
        }
    }
    return l;
}
int* counts(int nums_count, int* nums, int maxes_count, int* maxes, int* result_count) {
    *result_count = maxes_count;
    
    int *arr;
    arr = (int *)calloc(maxes_count,sizeof(int));
    int i,j;
    qsort(nums,nums_count,sizeof(int),comp);
    for(i=0;i<maxes_count;i++)
    {
       arr[i]=lb(nums,nums_count,maxes[i]);
    }
    return arr;
}

