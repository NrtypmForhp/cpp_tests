#include <iostream>
#include <cmath>
#include <sstream>
#include <iomanip>

using namespace std;

string sum(double firstValue, double secondValue){
    double result = firstValue + secondValue;
    stringstream result_string;
    result_string << fixed << setprecision(2) << result;
    return result_string.str();
}

int main(){
    cout << sum(25.321541, 65.3654987) << endl;
    return 0;
}