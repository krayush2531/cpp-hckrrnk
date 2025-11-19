vector<int> gradingStudents(vector<int> grades) {
    int n=int(grades.size());
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        int x = grades[i]%5;
        int y = (grades[i] + (5-x));
        
        if(grades[i]<38){
            arr[i]=grades[i];
        }
        else if(y-grades[i]<3){
            arr[i]=y;
            }
        else{
            arr[i]=grades[i];
        }
        }
    return arr;
}
