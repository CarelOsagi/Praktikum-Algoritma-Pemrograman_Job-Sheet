<pre>
👨‍🎓Name : Carel Habsian Osagi<br>
🆔Student ID : 23343061<br>
📚Courses : Informatics / 1st Semester<br>
🏫College : Padang State University<br>
👨‍🏫Lecturer : Randi Proska, M.Sc,<br>
</pre>
## Job Sheet 1 - Algoritma dan Pemrograman IDE
### 1. Algoritma & Pemrograman :
- **Algoritma :** Serangkaian langkah terstruktur untuk menyelesaikan masalah atau menjalankan suatu fungsi.
- **Pemrograman :** Proses membuat program komputer menggunakan bahasa pemrograman dengan prinsip algoritma untuk menyelesaikan tugas.

### 3. Pengenalan Bahasa C:
- **Bahasa C :**
Bahasa pemrograman tingkat menengah yang sederhana, efisien, dan mendukung pemrograman prosedural.
- **Fitur :** Kontrol langsung terhadap perangkat keras melalui pointer. Portabel dan dapat dijalankan di berbagai platform.
- **Struktur Program C :** Program terdiri dari fungsi-fungsi, dengan fungsi utama main sebagai titik awal eksekusi.

### 4. IDE & Instalasi:
- **IDE (Integrated Development Environment) :** Alat menyediakan lingkungan terpadu untuk pengembangan perangkat lunak. Menyatukan editor kode, compiler, dan debugger.
- **Instalasi :** Pilih IDE atau teks editor (misalnya, Code::Blocks, Dev-C++, Visual Studio Code). Instal IDE dan sesuaikan dengan kompiler C yang dipilih. Ikuti petunjuk instalasi dari situs resmi IDE atau editor yang digunakan.

## Job Sheet 2 - Pemrograman Dasar C
### 1. Struktur Dasar C:
- **Fungsi main :** Setiap program C dimulai dari fungsi main. Ini adalah titik awal eksekusi program.
- **Kurung Kurawal {} :** Menandai awal dan akhir blok kode. Semua pernyataan program ditempatkan di dalam blok ini.
- **Pernyataan :** Instruksi atau langkah-langkah eksekusi program. Diakhiri dengan titik koma ;.
- **Komentar (`/*...*/` atau `//`) :** Komentar digunakan untuk memberikan keterangan dalam kode. Compiler akan mengabaikan komentar saat menjalankan program.

### 2. Proses Input & Output:

- `printf`: Fungsi untuk mencetak output ke layar. Contoh : `printf("Hello, World!\n");`.
- `scanf`: Fungsi untuk menerima input dari pengguna. Contoh : `scanf("%d", &variable);`.
- `#include <stdio.h>`: Direktif preprosesor yang memasukkan file header untuk operasi input dan output standar.
- Format specifier : Menunjukkan jenis data yang akan dicetak atau diinput, seperti `%d` untuk integer.

Contoh program sederhana menggunakan struktur dasar C dan proses input/output :
```c
#include <stdio.h>

int main() {
    // Deklarasi variabel
    int angka1;
    int angka2;
    // Input
    printf("Inputkan angka ke 1: ");
    scanf("%d", &angka1);
    printf("Inputkan angka ke 12: ");
    scanf("%d", &angka2);n

    // Proses dan Output
    int perkalian = angka1 * angka2;
    printf("You entered: %d\n", perkalian);

    return 0; // Mengindikasikan program selesai tanpa kesalahan
}
```
## Job Sheet 3 - Operator
### 1. Variabel & Konstanta:

- **Variabel :** Tempat penyimpanan yang diberi nama untuk menyimpan nilai. Dideklarasikan dengan menentukan tipe data dan nama variabel (contoh: `int umur;`).
- **Konstanta :** Nilai tetap yang tidak dapat diubah selama eksekusi program. Misalnya, `const float pi = 3.14;`.
### 2. Tipe Data Fundamental:

- **Integer** (`int`): Menyimpan bilangan bulat tanpa desimal.
- ***Float** (`float`): Menyimpan bilangan desimal (**floating point**).
- **Double** (`double`): Menyimpan bilangan desimal dengan presisi ganda dibandingkan dengan float.
- **Char** (`char`): Menyimpan karakter atau nilai dalam bentuk ASCII.
### 3. Type Casting:

