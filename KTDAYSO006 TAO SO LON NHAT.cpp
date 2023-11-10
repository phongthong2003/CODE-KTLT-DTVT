#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool customCompare(int a, int b) {
    string num1 = to_string(a);
    string num2 = to_string(b);
    return num1 + num2 > num2 + num1;
}

string largestNumber(vector<int>& nums) {
    sort(nums.begin(), nums.end(), customCompare);
    string result = "";
    for (int num : nums) {
        result += to_string(num);
    }
    if (result[0] == '0') {
        return "0";
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; ++i) {
            cin >> nums[i];
        }
        string result = largestNumber(nums);
        cout << result << endl;
    }
    return 0;
}

