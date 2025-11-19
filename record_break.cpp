#include <iostream>
#include<vector>
using namespace std;

vector<int> breakingRecords(vector<int> scores) {
    vector <int> result={0,0};
    int min=scores[0],max=scores[0];
    for(int i=1;i<int(scores.size());i++){
        if(max<scores[i]){
            result[0]+=1;
            max=scores[i];
            }
        else if(min>scores[i]){
            result[1]+=1;
            min=scores[i];
            }
            
    }
    return result;
}


int main() {
    
    vector <int> scores={10, 5, 20, 20, 4, 5, 2, 25, 1};

    vector <int> result = breakingRecords(scores);

    //output result
    cout << result[0] << " " << result[1] << endl;

    return 0;
}