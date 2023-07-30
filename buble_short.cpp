#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

// function untuk buble short method
void bubbleSort(vector<pair<string, string>>& data) {
    int n = data.size();
    for (int i = 0; i < n - 1; ++i) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; ++j) {
            if (data[j].first > data[j + 1].first) {
                swap(data[j], data[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
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
    cout << "Data awal sebelum diurutkan:" << endl;
    for (const auto& item : data) {
        const int colwidth=15;
        cout  << left << setw(colwidth) << item.first << setw(colwidth) << item.second << endl;
    }

    //data setelah diurutkan
    bubbleSort(data);
    cout << "\nData setelah diurutkan:" << endl;
    for (const auto& item : data) {
        const int colwidth=15;
        cout  << left << setw(colwidth) << item.first << setw(colwidth) << item.second << endl;
    }

    return 0;
}