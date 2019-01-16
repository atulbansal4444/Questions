int getMaxArea(int* hist, int n)
{
int max = 0,d,t,area;
    
    int i=0;
    int arr[30]={0};
    int k=-1;
    while(i<n)
    {
        if (k==-1 || hist[arr[k]] <= hist[i]) 
        {
         arr[++k]=i;
         i++;
        }
        else
        {
            t = arr[k--];
            area = hist[t] * ((k==-1) ? i : i - arr[k] - 1); 
            
            if(max < area)
                max = area;
            
        }
    }
    while(k!=-1)
    {
         t = arr[k--];
            area = hist[t] * ((k==-1) ? i : i - arr[k] - 1);
            if(max<area) 
                max = area;
    }
    return max;
}