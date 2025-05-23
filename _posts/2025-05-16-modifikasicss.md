---
layout : post
title : "belajar modifikasi css dengan scss, dan menambah deskripsi di bawah profile dan di navigaton juga, dan favicon dan unduh webstorm sama toolbox di jet brains"
---

### Penjelasan kode di main.scss 


mendefinisikan gaya untuk halaman web menggunakan SCSS. SCSS adalah alat yang membantu menulis CSS dengan lebih mudah menggunakan fitur seperti variabel dan penyarangan.

***1. Variabel:***

Kode ini memulai dengan mendefinisikan tiga variabel. Variabel pertama, bernama `$primary-color`, diberi nilai warna biru muda (kode `#4cb7e8`). Variabel kedua, `$secondary-color`, diberi nilai warna biru tua (kode `#3c56c7`). Variabel ketiga, `$font-stack`, menyimpan daftar font yang diinginkan, yaitu Helvetica sebagai pilihan utama, dan font sans-serif sebagai cadangan. Penggunaan variabel ini sangat membantu karena jika Anda ingin mengubah warna utama situs, Anda hanya perlu mengubahnya di satu tempat.

***2. Reset & Gaya Dasar Body:***

Selanjutnya, ada aturan dasar untuk elemen `body`, `h1`, `h2`, dan `p`. Aturan ini menghapus semua margin dan padding bawaan browser (mengaturnya menjadi 0) dan mengubah cara browser menghitung ukuran kotak (menggunakan `box-sizing: border-box`).
Untuk elemen `body` secara khusus, kode ini menetapkan jenis font menggunakan variabel `$font-stack`, mengatur tinggi baris menjadi 1.6 kali ukuran font untuk kenyamanan membaca, dan memberikan warna latar belakang abu-abu sangat terang (kode `#f4f4f4`).

***3. Gaya Header:***

Elemen `<header>` diberi gaya agar teksnya berada di tengah. Ia juga diberi ruang di sekeliling kontennya (padding) sebesar 24 piksel. Warna teks di dalam header diatur menjadi putih, dan warna latar belakangnya menggunakan nilai dari variabel `$primary-color` (biru muda).

***4. Gaya Main (Konten Utama):***

Untuk elemen `<main>`, diberikan padding sebesar 24 piksel dan margin atas sebesar 24 piksel untuk memberi jarak dari header. Elemen ini juga diberi bayangan tipis (`box-shadow`) dan warna latar belakang biru sangat gelap (kode `#1f1c3f`).

***5. Gaya Footer:***

Elemen `<footer>` dibuat mirip dengan header. Teksnya ditengahkan, warna teksnya putih, dan warna latar belakangnya menggunakan `$primary-color` (biru muda). Perbedaannya, paddingnya lebih kecil (8 piksel) dan ia juga memiliki margin atas 24 piksel.

***6. Gaya Heading H2:***

Semua elemen `<h2>` akan ditampilkan dengan warna biru cerah (kode `#1aaee9`) dan diberi margin bawah sebesar 8 piksel.

***7. Gaya Navigasi (Nav):***

Elemen `<nav>` diberi margin atas dan bawah sebesar 24 piksel. Di dalamnya, `ul` (daftar tak berurut) diubah tampilannya untuk menjadi menu horizontal: bullet points dihilangkan, margin dan padding bawaan dihapus, `overflow` diatur ke `hidden`, dan latar belakangnya diatur ke `$primary-color`.
Setiap `li` (item daftar) di dalamnya dibuat mengambang ke kiri (`float: left`), sehingga berjajar.
Link (`a`) di dalam `li` diubah menjadi blok, teksnya berwarna putih, ditengahkan, dan diberi padding. Garis bawah link dihilangkan. Ada juga efek khusus: ketika link di-hover (kursor mouse di atasnya) *dan* link tersebut tidak memiliki kelas `.active`, warna latar belakangnya akan berubah menjadi `$secondary-color` (biru tua).

***8. Kelas `.container`:***

Ini adalah kelas pembantu. Jika sebuah elemen diberi kelas `.container`, lebarnya akan menjadi 80% dari elemen induknya, dan ia akan ditempatkan di tengah secara horizontal berkat `margin: auto`.

***9. Kelas `.profile-picture`:***

