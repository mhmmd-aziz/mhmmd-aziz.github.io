#include <iostream>

using namespace std;

// Fungsi rekursif untuk Menara Hanoi
void hanoi(int n, char sumber, char tujuan, char bantuan) {
    if (n == 1) {
        cout << "Pindahkan cakram 1 dari " << sumber << " ke " << tujuan << endl;
        return;
    }
    hanoi(n - 1, sumber, bantuan, tujuan); // Pindahkan n-1 cakram ke tiang bantu
    cout << "Pindahkan cakram " << n << " dari " << sumber << " ke " << tujuan << endl;
    hanoi(n - 1, bantuan, tujuan, sumber); // Pindahkan n-1 cakram dari tiang bantu ke tujuan
}

int main() {
    int n;
    cout << "Masukkan jumlah cakram: ";
    cin >> n;

    hanoi(n, 'A', 'C', 'B'); // A = sumber, C = tujuan, B = bantuan
    return 0;
}
