#include <iostream>

int main()
{
    using namespace std;
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int arr[2][6]={0,};
    
    int n, k, ans=0;
    cin>>n>>k;
    
    int a, b;
    while(n--)
    {
        cin>>a>>b;//sex, grade
        b--;
        arr[a][b]++;
        if(arr[a][b]==1)
        {
            ans++;
        }
        else if(arr[a][b]>k)
        {
            ans++;
            arr[a][b]=1;
        }
    }
    cout<<ans;
    
    return 0;
}