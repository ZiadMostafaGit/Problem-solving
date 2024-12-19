package main

func searchInsert(nums []int, target int) int {
	res := 0
	if target > nums[len(nums)-1] {
		return len(nums) - 1
	}
	if target < nums[0] {
		return 0
	}

	start, end := 0, len(nums)-1
	minmax := 100000000
	for start <= end {
		mid := start + (end-start)/2

		if nums[mid] == target {
			return mid
		}
		if nums[mid] < target {
			start = mid + 1
		}
		if nums[mid] > target {
			minmax = min(minmax, nums[mid])
			if minmax == nums[mid] {
				res = mid
			}
			end = mid - 1
		}
	}

	return res

}
