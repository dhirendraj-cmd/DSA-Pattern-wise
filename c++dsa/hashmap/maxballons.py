# 1189. Maximum Number of Balloons


class Solution:
    def maxNumberOfBalloons(self, text: str) -> int:
        res = 100000
        s1 = "balloon"
        mp1: dict[str, int] = {}
        mp2: dict[str, int] = {}

        for i in s1:
            mp1[i] = mp1.get(i, 0)+1

        for i in range(len(s)):
            mp2[s[i]] = mp2.get(s[i], 0)+1

        for k, v in mp1.items():
            c = k
            v1 = v
            v2 = mp2.get(c, 0)
            required = v2//v1
            res = min(required, res)

        return res




sol = Solution()
s = "lloo"
print(sol.maxNumberOfBalloons(s))