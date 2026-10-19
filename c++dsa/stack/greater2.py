# 503. Next Greater Element II


class Solution:
    def nextGreaterElements(self, nums: list[int]) -> list[int]:
        n = len(nums)
        res: list[int] = [0]*n
        st: list[int] = []

        for i in range(2*n-1, -1, -1):
            real_index = i%n
            while(st!=[] and nums[st[-1]] <= nums[real_index]):
                st.pop()

            if not st:
                res[real_index] = -1
            else:
                res[real_index] = nums[st[-1]]

            st.append(real_index)

        return res



sol = Solution()
nums = [1,2,3,4,3]
print(sol.nextGreaterElements(nums=nums))