#include <iostream>
using namespace std;

int main () {
    cout << endl;

    // Variabel a bernilai 7
    int a (7);

    // Pointer b
    int *b;
    b = &a;

    // Pointer C (double pointer)
    int **c;
    c = &b;

    // Menampilkan nilai a berupa angka 7
    cout << a << endl;   // Variabel a menampilkan nilainya
    cout << *b << endl;  // Pointer  b menampilkan nilai variabel a
    cout << **c << endl; // Pointer  c menampilkan nilai variabel a dari pointer b

    cout << endl;

    // Menampilkan alamat yang sama, yakni alamat variabel a
    cout << &a << endl;   // Variabel a menampilkan alamatnya
    cout << &*b << endl;  // Pointer  b menampilkan alamat variabel a
    cout << &**c << endl; // Pointer  c menampilkan alamat variabel a dari pointer b

    cout << endl;

    // Menampilkan Alamat Yang Berbeda
    cout << &a << endl; // Variabel a menampilkan alamatnya
    cout << &b << endl; // Pointer  b menampilkan alamatnya
    cout << &c << endl; // Pointer  c menampilkan alamatnya

    return 0;
}