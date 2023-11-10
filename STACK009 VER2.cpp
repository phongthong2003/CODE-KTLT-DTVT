#include <iostream>
#include <stack>
#include <string>

using namespace std;

string decodeString(string s) {
    stack<int> countStack;
    stack<string> stringStack;
    string currentString = "";
    int count = 0;

    for (char ch : s) {
        if (isdigit(ch)) {
            count = count * 10 + (ch - '0');
        } else if (ch == '[') {
            countStack.push(count);
            stringStack.push(currentString);
            count = 0;
            currentString = "";
        } else if (ch == ']') {
            int k = countStack.top();
            countStack.pop();
            string decodedString = "";
            for (int i = 0; i < k; ++i) {
                decodedString += currentString;
            }
            currentString = stringStack.top() + decodedString;
            stringStack.pop();
        } else {
            currentString += ch;
        }
    }

    return currentString;
}

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after reading t.

    while (t--) {
        string input;
        getline(cin, input);
        string result = decodeString(input);
        cout << result << endl;
    }

    return 0;
}

