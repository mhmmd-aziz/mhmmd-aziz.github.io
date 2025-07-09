---
layout : post
title : "instalasi framework laravel untuk backend"
---


###   Instalasi Laravel dan Penjelasan Kegunaan

Laravel adalah framework PHP modern dan powerful yang digunakan untuk membangun aplikasi web berskala kecil hingga besar. Di bawah ini adalah panduan instalasi Laravel secara lengkap, mulai dari nol hingga siap dijalankan secara lokal, beserta penjelasan kegunaan setiap langkah.

---

### Prasyarat Sistem

Sebelum memulai, pastikan perangkatmu sudah memiliki:

- PHP versi 8.1 atau lebih baru  
- Composer (manajer dependensi PHP)  
- Web server (seperti Apache atau Nginx, atau gunakan server bawaan Laravel)  
- Database (MySQL, PostgreSQL, SQLite, dsb)

---

### 1️. Install Composer

**Perintah:**

Kunjungi dan ikuti petunjuk instalasi Composer:  
[https://getcomposer.org/download/](https://getcomposer.org/download/)

**Kegunaan:**  
Composer adalah alat untuk mengelola dependensi/library PHP. Laravel membutuhkan Composer untuk mengunduh semua komponen framework dan dependensi proyeknya.

---

### 2️. Install Laravel Installer Secara Global

**Perintah:**
```bash
composer global require laravel/installer
```

**Kegunaan:**  
Perintah ini menginstal Laravel Installer secara global di sistemmu. Dengan ini, kamu bisa membuat proyek Laravel baru dengan cepat menggunakan perintah `laravel new nama-proyek` dari terminal, tanpa harus mendownload manual.

---

### 3️. Tambahkan Laravel ke PATH (Jika Perintah Belum Terdeteksi)

**Linux/macOS:**
```bash
export PATH="$HOME/.composer/vendor/bin:$PATH"
```

**Windows:**  
Tambahkan path berikut ke Environment Variables:
```
C:\Users\NamaUser\AppData\Roaming\Composer\vendor\bin
```

**Kegunaan:**  
Menambahkan Laravel Installer ke PATH sistem memungkinkan kamu menjalankan perintah `laravel` dari terminal di direktori mana pun. Tanpa ini, terminal tidak akan mengenali perintah `laravel`.

---

### 4️. Buat Project Laravel Baru

**Perintah (menggunakan installer):**
```bash
laravel new nama-proyek
```

**Atau alternatif:**
```bash
composer create-project laravel/laravel nama-proyek
```

**Kegunaan:**  
Langkah ini membuat direktori baru berisi struktur standar Laravel, termasuk folder `app`, `routes`, `config`, dan file konfigurasi penting. Laravel siap dikembangkan di folder ini.

---

### 5️. Masuk ke Direktori Project

**Perintah:**
```bash
cd nama-proyek
```

**Kegunaan:**  
Perintah ini membawa kamu ke dalam folder proyek Laravel, agar kamu bisa menjalankan perintah seperti `php artisan`, membuka file kode, dan mengelola proyekmu langsung dari terminal.

---

### 6️. Jalankan Server Lokal Laravel

**Perintah:**
```bash
php artisan serve
```

**Kegunaan:**  
Perintah ini menjalankan server development bawaan Laravel di `http://localhost:8000`. Sangat cocok untuk keperluan pengembangan dan testing tanpa perlu konfigurasi server Apache/Nginx.

---

### 7️. Atur File Konfigurasi Lingkungan (.env)

**File yang diedit:** `.env`

**Contoh isi file:**
```env
APP_NAME=Laravel
APP_ENV=local
APP_KEY=base64:...
APP_DEBUG=true
APP_URL=http://localhost

DB_CONNECTION=mysql
DB_HOST=127.0.0.1
DB_PORT=3306
DB_DATABASE=laravel_db
DB_USERNAME=root
DB_PASSWORD=
```

**Kegunaan:**  
File `.env` menyimpan konfigurasi penting proyek seperti koneksi database, mode debug, nama aplikasi, dan kunci enkripsi. Setiap environment (development, staging, production) dapat memiliki `.env` yang berbeda tanpa mengubah file kode utama.

---

✅ **Laravel berhasil diinstal dan dijalankan!**  
Setelah semua langkah di atas selesai, kamu bisa mulai membuat route, controller, model, dan fitur aplikasi web dengan Laravel 🎉



![instalasi framework laravel untuk backend](/assets/images/laravel.png)
![instalasi framework laravel untuk backend](/assets/images/login.png)