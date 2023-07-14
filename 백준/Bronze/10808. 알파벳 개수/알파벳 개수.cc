#include <iostream>


int main()
{
    using namespace std;
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int arr[26]={0,};
    char str[102];
    cin.getline(str, 102);
    for(int i=0; str[i]!=0;i++)
    {
        arr[str[i]-'a']++;
    }
    for(int i=0; i<26;i++)
        cout<<arr[i]<<' ';
    
    return 0;
}