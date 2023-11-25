#include<iostream>
using namespace std;
int main(){
    int t,n,h;
    cin>>t;
        cin>>n;
        cin>>h;
        int height[n];
        for (int i = 0; i < n; i++)
        {
            cin>>height[i];
        }
        cout<<n<<"  "<<h<<endl;
        for (int j = 0; j < n; j++)
        {
            cout<<height[j]<<" ";
            cout<<endl;
        }
    int num;
    num=0;
    for (int j = 0; j < n; j++)
    {
        if (height[j]>h)
        {
            num++;
        }
        
    }
    cout<<num;
    
    return 0;
}