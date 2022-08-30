func divideArray(nums []int) bool {
    magmap := make(map[int]int)
    ans := true
    for i := 0 ; i<len(nums) ; i++ {
        if _, ok := magmap[nums[i]] ; ok == true {
            magmap[nums[i]] += 1
        } else {
            magmap[nums[i]] = 1
        }
    }
    for _ , v := range magmap {
        if v % 2 != 0 {
            ans = false
            break
        }
    }
    return ans
}