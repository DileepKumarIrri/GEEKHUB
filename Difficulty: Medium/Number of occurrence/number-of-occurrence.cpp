//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++




/* <------------shortcuts---------------->*/

#define ll long long int
#define ins insert
#define pb push_back

/* <------------Intialistaions---------------->*/

#define FOR(n) for(int i=0;i<n;i++)

/*  <--------- Declarations --------->  */
#define vi vector<int>
#define vvi vector<vi>
#define vll vector<ll>
#define vvll vector<vll>
#define pi pair<int,int>
#define pll pair<ll,ll>
#define vpi vector<pi>
#define vpll vector<pll>
#define oset ordered_set
#define mapi map<int,int>
#define umapi unordered_map<int,int>

/*  <--------- Sortings --------->  */
 
#define vsort(a) sort(a.begin(),a.end())


class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	    ll count=0;
	    FOR(n){
	        if(arr[i]==x) count++;
	    }
	    return count;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends