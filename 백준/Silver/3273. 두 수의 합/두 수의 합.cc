#include <iostream>

int main()
{
    using namespace std;
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int arr[2000005]={0};
    int quant, X, t, ans=0;
    cin>>quant;
    for(int i=0; i<quant;i++)
    {
        cin>>t;
        arr[t]=1;
    }
    cin>>X;
    for(int i=0; i<(X+1)/2;i++)
        if(arr[i]==1&&arr[X-i]==1) ans++;
    
    cout<<ans;
        
    return 0;
}