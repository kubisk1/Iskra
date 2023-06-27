#include <iostream>
#include <string>

using namespace std;

void replace_letters(string& str, int max_consecutive) {
    string result;
    int count = 0;
    char prev_char = str[0];
    for (char c : str) {
        if (c == prev_char) {
            count++;
        } else {
            if (count >= max_consecutive) {
                result += prev_char;
                result += to_string(count);
            } else {
                result.append(count, prev_char);
            }
            count = 1;
            prev_char = c;
        }
    }
    if (count >= max_consecutive) {
        result += prev_char;
        result += to_string(count);
    } else {
        result.append(count, prev_char);
    }
    str = result;
}

int main() {
    string myString;
    int test;
    cin >> test;
    while(test--)
    {
   cin >> myString;
    
    replace_letters(myString, 3);
    cout <<  myString << endl;
    }

    return 0;
}