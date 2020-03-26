#include <iostream>
#include <vector>
using namespace std;

int main (int argc, char *argv[]) {
    string s1 = "a whale of a deal!";
    vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    vector<char> result;
    for (int i = 0; i < s1.length(); i++) {
        for (int j = 0; j < vowels.size(); j++) {
            if (s1[i] == vowels[j]) {
                result.push_back(s1[i]);
            }
        }
        if (s1[i] == 'e' || s1[i] == 'u') {
            result.push_back(s1[i]);
        }
    }
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
    }
    cout << "\n";
    return 0;
}
