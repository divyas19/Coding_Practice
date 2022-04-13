#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
  string a,b,c;
  int l1,l2;
  char s1,s2;
  
  cin>>a>>b;
  
  l1 = a.size();
  l2 = b.size();
  cout<<l1<<" "<<l2<<"\n";
  
  c = a+ b;
  cout<<c<<"\n";
  
  s1 = a[0];
  s2 = b[0];
  a[0] = s2;
  b[0] = s1;
  cout<<a<<" "<<b;
  
    return 0;
}
