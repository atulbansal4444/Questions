
int lb(int x,int *a,int n)
{
     int l=0;
    int r=n;
    int mid;
    while(l<r)
    {
        mid = (l+r)/2;
        if(a[mid]>=x)
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
int ub(int x,int *a,int n)
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
int comp(const void *a,const void *b)
{
    return (*(int*)a - *(int*)b);
}
int* jobOffers(int scores_size, int* scores, int lowerLimits_size, int* lowerLimits, int upperLimits_size, int* upperLimits, int* result_size) {
    int i;
    *result_size=lowerLimits_size;
    
    qsort(scores,scores_size,sizeof(int),comp);
    
    for(i=0;i<lowerLimits_size;i++)
    {
        int x=0,y=0;
        x=lb(lowerLimits[i],scores,scores_size);
        y=ub(upperLimits[i],scores,scores_size);
        lowerLimits[i]=abs(y-x);
    }
    
    return lowerLimits;
}

