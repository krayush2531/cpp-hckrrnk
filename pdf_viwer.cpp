#include <iostream>
#include <string>
#include <vector>
using namespace std;

int designerPdfViewer(vector<int> h, string word) {
int max = 0;
for(char c : word){
    int x = c-'a';
    if(max<h[x]){
        max=h[x];
    }
}
return max*(word.size());
}


int main() {
    // EXACTLY 26 values for 'a'..'z'
    vector<int> h = {
        1,2,3,4,5,1,2,3,4,1,1,2,3,4,4,1,2,3,4,2,1,2,3,4,3,9
    };
    string s = "zello";
    cout << designerPdfViewer(h, s) << '\n';
    return 0;
}