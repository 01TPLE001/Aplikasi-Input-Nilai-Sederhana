#include <iostream>
using namespace std;

// Fungsi untuk menangani input nilai dan nama siswa serta menampilkan hasilnya
void contohSoal() {
    int nilai;        // Variabel untuk menyimpan nilai siswa
    string nama;      // Variabel untuk menyimpan nama siswa

    cout << "====== Aplikasi Input Nilai ======" << endl;
    cout << "Masukan Nama : ";
    cin >> nama;  // Mengambil input nama siswa dari user
    cout << "Masukan Nilai : ";
    cin >> nilai;  // Mengambil input nilai siswa dari user
    
    string hasil;  // Variabel untuk menyimpan hasil evaluasi
    
    // Evaluasi nilai dan menentukan hasil
    if (nilai >= 80 && nilai <= 100) {
        hasil = "Kamu dinyatakan lulus";
    }
    else if (nilai >= 50 && nilai < 80) {
        hasil = "Kamu bisa remedial";
    }
    else {
        hasil = "Kamu Tidak Lulus";
    }

    // Menampilkan hasil evaluasi
    cout << nama << " " << hasil << endl;
}

int main() {
    contohSoal();  // Memanggil fungsi contohSoal untuk menjalankan program
    return 0;
}
