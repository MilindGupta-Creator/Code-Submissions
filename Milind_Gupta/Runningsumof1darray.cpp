#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];

    for(int i=1;i<n;i++)
    {
        arr[i] += arr[i-1];
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    // Insert Your Code Here. Here are the steps to get started: 
    // Step-I: Define the input format using the examples from the problem description. 
    // Step-II: Parse input from standard in. 
    // Step-III: Write your algorithm to generate the required output. 
    // Note: In case of any issues use #feedback channel on Discord. 
    return 0;
}
