int minimumOperations(int* nums, int numsSize) {
    int nop = 0;
    int mod;
    for (int i = 0; i < numsSize; ++i) {
        mod = nums[i] % 3;

        if (mod != 2) {
            nop += mod;
        } else ++nop;
    }

    return nop;
}