- **Type Casting (Pengecoran Tipe) :** Mengubah tipe data satu variabel ke tipe data lain. Contohnya, `(int) 5.67` mengubah float menjadi integer.
- **Implicit Casting (Konversi Implisit) :** Dilakukan secara otomatis oleh compiler (contoh: konversi `integer` ke `float`).
- **Explicit Casting (Konversi Eksplisit) :** Dilakukan secara manual oleh programmer menggunakan operator cast (contoh: `(int) 5.67`).
### 4. Keywords:

- **Keywords (Kata Kunci) :** Kata-kata yang memiliki makna khusus dalam bahasa pemrograman dan tidak dapat digunakan sebagai nama variabel atau fungsi. Contoh keywords dalam C :
- **`int`, `float`, `char` :** Tipe data.
- **`if`, `else`, `while` :** Kontrol alur program.
- **`const` :** Mendeklarasikan konstanta.
- **`return` :** Mengembalikan nilai dari suatu fungsi.
  
Contoh penggunaan variabel, tipe data, type casting, dan keywords dalam program C :
```c
#include <stdio.h>

int main() {
    // Variabel
    int umur = 25;
    float tinggi = 175.5;
    char nilai = 'A';

    // Type Casting
    int hasil = (int)tinggi;

    // Output
    printf("Umur : %d\n", umur);
    printf("Tinggi : %f\n", tinggi);
    printf("Tinggi yang lebih rinci : %d\n", hasil);
    printf("Nilai : %c\n", nilai);

    return 0;
}
```
## Job Sheet 4 - Operator
### 1. Operator Aritmatika :

Operator Aritmatika: Digunakan untuk melakukan operasi matematika pada nilai numerik.
Contoh:
- `+` (Penambahan), `-` (Pengurangan), `*` (Perkalian).
- `/` (Pembagian), `%` (Modulus).
### 2. Operator Penugasan:

Operator Penugasan: Mengaitkan nilai ke variabel.
Contoh:
- `=` (Penugasan), `+=` (Penugasan dengan penambahan), `-=` (Penugasan dengan pengurangan).
- `*=` (Penugasan dengan perkalian), `/=` (Penugasan dengan pembagian), `%=` (Penugasan dengan modulus).
### 3. Operator Pembanding:

Operator Pembanding: Membandingkan dua nilai atau ekspresi.
Contoh:
- `==` (Sama dengan), `!=` (Tidak sama dengan).
- `>` (Lebih besar dari), `<` (Lebih kecil dari), `>=` (Lebih besar atau sama dengan).
- `<=` (Lebih kecil atau sama dengan).
### 4. Operator Logika:

- **Operator Logika :** Digunakan untuk mengkombinasikan kondisi logika.
Contoh:
- `&&` (Logika AND), `||` (Logika OR), `!` (Logika NOT).
### 5. Operator Bitwise:

- **Operator Bitwise :** Melibatkan manipulasi bit dari operand.
Contoh:
- `&` (Bitwise AND), `|` (Bitwise OR), `^` (Bitwise XOR).
- `<<` (Shift kiri), `>>` (Shift kanan).
### 6. Operator Kondisional:

- **Operator Kondisional (Ternary) :** Menyediakan cara singkat untuk menulis pernyataan kondisional.
Contoh:
- `(condition) ? true_expression : false_expression`.
Digunakan untuk membuat keputusan berdasarkan kondisi tertentu.

Contoh penggunaan operator dalam C :
```c
#include <stdio.h>

int main() {
    // Operator Aritmatika
    int a = 10, b = 5, hasil;
    hasil = a + b;

    // Operator Penugasan
    a += 2; // Nilai a sekarang 12

    // Operator Pembanding
    if (a > b) {
        printf("a lebih besar daripada b\n");
    }

    // Operator Logika
    if ((a > 5) && (b > 3)) {
        printf("Kedua kondisi bernilai benar\n");
    }

    // Operator Bitwise
    int x = 5, y = 3, bitwiseHasil;
    bitwiseHasil = x & y; // Bitwise AND

    // Operator Kondisional
    int umur = 20;
    (umur >= 18) ? printf("Kamu berumur dewasa\n") : printf("Kamu masih dibawah umur\n");

    return 0;
}
```
## Job Sheet 5 - Flow Control (Desicion Making)
### 1. If :

- `If`: Digunakan untuk mengeksekusi blok kode jika suatu kondisi bernilai benar (true).
Contoh :
```c
if (condition) {
    // Blok kode dieksekusi jika kondisi benar
}
```
### 2. If Else :

