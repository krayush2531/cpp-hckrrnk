#include <iostream>
#include <vector>
#include <string>
using namespace std;


vector<string> split_string(string);

// Complete the catAndMouse function below.
string catAndMouse(int x, int y, int z) {
int distofA = abs(z-x);
int distofB = abs(z-y);
string message[3]={"Cat A", "Cat B", "Mouse C"};

if(distofA==distofB){
    return message[2];
}
else if(distofA<distofB){
    return message[0];
}
else{
    return message[1];
}

}


int main() {
    int x, y, z;
    cout<<"enter x y and z";
    cin>>x>>y>>z;
    cout<<catAndMouse(x,y,z);
    return 0;
}