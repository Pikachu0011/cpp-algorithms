#include<bits/stdc++.h>
using namespace std;
vector<int> path;
void back(vector<int>& nums, vector<bool>& used) {
    if (path.size() == nums.size()) {
        for (int i = 0; i < path.size(); i++) {
            if (i != 0)
                cout << " ";
            cout << path[i];

        }
        cout << endl;
        //path.clear();
    }
    for (int i = 0; i < nums.size(); i++) {
        if (used[i] == true)
            continue;
        used[i] = true;
        path.push_back(nums[i]);
        back(nums, used);
        path.pop_back();
        used[i] = false;
    }
}
int main() {
   
    vector<int> nums = { 1,2,3 };
    vector<bool> used = { 0,0,0 };
    back(nums, used);
    
	return 0;
}