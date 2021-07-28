# bubble sort
# 从小到大排序

# 方法一
def bubble_sort(nums):
    total = len(nums)
    for i in range(0, total):
        for j in range(i+1, total):
            if nums[i] > nums[j]:
                tmp = nums[i]
                nums[i] = nums[j]
                nums[j] = tmp
    return nums

print(bubble_sort([1, 6, 2, 7, 4]))








