//problem: https://leetcode.com/problems/plus-one/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
      int n = digits.size();
        int carry = 0;
        
        digits[n-1] = digits[n-1] + 1; //digits[n-1]+=1;
        
        if(digits[n-1]==10){
            carry = 1;
            digits[n-1] = 0;
        }
        
        for(int i = n-2; i>=0; i--){
            
            digits[i] = digits[i] + carry;
            
            if(digits[i]==10){
                digits[i] = 0;
                carry =1;
            }
            else{
                carry =0;
            }
            
        }
        
        if(carry==1){
            digits.insert(digits.begin(),1);
        }
        
        return digits;
    }
};
