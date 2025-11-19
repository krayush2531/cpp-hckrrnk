#include <iostream>
#include <vector>
#include <string>
using namespace std;

int utopianTree(int n) {
int height = 1;
for (int i=1;i<=n;i++){
    if(i%2!=0)
    height *= 2;
    else
     height += 1;
}

return height;
}

int main() {
    int n;
    cout << "Enter the number of cycles: ";
    cin >> n;

    int result = utopianTree(n);
    cout << "Height of the Utopian tree after " << n << " cycles: " << result << endl;

    return 0;
}