Elemen dengan kelas ini akan ditampilkan sebagai lingkaran (karena `border-radius: 50%`) dengan ukuran 150x150 piksel. Ia akan ditengahkan secara horizontal dan diberi margin 24 piksel di atas dan bawah. Latar belakangnya menggunakan `$secondary-color` (biru tua).

***10. Kelas `.active`:***

Kelas ini digunakan untuk menandai item navigasi yang sedang aktif. Elemen yang memiliki kelas `.active` akan memiliki warna latar belakang `$secondary-color` (biru tua).

***11. Gaya Tombol (Button):***

Semua elemen `<button>` diberi gaya khusus. Latar belakangnya merah (kode `#cc0000`), teksnya putih, dan tidak ada border. Tombol ini diberi padding, ukuran font sedikit lebih besar dan tebal, serta sudut yang membulat. Kursor akan berubah menjadi ikon tangan saat berada di atas tombol. Tombol ini juga memiliki bayangan dan efek transisi yang halus.
Saat tombol di-hover, warna latar belakangnya menjadi merah yang lebih gelap (kode `#940c0c`) dan bayangannya menjadi lebih jelas, memberikan efek seolah-olah tombol terangkat.

![belajar modifikasi css dengan scss, dan menambah deskripsi di bawah profile, dan favicon dan unduh webstorm sama toolbox di jet brains](/assets/images/ssc.webp)

### penjelasan kode di styles.scss

***1. Penggunaan Modul (@use "main";)***

Baris pertama, @use "main";, adalah fitur modern di SCSS (Dart Sass). Ini memberitahu SCSS untuk mengimpor atau menggunakan semua variabel, mixin, dan fungsi dari file lain yang bernama main.scss (atau _main.scss). Ini adalah cara yang lebih baik untuk mengorganisir kode SCSS ke dalam file-file terpisah (modul) dibandingkan dengan @import yang lebih lama. Dengan kata lain, kode ini mengasumsikan ada file lain bernama main.scss yang mungkin berisi gaya atau variabel tambahan, dan kode ini akan memanfaatkannya.

***2. Definisi Variabel Baru***

Selanjutnya, kode ini mendefinisikan tiga variabel baru:

$bgcolor: Variabel ini menyimpan nilai warna biru gelap keabu-abuan, yang didefinisikan menggunakan fungsi rgb(32, 40, 80).
$textcolor: Variabel ini menyimpan nilai warna putih, didefinisikan sebagai rgb(255, 255, 255).
$fontsize: Variabel ini menyimpan ukuran font dasar, yaitu 25 piksel.

***3. Penerapan Gaya pada Body***
Setelah mendefinisikan variabel, kode ini menerapkan gaya pada elemen body:

Warna latar belakang (background-color) diatur menggunakan nilai dari variabel $bgcolor (biru gelap keabu-abuan).
Warna teks (color) diatur menggunakan nilai dari variabel $textcolor (putih).
Ukuran font dasar (font-size) diatur menggunakan nilai dari variabel $fontsize (25 piksel).

![belajar modifikasi css dengan scss, dan menambah deskripsi di bawah profile, dan favicon dan unduh webstorm sama toolbox di jet brains](/assets/images/sassdanscss.jpg)

### penjelasan kode di navigation.html

Memulai Daftar: Kode diawali dengan tag <ul>. Ini adalah tag HTML standar yang menandakan dimulainya sebuah unordered list (daftar tak berurut), yang biasanya digunakan untuk membuat menu navigasi.

Melakukan Perulangan (Loop): Bagian {% for item in site.data.navigation %} adalah perintah Liquid untuk memulai perulangan. Ia akan memeriksa data navigasi situs Anda. Data ini biasanya disimpan dalam sebuah file (misalnya, navigation.yml atau navigation.json) di dalam folder _data pada proyek Jekyll Anda. Untuk setiap item (misalnya, setiap tautan menu) yang ditemukan dalam data site.data.navigation, kode di dalamnya akan dijalankan sekali.

Membuat Item Daftar: Di dalam perulangan, tag <li> dibuat. Ini adalah tag HTML untuk list item atau satu butir dalam daftar.

Membuat Tautan (Link): Di dalam <li>, sebuah tag <a> (link HTML) dibuat.

