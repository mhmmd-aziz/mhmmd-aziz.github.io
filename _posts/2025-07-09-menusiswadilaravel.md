---
layout : post
title : "membuat futur CRUD di menu siswa di laravel"
---


###  Membuat Fitur CRUD "Siswa" di Laravel 

Tujuan dari panduan ini adalah membuat fitur **manajemen data siswa** di Laravel, yang dapat diakses dari menu sidebar di dalam halaman dashboard. Fitur ini memungkinkan pengguna (misalnya admin) untuk menambahkan, mengedit, menghapus, dan melihat data siswa. Proses ini biasa disebut sebagai **CRUD (Create, Read, Update, Delete)**.

![menu siswa](/assets/images/menusiswa.png)
---

### 1. Buat Model dan Migration untuk Siswa

Langkah pertama adalah membuat struktur database dan representasi model untuk data siswa.  
**Gunanya:** untuk mendefinisikan kolom/atribut siswa (misalnya: nama, NIS, kelas) yang akan disimpan di dalam database.

---

### 2. Jalankan Migrasi Database

Setelah membuat migration, langkah selanjutnya adalah menjalankan migrasi agar tabel siswa benar-benar dibuat di dalam database.  
**Gunanya:** menyiapkan tempat menyimpan data siswa.

---

### 3. Buat Controller Khusus untuk Siswa

Selanjutnya buat sebuah controller khusus yang bertugas menangani semua permintaan terkait data siswa, seperti menampilkan daftar siswa, menambahkan data, menyimpan data, mengedit, dan menghapus.  
**Gunanya:** sebagai jembatan antara data dan tampilan (view), serta pengatur logika CRUD.

---

### 4. Daftarkan Routing untuk Siswa

Agar halaman-halaman siswa bisa diakses lewat URL, kamu harus menambahkan routing.  
**Gunanya:** mengatur URL apa saja yang tersedia (misalnya `/siswa`, `/siswa/tambah`, dll), dan menghubungkannya ke fungsi di controller.

---

### 5. Buat Halaman Tampilan (View)

Buat tampilan untuk:

- Menampilkan daftar siswa dalam bentuk tabel
- Formulir untuk menambah siswa baru
- Formulir untuk mengedit data siswa
- Konfirmasi penghapusan

**Gunanya:** agar pengguna dapat berinteraksi secara visual dengan data siswa.

---

### 6. Tampilkan Link Menu "Siswa" di Sidebar Dashboard

Tambahkan link di bagian sidebar atau menu utama dashboard agar pengguna bisa langsung menuju halaman manajemen siswa.  
**Gunanya:** memberikan akses cepat dan terstruktur ke fitur siswa dari antarmuka utama aplikasi.

---

### 7. Isi Fungsi-fungsi di Controller

Selanjutnya isi logika di dalam controller seperti menyimpan data baru, memperbarui data yang sudah ada, menghapus, dan menampilkan data.  
**Gunanya:** agar semua aksi CRUD bisa berjalan dengan benar sesuai permintaan pengguna.

---

### 8. (Opsional) Lindungi dengan Middleware Autentikasi

Jika fitur siswa hanya boleh diakses oleh admin atau pengguna yang login, tambahkan perlindungan menggunakan middleware.  
**Gunanya:** menjaga keamanan agar fitur tidak bisa diakses sembarang orang.

---

### Hasil Akhir

Setelah semua langkah dilakukan, kamu akan memiliki:

- Menu sidebar bernama **Siswa**
- Halaman **daftar siswa**
- Formulir **tambah siswa**
- Formulir **edit siswa**
- Tombol **hapus siswa**
- Semua data tersimpan di database dan bisa dimodifikasi sesuai kebutuhan

---

Fitur ini sangat penting dalam aplikasi seperti sistem informasi sekolah, sistem manajemen kelas, atau aplikasi yang melibatkan entitas pengguna seperti siswa, guru, karyawan, dsb.

---

#### form siswa

![form siswa](/assets/images/formsiswa.png)

---
#### form edit

![form siswa](/assets/images/edit.png)

---
#### form tambah siswa
![form siswa](/assets/images/tambahsiswa.png)

---
#### form hapus
![form siswa](/assets/images/hapus.png)

---
#### hasil akhir setelah di tes CRUD
![form siswa](/assets/images/hasilakhir.png)

---
#### view data di xampp setelah di CRUD
![form siswa](/assets/images/viewxampp.png)

---