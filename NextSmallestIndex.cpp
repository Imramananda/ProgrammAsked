#include<iostream>
#include<string.h>
#include<vector>
#include<stack>
using namespace std;

void nextSmallestIndex(int arr[],int n) 
{
    // int out[n]={0};
    // for(int i=0; i<n; i++)
    // {
    //     for(int j=i+1;j<n;j++)
    //     {
    //         if(arr[i]>arr[j])
    //         {
    //             out[i] = j;
    //             break;
    //         }
    //     }
    //     if(out[i] == 0)
    //     out[i] = -1;
    // }
    // for(int i=0; i<n; i++)
    // {
    //     cout<<out[i]<<", ";
    // }
    vector<int> out(n,-1);
    stack<int> s;
    for(int i=0; i<n;i++)
    {
        while(!s.empty() && arr[s.top()]>arr[i])
        {
            out[s.top()] = i;
            s.pop();
        }
        s.push(i);
    }
    for(int i=0; i<n; i++)
    {
        cout<<out[i]<<", ";
    }
}
int main()
{
    int arr[]= {2,1,5,6,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Length of array: "<<n<<endl;
    cout<<"Next smallest index: ";
    nextSmallestIndex(arr,n);
    return 0;
}