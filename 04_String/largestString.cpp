#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n;
    cin >> n;

    char sentence[1000];
    char largest[1000];

    int largest_len = 0;

    cin.get();
    while(n--){
        cin.getline(sentence, 1000);
        if(strlen(sentence)>largest_len){
            strcpy(largest, sentence);
            largest_len = strlen(sentence);
        }
    }
    cout << largest << endl;
    return 0;
}