href="{{ item.link }}": Atribut href (tujuan link) diisi secara dinamis dengan nilai item.link. Ini berarti, untuk setiap item navigasi, Liquid akan mengambil nilai 'link' (URL tujuan) dari data dan menaruhnya di sini.
{% if page.url == item.link %} class="active" {% endif %}: Ini adalah bagian kondisional. Ia memeriksa apakah URL halaman saat ini (page.url) sama dengan URL link navigasi (item.link). Jika keduanya sama (artinya pengguna sedang melihat halaman yang dituju oleh link ini), maka ia akan menambahkan class="active" ke tag <a>. Kelas 'active' ini biasanya digunakan oleh CSS (seperti contoh SCSS sebelumnya) untuk memberi gaya khusus pada link halaman yang aktif, misalnya dengan warna latar belakang yang berbeda.
{{ item.name }}: Bagian ini akan menampilkan nama atau teks dari link navigasi. Liquid akan mengambil nilai 'name' (misalnya, "Beranda", "Tentang Kami", "Kontak") dari data dan menampilkannya sebagai teks yang bisa diklik oleh pengguna.
Menutup Tag: Setelah link dibuat, tag </a> dan </li> menutup elemen link dan item daftar.

Mengakhiri Perulangan: {% endfor %} menandakan akhir dari blok perulangan.

Menutup Daftar: Terakhir, tag </ul> menutup seluruh daftar tak berurut.

### penjelasan kode di folder.html pada folder _layouts

***1. Di bagian "kepala"***

(yang tidak terlihat langsung oleh pengunjung tapi penting untuk browser dan mesin pencari), cetak biru ini melakukan beberapa hal:

Ia memberi tahu browser bahwa ini adalah halaman HTML modern dan menggunakan set karakter standar (UTF-8) agar semua teks tampil benar.
Ia secara otomatis mengambil judul spesifik dari setiap halaman dan menampilkannya di tab browser. Jadi, halaman "Tentang Kami" akan menampilkan "Tentang Kami" sebagai judulnya, dan seterusnya.
Ia memuat file gaya utama (CSS), yang bertanggung jawab atas seluruh penampilan visual situs – warna, tata letak, font, dan sebagainya. Ia menggunakan alamat dasar situs untuk memastikan file ini selalu ditemukan.
Ia juga memuat ikon kecil (favicon) yang muncul di sebelah judul di tab browser, lagi-lagi menggunakan alamat dasar situs.
Jika ada file JavaScript yang dibutuhkan untuk interaktivitas, ia akan dimuat juga.
Hebatnya, ia secara otomatis menambahkan tautan untuk RSS/Atom feed, memudahkan pengunjung untuk mengikuti pembaruan konten.
Ia juga secara otomatis menambahkan berbagai informasi penting untuk mesin pencari (SEO), seperti deskripsi halaman dan tag untuk media sosial, membantu situs Anda ditemukan dan dibagikan dengan baik.
Kemudian, di bagian "tubuh" (bagian yang dilihat pengunjung):


Seluruh konten dibungkus dalam sebuah wadah utama (container) yang mungkin berfungsi untuk menengahkan atau membatasi lebar tampilan agar rapi.
Ada bagian header di bagian atas. Di sini, ia menampilkan gambar profil, lalu mengambil judul utama situs dan deskripsi singkatnya (yang biasanya Anda atur sekali untuk seluruh situs) dan menampilkannya.
Tepat di bawah header, ada area navigasi (nav). Alih-alih menulis menu di sini, ia "memanggil" atau menyertakan file lain yang khusus berisi kode menu navigasi. Ini membuat menu mudah diubah di satu tempat saja. File navigasi inilah yang akan membuat daftar link, seperti yang kita bahas sebelumnya, dan bahkan menandai link mana yang sedang aktif.
Di bawah navigasi, ada area konten utama (main). Di sinilah keajaibannya terjadi: cetak biru ini menyisipkan konten unik dari halaman mana pun yang sedang dibuka. Jadi, jika Anda membuka halaman "Blog", konten blog akan muncul di sini; jika membuka halaman "Kontak", formulir kontak akan muncul di sini.
Terakhir, ada bagian footer di bagian paling bawah. Ia menampilkan simbol hak cipta, diikuti dengan tahun saat ini (yang diambil secara otomatis, jadi selalu terbaru) dan nama situs Anda, diakhiri dengan pesan hak cipta.






![belajar modifikasi css dengan scss, dan menambah deskripsi di bawah profile, dan favicon dan unduh webstorm sama toolbox di jet brains](/assets/images/copy.jpg)