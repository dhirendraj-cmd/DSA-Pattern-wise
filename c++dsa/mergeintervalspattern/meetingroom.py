# Meeting Rooms II
# https://www.geeksforgeeks.org/problems/attend-all-meetings-ii/1



class Solution:
    def minMeetingRooms(self, start: list[int], end: list[int]):
        # code here
        start.sort()
        end.sort()

        m=len(start)

        i, j=0,0

        rooms, mxroom = 0, 0

        while i<m:
            if start[i]<end[j]:
                rooms+=1
                i+=1
            else:
                rooms-=1
                j+=1

            mxroom=max(rooms, mxroom)


        print(mxroom)
        
        
        
sol = Solution()
# start: list[int] = [2, 9, 6]
# end: list[int] = [4, 12, 10]
start: list[int] = [10, 22, 11, 4, 11]
end: list[int] = [14, 29, 30, 12, 29]
sol.minMeetingRooms(start=start, end=end)