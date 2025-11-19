#include <vector>
#include <iostream>
using namespace std;
int birthdayCakeCandles(vector<int> candles) {
    if (candles.empty()) return 0;

    int max = candles[0];
    int num = 1;
    for (int i = 1; i < candles.size(); i++) {
        if (candles[i] > max) {
            max = candles[i];
            num = 1;
        } else if (candles[i] == max) {
            num++;
    }
    }
    return num;
    
}
int main(){
    vector<int> candles;
    int n;

    cout<<"enter number of candles: ";
    cin>>n;
    cout<<"enter heights of candles: ";
    //input number of candles
    for(int i=0;i<n;i++){
        int height;
        cin>>height;
        candles.push_back(height);
    }

    cout << birthdayCakeCandles(candles) << endl; // Output: 2
    return 0;
}