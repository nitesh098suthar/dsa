#include<iostream>
using namespace std;

void reverse(string &str, int start, int end)
{
    if(start>end)
    {
        return; 
    }
    swap(str[start], str[end]);
    reverse(str, start+1, end-1);
}
int main()
{
    string str= "superman";
    reverse(str, 0, str.length()-1);
    cout<<endl;
    cout<<str;
    cout<<endl;
    return 0;
}
