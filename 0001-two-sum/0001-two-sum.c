/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{  
   int *arr=(int*)malloc(2*sizeof(int));
   for (int j=0;j<numsSize;j++)
   {
     for(int a=j+1;a<numsSize;a++)
     {
        if(nums[j]+nums[a]==target)
        {
            arr[0]=j;
            arr[1]=a;
            *returnSize =2;
            return arr;
        }
     }
   }
*returnSize = 0;
free(arr);
return NULL;
}