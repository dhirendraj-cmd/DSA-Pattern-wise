// 56. Merge Intervals

#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        int n = intervals.size();

        sort(intervals.begin(), intervals.end());
        int start1 = intervals[0][0];
        int end1 = intervals[0][1];

        for(int i=1; i<n; i++){
            int start2 = intervals[i][0];
            int end2 = intervals[i][1];

            if(end1 >= start2){
                // merge the intervals
                start1 = start1;
                end1=max(end1, end2);
                continue;
            }

            res.push_back({start1, end1});
            start1 = start2;
            end1 = end2;
        }

        res.push_back({start1, end1});

        return res;
    }
};


int main(){
    Solution* sol = new Solution();
    vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>> ans;

    ans = sol->merge(intervals);

    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans.size(); j++){
            cout<<ans[i][j]<<" ";
        }
    }
    cout<<endl;


}


