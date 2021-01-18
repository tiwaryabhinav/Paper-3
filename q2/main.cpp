#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cout<<"ENTER SIZE OF ARRAY\n";
    cin>>n;
    int d;
    cout<<"ENTER VALUE OF d";
    cin>>d;
    int arr[n];
    cout<<"ENTER ELEMENTS IN ARRAY\n";
    for(i=0;i<n;i++)
        cin>>arr[i];

    int temp[d];
    for(i=0;i<d;i++)
        temp[i]=arr[i];

    for(i=0;i<n-d;i++)
        arr[i]=arr[i+d];

    int j=0;
    for(;i<n;i++)
    {
        arr[i]=temp[j++];
    }

    cout<<"AFTER ROTATION ARRAY IS:\n";
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";


    return 0;
}
