---
layout : post
title : "belajar html dibungkus php dan koneksi database pake php"
---

### Sistem Pendaftaran Siswa (PHP & MySQL)

Proyek ini adalah aplikasi web sederhana untuk manajemen data pendaftaran siswa. Aplikasi ini dibangun menggunakan PHP native dan terhubung ke database MySQL. Sistem ini mengimplementasikan operasi dasar database yang dikenal sebagai **CRUD (Create, Read, Update, Delete)**.

## Prasyarat

Untuk menjalankan proyek ini di lingkungan lokal, Anda memerlukan:
* Web Server (Apache, Nginx, dll.)
* PHP
* Database MySQL
* Paket seperti XAMPP atau WAMP (untuk Windows) sangat direkomendasikan karena sudah mencakup semua kebutuhan di atas.

## Instalasi & Konfigurasi

1.  **Pindahkan Berkas Proyek**
    Salin semua berkas proyek ke dalam direktori root server web Anda (misalnya, `htdocs/` jika menggunakan XAMPP).

2.  **Konfigurasi Database**
    * Buka `koneksi.php`. [cite_start]Berkas ini berisi konfigurasi untuk koneksi database.
    * Pastikan pengaturannya sesuai dengan lingkungan Anda. Pengaturan default adalah:
        * [cite_start]Host: `localhost` 
        * [cite_start]Username: `root` 
        * [cite_start]Password: "" (kosong) 
        * [cite_start]Nama Database: `latihan` 

3.  **Buat Database & Tabel**
    * [cite_start]Buat sebuah database baru di MySQL dengan nama `latihan`.
    * Jalankan query SQL berikut untuk membuat tabel `siswa` yang diperlukan oleh aplikasi. Struktur tabel ini didasarkan pada data yang digunakan di `create.php` dan `list-siswa.php`.

    ```sql
    CREATE TABLE siswa (
        id INT AUTO_INCREMENT PRIMARY KEY,
        nama VARCHAR(255) NOT NULL,
        alamat TEXT,
        jenis_kelamin INT(1),
        agama VARCHAR(50),
        sekolah_asal VARCHAR(255)
    );
    ```

4.  **Akses Aplikasi**
    Buka browser Anda dan arahkan ke `http://localhost/latihan/`

---

## Alur Kerja & Penjelasan Berkas

### 1. `index.php` (Halaman Utama)
* **Kegunaan**: Halaman utama atau "gerbang masuk" aplikasi.
* **Fungsi**: Menampilkan judul dan menu navigasi utama yang mengarahkan pengguna ke:
    * **Daftar Baru**: Tautan ke `form-daftar.php` untuk menambah siswa baru.
    * **Pendaftaran**: Tautan ke `list-siswa.php` untuk melihat semua siswa yang telah terdaftar.

### 2. Proses Penambahan Data (Create)
* **`form-daftar.php`**: Menyediakan antarmuka (formulir HTML) bagi pengguna untuk memasukkan data siswa baru (Nama, Alamat, Jenis Kelamin, Agama, dan Sekolah Asal). Ketika tombol "Daftar" ditekan, data dari formulir ini akan dikirim ke `create.php` menggunakan metode `POST`.
* **`create.php`**: Menerima data yang dikirim dari `form-daftar.php` melalui `$_POST`. Kemudian, menyusun dan menjalankan perintah SQL `INSERT` untuk menambahkan data baru ke dalam tabel `siswa`. Jika berhasil, pengguna akan dialihkan ke halaman `list-siswa.php`.

### 3. Proses Pembacaan Data (Read)
* **`list-siswa.php`**: Menampilkan semua data siswa yang tersimpan di database dalam bentuk tabel. Berkas ini menjalankan perintah SQL `SELECT * FROM siswa`. Di setiap baris data siswa, terdapat dua tautan tindakan:
    * **Edit**: Mengarahkan ke `form-edit.php` dengan membawa ID siswa (`?id=...`) yang akan diubah.
    * **Delete**: Mengarahkan ke `form-delete.php` dengan membawa ID siswa (`?id=...`) yang akan dihapus.

### 4. Proses Perubahan Data (Update)
* **`form-edit.php`**: Menerima `id` siswa dari `list-siswa.php` melalui `$_GET` dan mengambil data siswa yang sesuai dari database. Data tersebut kemudian ditampilkan dalam formulir, sehingga pengguna bisa langsung mengubahnya. Ketika tombol "Update" ditekan, formulir akan mengirimkan data yang sudah diperbarui ke berkas `update.php`.
* **`update.php` (Proses Update - *Tidak Disertakan*)**: Berkas ini tidak ada dalam daftar unggahan, tetapi dirujuk dalam kode `form-edit.php`. Fungsinya seharusnya adalah menerima data dari `form-edit.php` dan menjalankan perintah SQL `UPDATE` untuk memperbarui data siswa di database.

### 5. Proses Penghapusan Data (Delete)
* **`form-delete.php`**: Halaman konfirmasi untuk memastikan pengguna benar-benar ingin menghapus data. Berkas ini menerima `id` dari `list-siswa.php`, menampilkan detail data siswa yang akan dihapus, dan menyediakan tombol "Ya" (yang mengirimkan `id` ke `delete.php`) dan tautan "Tidak".
* **`delete.php`**: Menjalankan proses penghapusan data dari database. Berkas ini menerima `id` dari `form-delete.php` melalui `$_POST` dan menjalankan perintah SQL `DELETE FROM siswa WHERE id=$id`. Jika berhasil, pengguna akan dialihkan kembali ke halaman `list-siswa.php`.

### 6. Berkas Pendukung Lainnya
* [cite_start]**`koneksi.php`**: Berkas pusat konfigurasi untuk menghubungkan aplikasi ke database MySQL.
* **`.gitignore`**: Berkas konfigurasi untuk Git yang memberitahu sistem untuk mengabaikan file atau folder tertentu (dalam hal ini adalah direktori `/.idea/`).
* **`README.md`**: Berkas informasi umum tentang proyek. Awalnya berisi tautan yang menunjukkan bahwa ini adalah bagian dari tugas di GitHub Classroom.


![belajar html dibungkus php dan koneksi database pake php](/assets/images/gambarphpgajah.png)
![belajar html dibungkus php dan koneksi database pake php](/assets/images/phpgajah.png)
