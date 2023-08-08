#include <bits/stdc++.h>
using namespace std;
void hammin()
{

    string msg = "";
    int m;
    int r = 0;
    bool flag = true;
    cout << "Enter the message : ";
    cin >> msg;
    m = msg.length();
    while (flag)
    {
        if (pow(2, r) >= (m + r + 1))
        {
            flag = false;
        }
        r++;
    }
    r--;
    // cout << msg.length();
    vector<string> pr(m + r + 1);
    int msgptr = msg.length()-1;
    int r_start = 0;
    // cout<<pr.size();
   
    for (int i = 1; i < pr.size(); i++)
    {
        if (i == pow(2, r_start) && r_start < r)
        {
            string temp = "r"+to_string(i);
            pr[i] = temp;
            r_start++;
        }
        else
        {
            pr[i] = msg[msgptr];
            msgptr--;
        }
    }
    // vector<int> position;
    for (int i = 1; i < pr.size(); i++)
    {
        if(pr[i][0]=='r')
        {
            int cnt = i;
            for (int j = i; i < pr.size(); j++)
            {
                if()
            }
            
        }
    }
}
int main()
{
    hammin();
}