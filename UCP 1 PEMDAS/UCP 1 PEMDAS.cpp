// 1. - int digunakan untuk bilangan bulat seperti umur (20)
// - char digunakan untuk karakter seperti jenis kelamin (L)
// - string digunakan untuk teks seperti nama (Shidqul)

// 2. Conditional statement 
// int main () {
// int umur = 20;
// if (umur >= 18) {
// cout << "Anda Sudah dewasa" << endl;
// }

// 3. Struct Mahasiswa {
//    string nim;
//    string nama;
//    string alamat;
//    string umur;
//   }

// 4. void () {
//    cout << "Hello World" << endl;

// 5. int main()
//{
//  int i;
//string nama[5];
 //  for (i = 0; i < 7; i++)
 //  {
 //      cout << i << ". " << "Shidqul" << endl;
 //  }

#include <iostream>
#include <string>
using namespace std;

string cekDiterima(double nilaiRataRata, double nilaiMatematika) {
    if (nilaiRataRata >= 70 || nilaiMatematika > 80) {
        return "Diterima";
    }
    else {
        return "Tidak diterima";
    }
}

int main() {

    string nama[20];
    double nilaiRataRata[20];
    double nilaiMatematika[20];
    string status[20];


    for (int i = 0; i < 20; ++i) {
        cout << "Masukkan nama pendaftar ke-" << i + 1 << ": ";
        cin >> nama[i];
        cout << "Masukkan nilai rata-rata tes untuk " << nama[i] << ": ";
        cin >> nilaiRataRata[i];
        cout << "Masukkan nilai matematika untuk " << nama[i] << ": ";
        cin >> nilaiMatematika[i];
        status[i] = cekDiterima(nilaiRataRata[i], nilaiMatematika[i]);
    }

    cout << "\nNama Pendaftar\tStatus\n";
    for (int i = 0; i < 20; ++i) {
        cout << nama[i] << "\t\t" << status[i] << endl;
    }

    char ulangi;
    cout << "\nApakah ingin mengulang program? (y/n): ";
    cin >> ulangi;
    if (ulangi == 'y' || ulangi == 'Y') {

        main();
    }
    else {
        cout << "Terima kasih telah menggunakan program." << endl;
    }
    
    return 0;
}