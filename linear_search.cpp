#include <iostream>
#include <vector>

using namespace std;

vector<int> linearSearch(const vector<int>& arr, int target) {
    vector<int> indices;

    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == target) {
            indices.push_back(i);
        }
    }

    return indices;
}

int main() {
    vector<int> arr = {19, 40, 10, 90, 2, 50, 60, 50, 1};

    int input;
    cout << "Input: ";
    cin >> input;

    vector<int> result = linearSearch(arr, input);

    if (result.empty()) {
        cout << "Output: Angka " << input << " tidak ada dalam array" << endl;
    } else {
        cout << "Output: Angka " << input << " ada di indeks ke ";
        for (int i = 0; i < result.size(); ++i) {
            cout << result[i]+1;
            if (i < result.size() - 1) {
                cout << " dan ";
            }
        }
        cout << endl;
    }

    return 0;
}