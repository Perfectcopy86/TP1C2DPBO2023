# TP1C2DPBO2023
Saya Rasyid Andriansyah NIM 2101963 mengerjakan TP 1 mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

Berikut UML kelas diagramnya: 

![UML TP 1](https://user-images.githubusercontent.com/100756215/224951167-b6186041-3e4e-4f4e-8b22-5244c0639ede.png)

Program yang dibuat memiliki 11 kelas yaitu:
1.	Human
2.	Sivitasakademi
3.	Mahasiswa
4.	Dosen
5.	Course
6.	Prodi
7.	Asprak
8.	BEM
9.	AnggotaBEM
10.	EC
11.	AnggotaEC
Penjelasan relasi: 
Human merupakan parent utama, memiliki child Sivitasakademi karena Sivitasakademi adalah Human, Human memiliki beberapa method seperti eat, drink, sleep. Sivitasakademi memiliki dua buah child yaitu Mahasiswa dan Dosen karena keduanya merupakan Sivitasakademi, selanjutnya untuk composite ada Course dimana Course mempunyai(has a) Mahasiswa dan Dosen. Mahasiswa memiliki mata kuliah/Course yang diikuti serta Dosen memiliki mata kuliah/Course yang diajar. Terakhir ada Prodi has a Dosen, Mahasiswa, dan Course karena dalam Prodi minimal mempunyai unsur-unsur tersebut agar bisa dikatakan sebagai sebuah Prodi.
Lalu Dosen has a Asprak untuk membantu jalannya praktikum. Asprak ini merupakan anak dari Mahasiswa, karena Asprak adalah Mahasiswa juga. Di dalam Asprak terdapat  method memberi nilai kepada mahasiswa. Selanjutnya ada BEM dimana BEM mempunyai AnggotaBEM dan AnggotaBEM adalah turunan dari Mahasiswa. Di AnggotaBEM terdapat method hadirievaluasi.
Terakhir ada kelas EC, dimana EC mempunyai AnggotaEC, AnggotaEC juga mempunyai method yang mirip sepeti AnggotaBEM yaitu hadirievaluasi





Alur Program:
1.	Muncul tampilan untuk mengisi nilai dari masing masing mahasiswa, terdapat juga ketentuan harus input nilai asprak dahulu baru input nilai dosen
2.	Lalu muncul tampilan menu
3.	Menu 1 untuk menampilkan seluruh data
4.	Menu 2 untuk memilih karakter yang diminta melakukan aksi seperti makan, minum, tidur, mengajar, hadir evaluasi
5.	Menu 3 Untuk keluar dari program

Dokumentasi:
![1](https://user-images.githubusercontent.com/100756215/224951287-c797cb47-00fd-4778-99c8-1867f23c6b9c.png)
![2](https://user-images.githubusercontent.com/100756215/224951290-8210ef63-d5d1-496c-9ac6-fb87a88d9cf5.png)
![3](https://user-images.githubusercontent.com/100756215/224951294-b126cb36-e1e8-4009-adc2-f1951edf8938.png)
![4](https://user-images.githubusercontent.com/100756215/224951298-7fee71da-b2b7-4e4e-b076-51ae134ded29.png)
![5](https://user-images.githubusercontent.com/100756215/224951301-b77a1f92-2f60-40ac-a26e-8a6a95c7bb84.png)
![6](https://user-images.githubusercontent.com/100756215/224951304-8b8f5093-32d6-4aee-a55a-7e88995f2427.png)
![7](https://user-images.githubusercontent.com/100756215/224951310-281af321-4286-47ab-b95c-3134df5e1bf2.png)
![8](https://user-images.githubusercontent.com/100756215/224951315-c6fadbd5-6f42-4f74-babf-bae89203fb35.png)
