//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        // if (b == 0) return a;
        // return gcd(b, a % b);
        
        long lcm = 0;
        long gcd = 0;
        long temp = 0;
        long product = A*B;
        
        while(B != 0){
            
            long long temp = B;
            B = A%B;
            A = temp;
        }
        
        lcm = A;
        gcd = product/lcm;
        
        return {gcd, lcm};
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends
