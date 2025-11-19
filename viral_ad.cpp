#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int viralAdvertising(int n) {
    int ppl = 5;
    int sum = 0;

    for (int i=0;i<n;i++){
        int x = floor(ppl/2);         
        ppl = x*3;
        sum += x;
    }
    
    return sum;
}

int main() {
    int n;
    cout << "Enter the number of days: ";
    cin >> n;

    int result = viralAdvertising(n);
    cout << "Total liked advertisements: " << result << endl;

    return 0;
}