- `If Else`: Menyediakan dua blok kode alternatif, satu untuk kondisi benar dan satu untuk kondisi salah.
Contoh :
```c
if (condition) {
    // Blok kode dieksekusi jika kondisi benar
} else {
    // Blok kode dieksekusi jika kondisi salah
}
```
### 3. Switch Case :

- `Switch Case`: Memungkinkan pengujian nilai suatu variabel dengan beberapa kasus dan menjalankan blok kode sesuai dengan kasus yang sesuai.
Contoh :
```c
switch (expression) {
    case value1:
        // Blok kode jika expression sama dengan value1
        break;
    case value2:
        // Blok kode jika expression sama dengan value2
        break;
    default:
        // Blok kode jika tidak ada kasus yang sesuai
}
```
### 4. Operator Ternary :

- `Operator Ternary`: Menyediakan cara singkat untuk menulis pernyataan kondisional.
Contoh :
```c
(condition) ? true_expression : false_expression;
```
### 5. Percabangan Bersarang (Nested) :

- `Percabangan Bersarang`: Menempatkan satu struktur percabangan di dalam struktur percabangan lainnya.
Contoh :
```c
if(kondisi1) {
    // Blok kode dieksekusi jika kondisi1 benar
    if(kondisi2) {
        // Blok kode dieksekusi jika kondisi2 benar
    } else {
        // Blok kode dieksekusi jika kondisi2 salah
    }
} else {
    // Blok kode dieksekusi jika kondisi1 salah
}
```
Contoh program dengan penggunaan percabangan dalam bahasa C :
```c
#include <stdio.h>

int main() {
    // Contoh If
    int umur = 25;
    if (umur >= 18) {
        printf("Kamu berumur dewasa.\n");
    }

    // Contoh If Else
    int skor = 75;
    if (skor >= 70) {
        printf("Kamu lulus.\n");
    } else {
        printf("Kamu gagal.\n");
    }

    // Contoh Switch Case
    int pilihan = 2;
    switch (pilihan) {
        case 1:
            printf("Kamu memilih opsi 1.\n");
            break;
        case 2:
            printf("Kamu memilih opsi 2.\n");
            break;
        default:
            printf("Pilihan salah.\n");
    }

    // Contoh Operator Ternary
    int x = 10, y = 5;
    int hasil = (x > y) ? x : y;
    printf("Angka yang lebih besar : %d\n", hasil);

    // Contoh Percabangan Bersarang
    int angka = 20;
    if (angka > 0) {
        if (angka % 2 == 0) {
            printf("Angka genap positif.\n");
        } else {
            printf("Angka ganjil positif.\n");
        }
    } else {
        printf("Angka negatif.\n");
    }

    return 0;
}
```
## Job Sheet 6 - Flow Control (Looping)
### 1. Perulangan For :

- Perulangan `For`: Digunakan untuk mengeksekusi blok kode sejumlah tertentu kali.
Struktur :
```c
for (initialization; condition; update) {
    // Blok kode yang diulang
}
```
Contoh :
```c
for (int i = 0; i < 5; i++) {
    printf("Iterasi ke-%d\n", i);
}
```
### 2. Perulangan While :

- Perulangan `While`: Mengeksekusi blok kode selama kondisi tertentu benar `(true)`.
Struktur :
```c
while (kondisi){
    // Blok kode yang diulang
}
```
Contoh :
```c
int perulangan = 0;
while (perulangan < 3) {
    printf("Count: %d\n", perulangan);
    perulangan++;
}
```
### 3. Perulangan Do While :

Perulangan `Do While`: Mirip dengan perulangan `while`, namun blok kode akan dieksekusi setidaknya sekali sebelum memeriksa kondisi.
Struktur :
```c
do{
    // Blok kode yang diulang
} while(kondisi);
```
Contoh :
```c
int i = 0;
do{
    printf("Iterasi ke-%d\n", i);
    i++;
} while(i < 3);
```
### 4. Perulangan Bersarang (Nested Loop) :

