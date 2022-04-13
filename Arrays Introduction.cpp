#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a[1000],b[1000];
    int n,i,j;
    cin>>n;
    for(i = 0; i < n; i++) 
    {
        cin>>a[i];
    } 
    for(j= n-1, i = 0;j >= 0 && i<n;j--,i++)
    {
       b[i] = a[j]; 
    }
    for(i = 0; i < n; i++) 
    {
        cout<<b[i]<<" ";
    } 
    return 0;
}
