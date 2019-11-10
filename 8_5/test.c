#define _CRT_SECURE_NO_WARNINGS 1
/**
* Note: The returned array must be malloced, assume caller calls free().
*/
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
	int* ret = (int*)malloc(2 * sizeof(int));
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 0; i<numsSize; i++)
	{
		for (j = 0; j<numsSize; j++)
		{
			if (i != j)
			{
				if (nums[i] + nums[j] == target)
				{
					ret[count * 2] = i;
					ret[count * 2 + 1] = j;
					*returnSize = 2;
					return ret;
				}
			}

		}
	}
	return ret;
	free(ret);
	ret = NULL;
}