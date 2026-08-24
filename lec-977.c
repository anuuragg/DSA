int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int* res = malloc(numsSize * sizeof(int));

    int l = 0;
    int r = numsSize - 1;
    int i = numsSize - 1;

    while (l <= r) {
        if (abs(nums[l]) > abs(nums[r])) {
            res[i] = nums[l] * nums[l];
            l++;
        } else {
            res[i] = nums[r] * nums[r];
            r--;
        }

        i--;
    }

    *returnSize = numsSize;
    return res;
}