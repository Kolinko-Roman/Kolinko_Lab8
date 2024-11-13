#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

string removeSpacesAndSortUnique(const string& input) {
    map<char, bool> uniqueChars;  
    
    for (char ch : input) {
        if (ch != ' ') {  
            uniqueChars[ch] = true;  
        }
    }
    
    string result;
    for (const auto& entry : uniqueChars) {
        result += entry.first;
    }
    return result;
}

int main() {
    string input = "hello world";
    string output = removeSpacesAndSortUnique(input);
    cout << "Result: " << output << endl;  
    return 0;
}
