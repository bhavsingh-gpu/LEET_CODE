
int removeDuplicates(int* nums, int numsSize) {
    int total = numsSize;
    int i = 0;
    int j, delete_index;

    while (i < total - 1) {

        if (nums[i] == nums[i + 1]) {

            delete_index = i + 1;

            for (j = delete_index; j < total - 1; j++) {
                nums[j] = nums[j + 1];
            }

            total--;

        }
        else {
            i++;
        }
    }

    return total;
}
