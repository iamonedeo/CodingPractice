#include <iostream>

int main()
{
    using namespace std;
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int a,b,c, d;
    int arr[10]={0};
    cin>>a>>b>>c;
    d=a*b*c;
    
    while(d!=0)
    {
        arr[d%10]++;
        d/=10;
    }
    for(int i=0; i<10;i++) cout<<arr[i]<<'\n';
    
    return 0;
}