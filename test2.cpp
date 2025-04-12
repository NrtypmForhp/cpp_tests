#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class array_check{
    public:
        bool in_array(const char& value, const vector<string>& array){
            string str_value(1, value);
            return find(array.begin(), array.end(), str_value) != array.end();
        }
};

int main(){
    array_check array_check_obj;
    string test_string = "12 + 36";
    vector<string> operators_array = {"+", "-", "*", "/"};

    // Loop the string
    for(int char_pos = 0; char_pos < test_string.length(); char_pos++){
        if(array_check_obj.in_array(test_string.at(char_pos), operators_array)){
            cout << "operator: " << test_string.at(char_pos) << endl;
        }else{
            cout << test_string.at(char_pos) << endl;
        }
    }
}