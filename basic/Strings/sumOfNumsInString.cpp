//Q: https://practice.geeksforgeeks.org/problems/sum-of-numbers-in-string-1587115621/1/
// Note: stoi(str) doesn't work for large numbers.
//My approach below

// { Driver Code Starts
// C++ program to calculate sum of all numbers present
// in a string containing alphanumeric characters
#include <iostream>
using namespace std;


 // } Driver Code Ends

#include<bits/stdc++.h>
class Solution
{
    public:
    //Function to calculate sum of all numbers present in a string.
    int strToInt(string s){
        int x = 0; // may take long long 
        for(int i = 0; i < s.length(); i++)
            x = x * 10 + s[i] - '0';
        return x;
    }
    int findSum(string str)
    {
    	string s="";
    	int sum=0;
    	vector <int> v;
    	for(auto x: str){
    	    if(x == '1' || x == '2' || x == '3' || x == '4' || x == '5' ||x == '6'||x == '7'||x == '8'||x == '9'||x == '0'){
    	        s = s+x;
    	    }
    	    else{
    	        if(s!=""){
    	        v.push_back(strToInt(s));
    	        s="";
    	        }
    	        else{
    	            s="";
    	        }
    	    }
    	    }
    	    if(s!=""){
            	v.push_back(strToInt(s));
			}
    	   for(auto x:v){
    	       sum+=x;
    	   }
    	   return sum;
    	   return 0;
    	}
    	 
    
};

// { Driver Code Starts.

// Driver code
int main()
{
	// input alphanumeric string
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    Solution obj;
	    cout << obj.findSum(str);
        cout<<endl;
	}
	return 0;
}
  // } Driver Code Ends



//2nd approach [same but nice code!]

int findSum(string str)
   {
    int sum=0, temp=0;
    for(int i=0; i<str.length(); i++)
    {
        if(str[i]>='0' && str[i]<='9')
         {
             temp=10*temp+str[i]-'0';
         }
         else
          {
              if(temp)
              sum=sum+temp;
              temp=0;
          }
    }
    sum=sum+temp;
    
    return sum;
   }
