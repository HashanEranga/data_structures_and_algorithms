#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char route[1000];
    cin.getline(route, 1000);

    int x = 0;
    int y = 0;

    for( int i = 0; route[i] != '\0'; i++){
        switch(route[i]){
            case 'N':
                y++;
                break;
            
            case 'S':
                y--;
                break;
            
            case 'W':
                x--;
                break;

            case 'E':
                x++;
                break;
        }
    }

    // cout << x << " " << y << endl;

    if (x >= 0 and y >= 0){
        // cout << "First Quardrant" << endl;
        if(x==0 and y==0) cout << "Already at the origin point" << endl;
        while(y--){
            cout << 'N' ;
        }
        while(x--){
            cout << 'E' ;
        }
    }
    else if (x < 0 and y >= 0){
        // cout << "Second Quardrant" << endl;
        while(y--){
            cout << 'N' ;
        }
        while(x++){
            cout << 'W' ;
        }
    }
    else if (x < 0 and y < 0){
        // cout << "Third Quardrant" << endl;
        while(y++){
            cout << 'S' ;
        }
        while(x++){
            cout << 'W' ;
        }
    }
    else if (x >= 0 and y < 0){
        // cout << "Fourth Quardrant" << endl;
        while(y++){
            cout << 'S' ;
        }
        while(x--){
            cout << 'E' ;
        }
    }

    return 0;
}
