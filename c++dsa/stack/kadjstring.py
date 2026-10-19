# 1209. Remove All Adjacent Duplicates in String II

class Solution:
    def removeDuplicates(self, s: str, k: int) -> str:
        n = len(s)
        st: list[tuple[str, int]] = []
        ans = ""

        for i in range(n):
            if not st:
                st.append((s[i], 1))
                continue

            elif st and st[-1][0]!=s[i]:
                st.append((s[i], 1))
                continue

            elif st and st[-1][0]==s[i] and st[-1][1]<k-1:
                st[-1] = (st[-1][0], st[-1][1]+1)

            else:
                st.pop()


        while st:
            chartop = st[-1][0]
            inttop = st[-1][1]
            st.pop()

            while(inttop>0):
                ans=chartop+ans
                inttop-=1

        return ans

        



sol = Solution()
s = "pbbcggttciiippooaais"
k = 2
print(sol.removeDuplicates(s, k))
