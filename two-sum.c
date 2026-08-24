int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int i = 0;
    int x = numbersSize - 1;

    int* result = malloc(2 * sizeof(int));

    while (i < x) {
        if (numbers[i] + numbers[x] == target) {
            result[0] = i + 1;
            result[1] = x + 1;
            *returnSize = 2;
            return result;
        }
        else if (numbers[i] + numbers[x] > target) {
            x--;
        }
        else {
            i++;
        }
    }

    *returnSize = 0;
    return NULL;
}