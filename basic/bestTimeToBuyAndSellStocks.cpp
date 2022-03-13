//LINK: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// Optimal Solution by Vaibhav Sir!
//Runtime: 2ms


class Solution {
public:
    int maxProfit(vector<int>& prices) {
       
       //maxAtRight = {6,6,6,6,4,0} => currProfit = maxAtRight[i] - prices[i]
        
        int n = prices.size();
        
        vector<int> maxAtRight (n,0);
        int curMax = prices[n-1]; 
        
        for(int i = n-2; i>=0; i--){
            
            maxAtRight[i] = curMax;
            
            curMax = max(curMax,prices[i]);
            
        }
        
        
        int profit = 0;
        
        for(int i = 0; i<n-1; i++){
            int curProfit = maxAtRight[i] - prices[i]; // If we buy on ith day, to get maximum profit, we have to sell on maximum value to right of it and which is maxAtRight
            
            if(curProfit>profit){
                profit = curProfit;
            }
            
        }
        
        return profit;
        
    }
};


// My Solution
//Runtime: 210ms
// C++ program to find the min and max element
// of Vector using *min_element() in STL

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void maxProfit(vector<int>& prices) {
    	int n = prices.size();
    	int maxOnRight = 0;
    	vector<int>mor; 
    	mor.push_back(0);
    	for(int i=n-1;i>0;i--){
    		maxOnRight = max(maxOnRight, prices[i]);
			mor.push_back(maxOnRight);
		}
		reverse(mor.begin(),mor.end());
        for(int i=0;i<mor.size();i++){
        	cout << mor[i] << " ";
		}
			int maxPro = 0;
		for(int i=0; i<mor.size(); i++){
			int j = mor[i]-prices[i];
			maxPro = max(j,maxPro);
			}
			cout << endl << maxPro;
		}
		
};

int main()
{
	vector<int>v = {7,1,5,3,6,4};
	Solution obj;
	obj.maxProfit(v);
	return 0;
}
