#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d)
{
    int m1,m2;
    m1=b;
    m2 =d;
    if(a>b)
    m1=a;
    if(c>d)
    m2=c;
    if(m1>m2)
    return m1;
    else 
    return m2;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
