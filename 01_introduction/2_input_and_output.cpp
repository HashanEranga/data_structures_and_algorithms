
#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b;
    string x;
    cin >> a >> b >>x;
    cout << a << b << x;
    cout << a << " " << b << " " << x << "\n";

    // c io also work on c++
    int c,d;
    scanf("%d %d", &c, &d);

    printf("%d %d", c, d);

    // string with whole statements can be read by getline
    string s;
    getline(cin, s);

    cout << s << "\n";

    // if the amount of data do not know
    // while(cin >>x){
    //     cout << "code ran" << endl;
    // }
}

// Special Notes

// ios::sync_with_stdio(0); 
// only use c++ buffers not using c buffers 
// without the code the both buffers will be considered

// cin.tie(NULL);
// one stream is flushed before cin or cout is taken next.