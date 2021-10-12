#include <iostream>

using namespace std;

int add (int a, int b){
    return a+b;
}

int main(int argc, char *argv[]) {
    if((int)argv[1] == 1 && (int)argv[1] == 2){
        if(argc != 4){
            cout << "Error - incorrectly entered data!" << endl;
            exit(0);
        }
    }
    else if((int)argv[1] == 3 && argc != 5){
        cout << "Error - incorrectly entered data!" << endl;
        exit(0);
    }
    else if ((int)argv[1] == 4 && argc != 2){
        cout << "Error - incorrectly entered data!" << endl;
        exit(0);
    }
    else {
        cout << "Error - incorrectly entered data!" << endl;
        exit(0);
    }
    for(int i = 0; i < argc ; ++i) {
        cout << argv[i] <<endl;
    }

    return 0;
}