- Perulangan Bersarang: Menempatkan satu loop di dalam loop lainnya.
Contoh :
```c
for (int i = 0; i < 3; i++){
    for (int j = 0; j < 2; j++){
         printf("Loop bersarang : i=%d, j=%d\n", i, j);
     }
 }
```
Contoh program dengan penggunaan perulangan dalam bahasa C :
```c
#include <stdio.h>
int main() {
    // Perulangan For
    printf("Perulangan For:\n");
    for (int i = 0; i < 5; i++) {
        printf("Iterasi ke-%d\n", i);
    }

    // Perulangan While
    printf("\nPerulangan While:\n");
    int perulangan = 0;
    while (perulangan < 3) {
        printf("Perulangan : %d\n", perulangan);
        perulangan++;
    }

    // Perulangan Do While
    printf("\nPerulangan Do While:\n");
    int j = 0;
    do {
        printf("Iterasi ke-%d\n", j);
        j++;
    } while (j < 3);

    // Perulangan Bersarang
    printf("\nPerulangan Bersarang:\n");
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 2; y++) {
            printf("Loop bersarang : x=%d, y=%d\n", x, y);
        }
    }
    return 0;
}
```
## Job Sheet 7 - Array
### 1. Pengertian Array:

- **Array** : Struktur data yang dapat menyimpan sejumlah elemen data dengan tipe yang sama, ditempatkan dalam satu variabel. Setiap elemen diidentifikasi dengan indeks atau nomor posisi.
Contoh deklarasi array :
```c
int numbers[5]; // Array integer dengan 5 elemen
char characters[3]; // Array karakter dengan 3 elemen
```
### 2. Penggunaan Array:

- **Inisialisasi Array** : Memberikan nilai awal pada saat deklarasi atau setelahnya.
```c
int numbers[3] = {1, 2, 3}; // Inisialisasi array integer
char vowels[5] = {'a', 'e', 'i', 'o', 'u'}; // Inisialisasi array karakter
```
- **Akses Elemen Array** : Menggunakan indeks untuk membaca atau menetapkan nilai pada suatu elemen.
```c
int x = numbers[0]; // Membaca nilai elemen pertama`
numbers[1] = 10; // Menetapkan nilai baru pada elemen kedua
```
- **Iterasi Array** : Melalui loop untuk mengakses atau memanipulasi setiap elemen array.
```c
for (int i = 0; i < 3; i++) {
    printf("%d ", numbers[i]); // Mencetak semua elemen array
}
```
- **Ukuran Array** : Jumlah total elemen dalam array.
```c
int size = sizeof(numbers) / sizeof(numbers[0]); // Ukuran array
```
- **Array Multidimensi** : Array yang memiliki lebih dari satu dimensi.
```c
int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}}; // Array dua dimensi
```
Array memudahkan penanganan sejumlah data terstruktur dan menyediakan cara efisien untuk menyimpan dan mengakses elemen data dengan tipe yang sama.
## Job Sheet 8 - Fungsi Prosedur
### 1. Pengertian Fungsi :

- **Fungsi** : Blok kode terpisah yang dapat dijalankan atau dipanggil untuk menyelesaikan tugas tertentu. Fungsi memecah program menjadi bagian-bagian yang lebih kecil dan dapat digunakan kembali.
### 2. Penggunaan Fungsi :

- **Deklarasi Fungsi :** Menyatakan nama fungsi, tipe data kembalian (jika ada), dan parameter (jika ada).
- **Definisi Fungsi :** Menyediakan implementasi atau isi dari fungsi.
- **Pemanggilan Fungsi :** Menggunakan nama fungsi untuk mengeksekusi blok kode tersebut.
```c
// Deklarasi
int tambah(int a, int b);

int main() {
    // Pemanggilan Fungsi
    int hasil = tambah(3, 5);
    return 0;
}

// Definisi
int tambah(int a, int b) {
    return a + b;
}
```
### 3. Fungsi Rekursif:

- **Fungsi Rekursif :** Fungsi yang memanggil dirinya sendiri untuk menyelesaikan tugas. Perlu memiliki kondisi basis agar tidak terjadi pemanggilan tak terbatas.
```c
int faktorial(int n) {
    if (n <= 1) {
        return 1; // Kondisi basis
    } else {
        return n * faktorial(n - 1); // Pemanggilan rekursif
    }
}
```
### 4. Variabel Lokal & Global:

- **Variabel Lokal :** Dideklarasikan di dalam fungsi dan hanya dapat diakses di dalam fungsi tersebut. Hidup selama eksekusi fungsi.
- **Variabel Global :** Dideklarasikan di luar fungsi dan dapat diakses oleh semua fungsi dalam program. Hidup selama program berjalan.
### 5. Pass by Value:

- **Pass by Value :** Metode pengiriman argumen ke dalam fungsi di mana nilai argumen disalin ke dalam parameter fungsi. Perubahan pada parameter tidak memengaruhi nilai argumen di luar fungsi.
```c
void tukarNilai(int x) {
    x = 10;
}

