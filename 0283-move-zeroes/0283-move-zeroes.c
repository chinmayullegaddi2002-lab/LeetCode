void moveZeroes(int* nums, int numsSize) {
    int lastNonZeroFoundAt = 0;
    
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            // Swap the current non-zero element with the element at lastNonZeroFoundAt
            int temp = nums[lastNonZeroFoundAt];
            nums[lastNonZeroFoundAt] = nums[i];
            nums[i] = temp;
            
            // Advance the placement pointer
            lastNonZeroFoundAt++;
        }
}
}