#include <iostream>
using namespace std;

int main() {
    int arr[10]={1,6,3,8,5,2,9,4,7,0};
    int size = sizeof(arr)/sizeof(arr[0]);

    //bubble sort
    for(int i=0; i<size-1; i++) {
        for(int j=0; j<size-1-i; j++) {
            if(arr[j] > arr[j+1]) {
                //swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int i=0; i<10; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}