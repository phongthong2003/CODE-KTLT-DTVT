#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// H�m �? quy �? t?o ra t?t c? c�c t?p con c?a m?ng
void generateSubsets(vector<int>& nums, int index, vector<int>& current, vector<vector<int>>& subsets) {
    if (index == nums.size()) {
        subsets.push_back(current);
        return;
    }

    // Bao g?m ph?n t? t?i v? tr� hi?n t?i
    current.push_back(nums[index]);
    generateSubsets(nums, index + 1, current, subsets);

    // Kh�ng bao g?m ph?n t? t?i v? tr� hi?n t?i
    current.pop_back();
    generateSubsets(nums, index + 1, current, subsets);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> nums(n);

        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }

        vector<vector<int>> subsets;
        vector<int> current;
        generateSubsets(nums, 0, current, subsets);

        // T�nh t?ng c?a t?ng t?p con v� l�u l?i k?t qu?
        vector<pair<int, vector<int>> > subsetSums;
        for (const vector<int>& subset : subsets) {
            int sum = 0;
            for (int num : subset) {
                sum += num;
            }
            subsetSums.push_back({sum, subset});
        }

        // S?p x?p t?p con theo t?ng t�ng d?n
        sort(subsetSums.begin(), subsetSums.end());

        // In k?t qu?
        cout << subsetSums.size() << " [";
        for (int i = 0; i < subsetSums.back().second.size(); i++) {
            cout << subsetSums.back().second[i];
            if (i < subsetSums.back().second.size() - 1) {
                cout << ", ";
            }
        }
        cout << "]" << endl;
    }

    return 0;
}

