#include<iostream>
#include<string>
using namespace std;

string timeConversion(string s) {
    string hr,min,sec,format;
    
    hr = s.substr(0,2);
    int hr_int = stoi(hr);
    min = s.substr(3,2);
    sec = s.substr(6,2);
    format = s.substr(8,2);
    s = s.erase(8);

    if(format=="PM"&&hr_int<12){
        hr_int = hr_int + 12;
        s.replace(0,2,to_string(hr_int));
    }
    else if(format=="AM"&&hr_int==12){
        s.replace(0,2,"00");
    }
    
    return s;
}

int main(){




    return 0;
}