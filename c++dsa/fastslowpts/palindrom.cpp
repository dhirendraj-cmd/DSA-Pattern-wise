#include <iostream>
#include <vector>

using namespace std;

struct ListNode {
    int val;         // The integer data value stored inside the node
    ListNode *next;  // Raw pointer pointing to the next node address in memory
    
    // LeetCode's built-in constructors for fast node creation
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* convertVectorToList(const vector<int>& arr) {
    if (arr.empty()) return nullptr;
    
    ListNode* head = new ListNode(arr[0]);
    ListNode* curr = head;
    
    for (size_t i = 1; i < arr.size(); ++i) {
        curr->next = new ListNode(arr[i]);
        curr = curr->next;
    }
    return head;
}

void printLeetCodeList(ListNode* head) {
    ListNode* curr = head;
    while (curr != nullptr) {
        cout << curr->val << " -> ";
        curr = curr->next;
    }
    cout << "nullptr" << endl;
}

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head==NULL) return false;

        if(head->next==NULL) return true;

        vector<int> arr;

        ListNode* p = head;
        while(p!=NULL){
            arr.push_back(p->val);
            p=p->next;
        }

        for(auto& x: arr){
            cout<<x<<" ";
        }
        cout<<endl;

        int n=arr.size();
        int i=0, j=n-1;

        while(i<j){
            if(arr[i]!=arr[j]){
                return false;
            }
            i++;
            j--;
        }

        return true;

    }
};

int main() {
    // Easily create a list using the helper function
    vector<int> testData = {1,2,3,2,1,4};
    ListNode* head = convertVectorToList(testData);

    cout << "Your LeetCode Styled Linked List: " << endl;
    printLeetCodeList(head); // Output: 10 -> 20 -> 30 -> 40 -> nullptr

    Solution sol;
    bool res = sol.isPalindrome(head);

    cout<<"Res: "<< res<<endl;

    return 0;
}
