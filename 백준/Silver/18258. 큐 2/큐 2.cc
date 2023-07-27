#include <iostream>
#include <string>
#include <queue>

int main()
{
    using namespace std;
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    queue<int> my_q;
    
    string oper;
    int ans[2000005];
    int ans_cnt=0;
    
    int n;
    cin>>n;
    cin.ignore();
    
    int num;    
    
    while(n--)
    {
        cin>>oper;
        cin.ignore();
        if(oper=="push")
        {
            cin>>num;
            cin.ignore();
            my_q.push(num);
        }
        else if(oper=="pop")
        {
            if(!my_q.empty())
            {
                ans[ans_cnt++]=my_q.front();
                my_q.pop();
            }
            else ans[ans_cnt++]=-1;
        }
        else if(oper=="size")
        {
            ans[ans_cnt++]=my_q.size();
        }
        else if(oper=="empty")
        {
            ans[ans_cnt++]=my_q.empty();
        }
        else if(oper=="front")
        {
            if(my_q.empty()) ans[ans_cnt++]=-1;
            else ans[ans_cnt++]=my_q.front();
        }
        else if(oper=="back")
        {
            if(my_q.empty()) ans[ans_cnt++]=-1;
            else ans[ans_cnt++]=my_q.back();
        }
    }
    for(int i=0; i<ans_cnt;i++)
    {
        cout<<ans[i]<<'\n';
    }
    
    
    
    return 0;
}