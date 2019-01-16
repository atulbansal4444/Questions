int mi(int *lengths,int lengths_size)
{
  int i,min=999999;
  for(i=0;i<lengths_size;i++)
  {
    if(lengths[i]==0)
    {
      
    }
    else
    {
        if(lengths[i] < min)
            min = lengths[i];
    }
  }
  return min;
}

int* cutSticks(int lengths_size, int *lengths, int *result_size) 
{
  int x=lengths_size,j=1,i;
  int *arr;
  arr=(int *)calloc(100,sizeof(int));
  arr[0]=x;
while(x!=0)
{
  int c=0;
  
  	int min = mi(lengths,lengths_size);
  	for(i=0;i<lengths_size;i++)
    {
      if(lengths[i]==min)
      {
        lengths[i]=0;
        c++;
      }
    }
  x=x-c;
  arr[j]=x;
  j++;
}
  j--;
  *result_size=j;
  return arr;
}
