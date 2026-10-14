#include <iostream>
#include <vector>

using namespace std;

// ==========================================
// 1. THIS IS THE EXACT BLUEPRINT FROM LEETCODE
// ==========================================
struct ListNode {
    int val;         // The integer data value stored inside the node
    ListNode *next;  // Raw pointer pointing to the next node address in memory
    
    // LeetCode's built-in constructors for fast node creation
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// ==========================================
// 2. HELPER FUNCTION: Convert a Vector to a LeetCode List
// Use this to easily create test cases on your local notebook!
// ==========================================
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

// ==========================================
// 3. HELPER FUNCTION: Print the List
// ==========================================
void printLeetCodeList(ListNode* head) {
    ListNode* curr = head;
    while (curr != nullptr) {
        cout << curr->val << " -> ";
        curr = curr->next;
    }
    cout << "nullptr" << endl;
}

// ==========================================
// 4. MAIN DRIVER (For local sandbox testing)
// ==========================================
int main() {
    // Easily create a list using the helper function
    vector<int> testData = {10, 20, 30, 40};
    ListNode* head = convertVectorToList(testData);

    cout << "Your LeetCode Styled Linked List: " << endl;
    printLeetCodeList(head); // Output: 10 -> 20 -> 30 -> 40 -> nullptr

    // Quick demonstration of pointer operations
    cout << "Head value: " << head->val << endl;           // Output: 10
    cout << "Next node value: " << head->next->val << endl; // Output: 20

    return 0;
}
