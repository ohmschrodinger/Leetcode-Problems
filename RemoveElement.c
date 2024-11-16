int removeElement(int* nums, int numsSize, int val) {
    int k = 0;
    int last = numsSize - 1;

    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] == val)
        {
            nums[i] = -1;
            k++; 
        }
    }

    for (int j = 0; j < numsSize; j++)
    {
        for (int i = 0; i < last; i++)
        {
            if (nums[i] == -1 && last > i)
            {  
                int temp = nums[i];
                nums[i] = nums[last];
                nums[last] = temp;
                last--;
            }
        }
    }

    return numsSize - k; 
}
