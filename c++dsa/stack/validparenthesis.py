class Solution:
    def isValid(self, s: str) -> bool:
        seen={
            '{':'}',
            '[':']',
            '(':')'
        }

        st: list[str]=[]

        for i in s:
            if i in seen:
                st.append(i)
            else:
                if st and i==seen[st[-1]]:
                    st.pop()
                else:
                    return False

        # print("STACK: ", st)

        return len(st)==0
                


sol = Solution()
s="([])"
print(sol.isValid(s))
        