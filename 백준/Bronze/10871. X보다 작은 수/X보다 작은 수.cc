#include <iostream>

int main()
{
    using namespace std;
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int* ary;
    int N, X;
    cin>>N>>X;
    
    ary=new int[N];
    
    for(int i=0; i<N;i++)
    {
        cin>>ary[i];
        if(ary[i]<X) cout<<ary[i]<<" ";
    }
    
    delete[] ary;
    
    return 0;
}