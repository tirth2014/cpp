// Q: https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box/
// My approach: T.C: O(n^2)  S.C: O(n)
class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n= boxes.length();
        vector <int> v;
        int pos=0;
        
        for(int i=0;i<n;i++){
            for(int j=0; j<n; j++){
                if(boxes[j]!='1'){
                    continue;
                }
                else{
                    pos+=abs(j-i);
                }
            }
             v.push_back(pos);
             pos=0;
        }
        return v;
    }
};

//Optimal approach (using prefix sum)... T.C: O(n), S.C: O(n)
// Similar to problem : https://leetcode.com/problems/product-of-array-except-self/

class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> ans(boxes.size(),0);
        
        int seen = 0;
        int sum = 0;
        for(int i=0;i<boxes.size();i++){
            sum+=seen;
            ans[i] = sum;
            if(boxes[i]=='1') seen++;
        }
        sum = 0, seen = 0;
        for(int i=boxes.size()-1;i>=0;i--){
            sum+=seen;
            ans[i] += sum;
            if(boxes[i]=='1') seen++;
        }
        return ans;
    }
};
