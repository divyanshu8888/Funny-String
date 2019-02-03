#include <bits/stdc++.h>

using namespace std;

string funnyString(string s){
    int i,j,count=0;
    string r;
    r=s;
    reverse(r.begin(),r.end());
    int len=s.length();


    for(i=1;i<len;i++)
    {
        if(abs(s[i]-s[i-1])==abs(r[i]-r[i-1]))
        { count++;}


    }
    if(count==s.length()-1)
        return "Funny";
    else
        return "Not Funny";
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        string result = funnyString(s);
        cout << result << endl;
    }
    return 0;
}
