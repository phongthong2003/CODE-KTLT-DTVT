#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int countTotalStudent(vector<int>& tickets, int k) {
    // Code t�nh to�n s? lu?ng h?c sinh kh�ng an du?c b�nh ? d�y
    int count = 0;
    // TODO: Th?c hi?n x? l� d? t�nh to�n s? lu?ng h?c sinh kh�ng an du?c b�nh
    return count;
}

vector<int> strToVector(string input) {
    vector<int> result;
    stringstream ss(input);
    string token;

    while (getline(ss, token, ',')) {
        result.push_back(stoi(token));
    }

    return result;
}

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after reading the number of test cases

    for (int i = 0; i < t; ++i) {
        string studentsInput, sandwichesInput;
        getline(cin, studentsInput);
        getline(cin, sandwichesInput);

        int k;
        cin >> k;

        vector<int> students = strToVector(studentsInput);
        vector<int> sandwiches = strToVector(sandwichesInput);

        int result = countTotalStudent(students, k);
        cout << result << endl;
    }

    return 0;
}

