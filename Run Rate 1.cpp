#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    for(int k=1;k<=t;k++){
        int r1, r2, b;
        float expect;
        cin>>r1>>r2>>b;
        float over = b/6.00;
        float passed = 50.00-over;
        float present = r2/passed;
        if(r1<r2) expect = 0.00;
        else expect = (r1-r2+1)/over;
        
        printf("%.2f %.2f\n",present, expect);
    }
    return 0;
}
