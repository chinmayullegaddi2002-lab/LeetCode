int firstStableIndex(int* nums, int numsSize, int k) {
   
    for(int i=0;i<numsSize;i++)
    {  
        int max=0;
        int min=numsSize-1;
        
       for(int a=0;a<i-1;a++)
       {
          if(nums[a]>nums[max])
          {
            max=a;
          }
       } 
       for(int b=i;b<numsSize;b++)
       {
           if(nums[b]<nums[min])
           {
              min=b;
           }
       }
        if(nums[max]-nums[min]<=k)
           {  
              return i;
           }
    }
  return -1;
}