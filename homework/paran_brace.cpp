#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
using namespace std;
stack<char> st;
void func(char arr[],int ob,int op,int cb,int cp,int i,int n,int m)
{
     if(ob==0 && op==0 && cb==0 && cp==0)
     {
        for(int j=0;j<2*(n+m);j++)
        {
            cout<<arr[j];
        }
        cout<<endl;
        return;
     }
     if(ob==n && op==m)
     {
        arr[i]='(';
        st.push('(');
        func(arr,ob,op-1,cb,cp,i+1,n,m);
        st.pop();
        arr[i]='{';
        st.push('{');
        func(arr,ob-1,op,cb,cp,i+1,n,m);
        st.pop();
     }
     else if(ob>0 && op>0)
     {
        arr[i] = '(';
        st.push('(');
        func(arr,ob,op-1,cb,cp,i+1,n,m);
        st.pop();
        arr[i] = '{';
        st.push('{');
        func(arr,ob-1,op,cb,cp,i+1,n,m);
        st.pop();
     }
     else if(ob==0 && op>0)
     {
        arr[i]='(';
        st.push('(');
        func(arr,ob,op-1,cb,cp,i+1,n,m);
        st.pop();
     }
     else if(ob>0 && op==0)
     {
        arr[i]='{';
        st.push('{');
        func(arr,ob-1,op,cb,cp,i+1,n,m);
        st.pop();
     }

     if(cp>0 && !st.empty() && st.top()=='(')
     {
        arr[i] = ')';
        st.pop();
        func(arr,ob,op,cb,cp-1,i+1,n,m);
        st.push('(');
     }
     if(cb>0 && !st.empty() && st.top()=='{')
     {
        arr[i] = '}';
        st.pop();
        func(arr,ob,op,cb-1,cp,i+1,n,m);
        st.push('{');
     }
}
int main()
{
    fastio;
    // code goes here
    int n,m;
    cin>>n>>m;
    char arr[2*(n+m)];
    func(arr,n,m,n,m,0,n,m);
    return 0;
}