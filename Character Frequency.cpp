#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin>>tc;
    cin.ignore();
    for(int a=1;a<=tc;a++){
        string s1;
        char ch;
        int count =0;
        getline(cin,s1);

        cin>>ch;
        cin.ignore();
        for(int i=0;i<s1.size();i++){
            if(s1[i]==ch) count++;
        }
        if(count == 0){
            cout<<"'"<<ch<<"' is not present"<<endl;
        }
        else
            cout<<"Occurrence of '"<<ch<<"' in '"<<s1<<"' = "<<count<<'\n';
    }
    return 0;
}
