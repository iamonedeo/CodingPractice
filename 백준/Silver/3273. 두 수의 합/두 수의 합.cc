#include <iostream>

int main()
{
    using namespace std;
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int arr[100005];
    int num[2000005]={0,};
    
    int quant,X, ans=0;
    cin>>quant;
    
    for(int i=0; i<quant;i++)
        cin>>arr[i];
    cin>>X;
    
    for(int i=0; i<quant;i++)
    {
        if(arr[i]<=X)
        {
            if(num[X-arr[i]]>0)ans++;
            else num[arr[i]]++;
        }
    }
    cout<<ans;
        
    return 0;
}