//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
void printPat(int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
    printPat(n);
    cout<<endl;
	}
}
// } Driver Code Ends


/*You are required to complete this method*/
void printPat(int n)
{
    int p=n,q;
    while(p>0){
        for(int i=n;i>0;i--){
			q=p;
            while(q>0){
                cout<<i<<" ";
              q--;
            }
        }
        cout<<"$";
      p--;
    }
}