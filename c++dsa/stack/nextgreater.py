class Solution:
    def nextLargerElement(self, arr: list[int]):
        # code here
        n = len(arr)
        res: list[int] = [0]*n
        st: list[int] = []

        for i in range(n-1, -1, -1):
            # if st and st[-1]<=arr[i]:
            while(st!=[] and st[-1]<=arr[i]):
                st.pop()
            if not st:
                res[i] = -1
            else:
                res[i] = st[-1]

            st.append(arr[i])

        print(res)



        
        



sol = Solution()
arr: list[int] = [6, 8, 0, 1, 3]
sol.nextLargerElement(arr=arr)