#include <iostream>
#include <vector>
using namespace std;

int hurdleRace(int k, vector<int> height) {
    int max = height[0];
    for(int i=1;i<int(height.size());i++){
        if(max<height[i]){
            max=height[i];
        }
    }
    if(k<max)
    return max-k;
    else
    return 0;
}

int main() {
    int k;
    vector<int> height;
    cout << "Enter the jump height (k): ";
    cin >> k;
    cout << "Enter the heights of the hurdles (space-separated, end with -1): ";
    int h;
    while (cin >> h && h != -1) {
        height.push_back(h);
    }
    int result = hurdleRace(k, height);
    cout << "The minimum number of doses required: " << result << endl;
    return 0;
}