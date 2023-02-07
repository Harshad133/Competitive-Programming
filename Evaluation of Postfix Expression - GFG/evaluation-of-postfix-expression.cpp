//{ Driver Code Starts
// C++ program to evaluate value of a postfix expression

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string s)
    {
        stack<int> st;
        
        for(auto i : s){
            if(i >= '0' && i <= '9')
                st.push(i-48);
            else if(i == '*'){
                int n2 = st.top();
                st.pop();
                int n1 = st.top();
                st.pop();
                
                st.push((n1*n2));
                // cout<<(n1*n2)+48<<endl;
            }
            else if(i == '+'){
                int n2 = st.top();
                st.pop();
                int n1 = st.top();
                st.pop();
                
                st.push((n1+n2));
                // cout<<(n1*n2)+48<<endl;
            }
            else if(i == '-'){
                int n2 = st.top();
                st.pop();
                int n1 = st.top();
                st.pop();
                
                st.push((n1-n2));
                // cout<<(n1*n2)+48<<endl;
            }
            else{
                int n2 = st.top();
                st.pop();
                int n1 = st.top();
                st.pop();
                
                st.push((n1/n2));
            }
        }
        
        return st.top();
    }
};

//{ Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
    
    cout<<obj.evaluatePostfix(S)<<endl;
    }
    return 0;
}

// } Driver Code Ends