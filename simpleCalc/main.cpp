#include <iostream>

using namespace std;

int add (int a, int b){
    return a+b;
}

int subtract (int a, int b){
    return a-b;
}

int main(int argc, char *argv[]) {
    if((string)argv[1] == "add" && (string)argv[1] == "subtract" && argc != 4){
            cout << "Error - incorrectly entered data!" << endl;
            exit(0);
    }
    else if((string)argv[1] == "volume" && argc != 5){
        cout << "Error - incorrectly entered data!" << endl;
        exit(0);
    }
    else if ((string)argv[1] == "help" && argc != 2){
        cout << "Error - incorrectly entered data!" << endl;
        exit(0);
    }
    else if ((string)argv[1] != "help" && (string)argv[1] != "add" && (string)argv[1] != "subtract" && (string)argv[1] != "volume") {
        cout << "Error - incorrectly entered data!" << endl;
        exit(0);
    }
    if ((string)argv[1] == "add"){
        cout << "Sum = " << add(atoi(argv[2]), atoi(argv[3])) << endl;
    }
    if ((string)argv[1] == "subtract"){
        cout << "Result = " << subtract(atoi(argv[2]), atoi(argv[3])) << endl;
    }
    return 0;
}

