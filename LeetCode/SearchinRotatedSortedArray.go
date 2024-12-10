package main

func binary(nums []int, target int) int {

	start, end := 0, len(nums)-1
	for start < end {

		mid := start + ((end - start) / 2)
		if nums[mid] == target {
			return mid
		}

		if nums[mid] < target {
			start = mid + 1
		} else {
			end = mid
		}

	}

	return -1
}

func search(nums []int, target int) int {

	start, end := 0, len(nums)-1
	if nums[start] < nums[end] {

		res := binary(nums, target)
		return res

	}

	for start < end {

		mid := start + ((end - start) / 2)
		if nums[mid] > nums[end] {
			start = mid + 1

		} else {
			end = mid
		}

	}

	if target > nums[len(nums)-1] {
		newNums := nums[:start]
		res := binary(newNums, target)

		return res
	} else {
		newNums := nums[start:]
		res := binary(newNums, target)
		return res
	}

}
