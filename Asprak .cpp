#include "header.hh"

// konstruktor
Asprak::Asprak() : Mahasiswa()
{
    matkulprak = "";
}

// Constructor with base human attribute.
Asprak::Asprak(string NIK, string NIM, string nama, string gender, string asal, string email, string fakultas, list<string> buku, string laptop, string matkulprak) : Mahasiswa(NIK, NIM, nama, gender, asal, email, fakultas, buku, laptop)
{
    this->matkulprak = matkulprak;
}

// getter dan setter
void Asprak::setMatkulprak(string matkulprak)
{
    this->matkulprak = matkulprak;
}

string Asprak::getMatkulprak()
{
    return matkulprak;
}

void Asprak::mengajar()
{
    cout << getNama() << " sedang mengajar DPBO" << endl;
}

void Asprak::setNilaiMahasiswa(Mahasiswa mhs, string nilai)
{
    mhs.setNilaiasprak(nilai);
}

// destruktor
Asprak::~Asprak()
{
}