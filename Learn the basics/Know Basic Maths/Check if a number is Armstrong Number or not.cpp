//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n) {
        // code here
        
        int x = n;
    int sum = 0;
    int digits = 0;
    
    // Count the number of digits in the number
    int temp = n;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    
    // Reset the temp variable to n
    temp = n;
    
    // Calculate the sum of digits raised to the power of the number of digits
    while (temp > 0) {
        int last_digit = temp % 10;
        sum += pow(last_digit, digits);  // Raise the digit to the power of the number of digits
        temp /= 10;
    }
    
    // Check if the sum is equal to the original number
    if (sum == x) {
        return "true";
    } else {
        return "false";
    }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends
