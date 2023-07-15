#include <iostream>

int main()
{
    using namespace std;
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N;
    cin>>N;
    int num[10]={0,};
    
    while(N!=0)
    {
        num[N%10]++;
        N/=10;
    }
    num[6]+=num[9];
    num[6]%2!=0?num[6]++:0;
    num[6]/=2;
    
    int max=num[0];
    for(int i=1; i<9;i++)
        if(num[i]>max) max=num[i];
    
    cout<<max;
    
    return 0;
}