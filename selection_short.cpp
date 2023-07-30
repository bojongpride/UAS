#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

// function untuk selection short method
void selectionSort(vector<pair<string, string>>& data) {
    int n = data.size();
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (data[j].first < data[minIndex].first) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(data[i], data[minIndex]);
        }
    }
}

int main() {
    //data yang akan diurutkan
    vector<pair<string, string>> data = {
        {"Fahmi", "Jakarta"},
        {"Romi", "Solo"},
        {"Andri", "Jakarta"},
        {"Fadillah", "Banyuwangi"},
        {"Ruli", "Bandung"},
        {"Rudi", "Bali"},
        {"Dendi", "Purwokerto"},
        {"Zaki", "Madiun"},
    };

    //memanggil data awal sebelum di urutkan
    cout << "Data sebelum diurutkan:" << endl;
    for (const auto& item : data) {
        const int colwidth=15;
        cout  << left << setw(colwidth) << item.first << setw(colwidth) << item.second << endl;
    }

    //data setelah diurutkan
    selectionSort(data);
    cout << "\nHasil Selection Sort:" << endl;
    for (const auto& item : data) {
        const int colwidth=15;
        cout  << left << setw(colwidth) << item.first << setw(colwidth) << item.second << endl;
    }

    return 0;
}