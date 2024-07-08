//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends
// Function to find square root
// x: element to find square root

#define ll long long int 
#define FOR(n) for(ll i=0;i*i<=n;i++)
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here  
        ll ans=0;
        FOR(x){ans=i;}
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends