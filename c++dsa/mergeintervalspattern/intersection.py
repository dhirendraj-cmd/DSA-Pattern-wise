# 986. Interval List Intersections



class Solution:
    def intervalIntersection(self, firstList: list[list[int]], secondList: list[list[int]]):
        m, n = len(firstList), len(secondList)
        i, j = 0, 0

        res:list[list[int]] = []

        while(i<m and j<n):
            s1=firstList[i][0]
            e1=firstList[i][1]
            s2=secondList[j][0]
            e2=secondList[j][1]

            in1 = max(s2, s1)
            in2 = min(e1, e2)

            if in1<=in2:
                res.append([in1, in2])

            if e1<e2:
                i+=1
            else:
                j+=1


        print(res)




sol = Solution()
firstList: list[list[int]] = [[0,2],[5,10],[13,23],[24,25]]
secondList: list[list[int]] = [[1,5],[8,12],[15,24],[25,26]]
sol.intervalIntersection(firstList=firstList, secondList=secondList)