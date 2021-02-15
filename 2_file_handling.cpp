#include <bits/stdc++.h>

using namespace std;

int main(){

    // using freopen
    freopen("2_file_handling.txt", "w", stdout);

    // this statement is in the text document
    cout << "This sentence will redirected to the file" << endl;
    fclose(stdout);

    // this will read the statement in the aboce created file
    freopen("2_file_handling.txt","r", stdin);

    // this will again print the statement in another file in the given name
    freopen("2_file_handling2.txt", "w", stdout);

    fclose(stdout);

    return 0;
}