#include <iostream>

int main()
{
    using namespace std;
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int arr[205]={0,};
    int quant, x, t;
    cin>>quant;
    while(quant--)
    {
        cin>>t;
        arr[t+100]++;
    }
    cin>>x;
    cout<<arr[x+100];
    
    return 0;
}