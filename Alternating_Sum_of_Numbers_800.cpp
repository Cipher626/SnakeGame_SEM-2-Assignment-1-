#include<bits/stdc++.h>

using namespace std;

int main() 
{
    int t;      // number of testcases
    cin>>t;

    for(int i=0; i<t; i++)
    {
        int n;  //length of sequence
        cin>>n;

        int a[n];  //sequence of numbers

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int sum = 0;
        for(int i=0; i<n; i++)
        {
            if(i%2==0)
            {
                sum=sum+a[i];
            }
            else
            {
                sum=sum-a[i];
            }
        }
        cout<<sum<<endl;
    }
}