int main() {
    int angka = 5;
    tukarNilai(angka); // Pass by Value
    // 'angka' tetap 5
    return 0;
}
```
### 6. Pass by Reference:

- **Pass by Reference :** Metode pengiriman argumen ke dalam fungsi di mana parameter menerima alamat memori dari argumen. Perubahan pada parameter memengaruhi nilai argumen di luar fungsi.
```c
void tukarNilai(int *x) {
    *x = 10;
}

int main() {
    int angka = 5;
    tukarNilai(&angka); // Pass by Reference
    // 'angka' berubah menjadi 10
    return 0;
}
```
Fungsi memberikan modularitas dan mempermudah pemeliharaan dan pengembangan kode. Penggunaan variabel lokal dan global, serta metode pengiriman parameter (pass by value atau pass by reference), memengaruhi cara data ditangani dalam fungsi. Fungsi rekursif dapat menyederhanakan pemrosesan tugas yang dapat diulang.
## Job Sheet 9 - Pointer
### 1. Pengertian Pointer:

- **Pointer :** Variabel yang menyimpan alamat memori variabel lain. Pointer menyediakan cara langsung untuk mengakses dan memanipulasi nilai di lokasi memori tertentu.
### 2. Penggunaan Pointer:

- **Deklarasi Pointer :** Menyatakan tipe data pointer dan nama pointer. `int *ptr;` deklarasi pointer ke variabel bertipe `int`.
- **Inisialisasi Pointer :** Menetapkan alamat memori variabel ke pointer. `int x = 5;` `int *ptr = &x;` inisialisasi pointer ptr dengan alamat memori variabel `x`.
- **Dereferensi Pointer :** Menggunakan operator dereference (`*`) untuk mengakses nilai yang disimpan di lokasi memori yang ditunjuk oleh pointer. `int value = *ptr;` mengambil nilai yang ditunjuk oleh `ptr` dan menyimpannya di `value`.
### 3. Pointer untuk pass by reference:

- **Pass by Reference dengan Pointer :** Menggunakan pointer sebagai parameter fungsi untuk memungkinkan perubahan pada variabel asli di luar fungsi.
```c
void tukarNilai(int *x) {
    *x = 10;
}

int main() {
    int angka = 5;
    tukarNilai(&angka); // Pass by Reference dengan Pointer
    // 'angka' berubah menjadi 10
    return 0;
}
```
### 4. Pointer untuk mengakses array :

- **Pointer dan Array :** Array dapat diakses menggunakan pointer. Nama array tanpa indeks akan menghasilkan alamat memori elemen pertama dalam array.
```c
int angka[5] = {1, 2, 3, 4, 5};
int *ptr = angka; // Pointer menunjuk ke elemen pertama array

