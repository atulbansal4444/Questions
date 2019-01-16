char* mergeStrings(char* a, char* b) {
    int x = strlen(a);
    int y = strlen(b);
    char *arr;
    arr = (char *)calloc((x+y),1);
    int z;
    if(x>y)
    {
        z=y;
    }
    else
    {
        z=x;
    }
    int i,k=0;
    for(i=0;i<z;i++)
    {
        arr[k++]=a[i];
        arr[k++]=b[i];
    }
    if(x>y)
    {
       for(i=z;i<x;i++)
       {
        arr[k++]=a[i];   
       }
    }
    else
    {
        for(i=z;i<y;i++)
       {
        arr[k++]=b[i];   
       }
    }
    k--;
    return arr;
}

