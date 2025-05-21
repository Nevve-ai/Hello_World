#include <iostream>
using namespace std;

int main() {
    string nama;
    string kota;
    int umur;

    cout << "Halo Siapa nama kamu? ";
    cin >> nama;
    cout << "Dimana kamu tinggal ? ";
    cin >> kota;
    cout << "Berapa umur kamu sekarang ? ";
    cin >> umur;

    cout << "Halo Salam Kenal: " << nama << endl;
    cout << "Kamu Tinggal di : " << kota << endl;
    cout << "Umur Kamu Sekarang : " <<  umur << endl;
    return 0;
}