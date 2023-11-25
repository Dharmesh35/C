
#include <iostream>
using namespace std;

int main()
{
  int T;
  cin>>T;
  while (T--)
  {
    int a,b;
    cin>>a >>b;
    int c= (a*b)%4;
    cout<< c<<endl;
  }
  return 0;
}