// Mengakses elemen array menggunakan pointer
for(int i = 0; i < 5; i++){
    printf("Elemen ke-%d: %d\n", i, *(ptr + i));
}
```
Pointer memberikan fleksibilitas dalam manipulasi dan penggunaan memori dalam bahasa C. Penggunaannya umum dalam operasi file, alokasi dinamis, dan ketika diperlukan referensi langsung ke lokasi memori.
## Job Sheet 10 - Enumarasi & Structure
### 1. Pengertian Enum:

- `Enum` (Enumerated Type) : Jenis data khusus yang digunakan untuk menyusun sebuah kumpulan konstanta bernama. Ini memberikan cara untuk membuat kumpulan nama yang jelas untuk nilai-nilai integral.
### 2. Pengertian Structure:

- `Struct` (Structure) : Jenis data yang memungkinkan Anda menggabungkan beberapa tipe data berbeda di dalam satu struktur. Struktur membantu dalam merepresentasikan kumpulan data terkait.
### 3. Penggunaan Enum :

Deklarasi Enum :
```c
enum Day {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
```
Penggunaan Enum :
```c
enum Day today = Wednesday;
```
### 4. Penggunaan Struct:

Deklarasi Struct :
```c
struct Orang {
    char nama[50];
    int umur;
    float tinggi;
};
```
Penggunaan Struct :
```c
struct Orang orang1;
orang1.umur = 25;
```
### 5. Penggunaan typedef pada Struct:

- `typedef` pada `Struct`: Digunakan untuk memberikan nama alias yang lebih pendek dan mudah digunakan untuk **tipe data** `struct`.
```c
typedef struct {
    char judul[50];
    int tahun;
} Buku;
```
Penggunaan typedef pada Struct :
```c
Buku bukuKu;
```
### 6. Struct Bersarang :

- **Struct Bersarang :** Memungkinkan Anda menempatkan satu struct di dalam struct lainnya.
```c
struct Alamat{
    char namaJalan[50];
    char kota[50];
};

struct Karyawan{
    char nama[50];
    struct Alamat alamat;
};
```
### 7. Passing Struct ke dalam fungsi:

- **Passing Struct ke dalam fungsi :** Dapat dilakukan dengan menyertakan parameter struct di dalam fungsi.
```c
void tampilKaryawan(struct Karyawan kary) {
    printf("Nama : %s\n", kary.nama);
    printf("Street: %s\n", kary.alamat.namaJalan);
    printf("Kota : %s\n", kary.alamat.kota);
}

int main() {
    struct Karyawan kary1 = {"Carel Habsian Osagi", {"Jalan Apel no.1", "Padang"}};
    tampilKaryawan(kary1);
    return 0;
}
```
## Job Sheet 11 - File Handling in C
### 1. Membaca File dengan C:

- **Fungsi fopen :** Digunakan untuk membuka file.
```c
FILE *file = fopen("nama_file.txt", "r");
```
Pengecekan Ketersediaan File :
```c
if (file != NULL) {
    // File berhasil dibuka
} else {
    // Gagal membuka file
}
```
Membaca Data dari File :
```c
char buffer[100];
while (fgets(buffer, sizeof(buffer), file) != NULL) {
    printf("%s", buffer);
}
```
### 2. Menulis dalam File dengan C:

- **Fungsi `fopen` :** Juga digunakan untuk membuka file, namun dengan mode "`w`" atau "`a`" untuk menulis atau menambahkan pada akhir file.
```c
FILE *file = fopen("nama_file.txt", "w");
```
- Penjelasan variasi mode pada `fopen()` dalam memperlakukan file :
1. "`r`" (Read) : Membaca file yang sudah ada. Gagal membuka file jika tidak ditemukan.
2. "`w`" (Write) : Menulis ke file. Jika file sudah ada, isinya dihapus; jika tidak, file baru dibuat.
3. "`a`" (Append) : Menulis ke file di akhir. Jika file sudah ada, menambahkan data di akhir; jika tidak, file baru dibuat.
4. "`r+`" (Read and Write) : Membaca dan menulis pada file yang sudah ada. Gagal membuka file jika tidak ditemukan.
5. "`w+`" (Write and Read) : Menulis dan membaca pada file. Jika file sudah ada, isinya dihapus; jika tidak, file baru dibuat.
6. "`a+`" (Append and Read) : Menambahkan dan membaca pada file. Jika file sudah ada, menambahkan data di akhir; jika tidak, file baru dibuat.
7. "`rb`", "`wb`", "`ab`" : Mode biner untuk membaca, menulis, atau menambahkan pada file biner.
8. "`r+b`" atau "`rb+`" : Baca dan tulis pada file biner yang sudah ada. Gagal membuka file jika tidak ditemukan.
9. "`w+b`" atau "`wb+`" : Tulis dan baca pada file biner. Jika file sudah ada, isinya dihapus; jika tidak, file baru dibuat.
10. "`a+b`" atau "`ab+`" : Tambahkan dan baca pada file biner. Jika file sudah ada, menambahkan data di akhir; jika tidak, file baru dibuat.\

- Menulis Data ke dalam File :
```c
fprintf(file, "Hello, World!\n");
```
- Menutup File :
```c
fclose(file);
```
Contoh lengkap untuk membaca dan menulis file :
```c
#include <stdio.h>

int main() {
    // Membaca File
    FILE *bacaFile = fopen("baca_file.txt", "r");
    if (bacaFile != NULL) {
        char buffer[100];
        while (fgets(buffer, sizeof(buffer), bacaFile) != NULL) {
            printf("%s", buffer);
        }
        fclose(bacaFile);
    }
    else{
        printf("Gagal membaca file\n");
    }

    // Menulis ke File
    FILE *tulisFile = fopen("tulis_file.txt", "w");
    if (tulisFile != NULL) {
        fprintf(tulisFile, "Hello, World!\n");
        fclose(tulisFile);
    } else {
        printf("Gagal menulis ke file\n");
    }

    return 0;
}
```
Program di atas membaca isi dari file "baca_file.txt" dan mencetaknya ke layar, kemudian menulis teks "Hello, World!" ke dalam file "tulis_file.txt". Penting untuk memeriksa apakah file berhasil dibuka sebelum membaca atau menulis data.
