//Que: https://leetcode.com/problems/find-the-duplicate-number
// Different Approaches: https://leetcode.com/problems/find-the-duplicate-number/discuss/1837388/C%2B%2B-or-Multiple-Approaches-With-Explanation-or-Easy-to-Understand

//1. Gives TLE
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    	int n = nums.size();
        vector <int> visited;
        
        for(int i=0; i<n; i++){
        	
        	if(find(visited.begin(), visited.end(), nums[i]) != visited.end()){
        		return nums[i];
			}
			
			else{
				visited.push_back(nums[i]);
			}
		}
        return 0;
    }
};


//2. T.C = S.C = O(n) 
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int n = nums.size();
        unordered_set <int> s;
        for(int i=0; i<n; i++){
            if(s.count(nums[i])!= 0){
                return nums[i];
            }
            else{
                s.insert(nums[i]);
            }
        }
        return -1;
    }
};  
 
//3. 
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void findDuplicate(vector<int>& nums) {
    	int n = nums.size();
  		
		  while(nums[0] != nums[nums[0]]){
		  	
		  	swap(nums[0],nums[nums[0]]);
		  }      
		cout<< nums[0];
	}
      
};

int main()
{
	vector<int>v = {1,2,3,2};
	Solution obj;
	obj.findDuplicate(v);
	return 0;
}


//4. Linked List Cycle Detection using Floyd's Tortoise and Hare algorithm.  T.C: O(n)  S.C:  O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
     int slow = 0, fast = 0;
        while (true) {
            slow = nums[slow];
            fast = nums[nums[fast]];
            if (fast == slow) break;
        }
        int slow2 = 0;
        while (true) {
            slow = nums[slow];
            slow2 = nums[slow2];
            if (slow == slow2) break;
        }
        cout<< slow;
    }
};


int main()
{
    vector<int>v = {1,3,4,2,2};
    Solution obj;
    obj.findDuplicate(v);
    return 0;
}
