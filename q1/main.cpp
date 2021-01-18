#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1,n2,i;
    cout<<"ENTER SIZE OF TWO SORED ARRAYS\n";
    cin>>n1>>n2;
    int arr1[n1],arr2[n2];
    cout<<"ENTER SORTED ARRAY 1\n";
    for(i=0;i<n1;i++)
        cin>>arr1[i];

    cout<<"ENTER SORTED ARRAY 2\n";
    for(i=0;i<n2;i++)
        cin>>arr2[i];

    vector<int> unionn,intersectionn;
    int j=0;
    i=0;
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j])
        {
            unionn.push_back(arr1[i++]);
        }

        else if (arr2[j] < arr1[i])
        {
            unionn.push_back(arr2[j++]);
        }

        else {
            unionn.push_back(arr2[j++]);
            i++;
        }
    }


    i = 0,j = 0;
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j])
            i++;
        else if (arr2[j] < arr1[i])
            j++;
        else
        {
            intersectionn.push_back(arr2[j]);
            i++;
            j++;
        }
    }

    cout<<"Union of two arrays is ";
    for(i=0;i<unionn.size();i++)
        cout<<unionn[i]<<" ";
    cout<<"\n";

     cout<<"Intersection of two arrays is ";
    for(i=0;i<intersectionn.size();i++)
        cout<<intersectionn[i]<<" ";
    return 0;
}
