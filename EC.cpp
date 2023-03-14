#include "header.hh"

// inisialisasi constructor
EC::EC()
{
    divisi = "";
    kode = "";
}

// inisialisasi constructor dengan parameter
EC::EC(string divisi, string kode, list<string> proker)
{
    this->divisi = divisi;
    this->kode = kode;
    this->proker = proker;
}

// inisialisasi method setter dan getter
void EC::setDivisi(string divisi)
{
    this->divisi = divisi;
}

void EC::setKode(string kode)
{
    this->kode = kode;
}

void EC::setProker(string proker)
{
    this->proker.push_back(proker);
}

void EC::add_anggotaec(AnggotaEC anggotaec)
{
    this->anggotaec.push_back(anggotaec);
}

string EC::getDivisi()
{
    return this->divisi;
}

string EC::getKode()
{
    return this->kode;
}

list<string> EC::getProker()
{
    return this->proker;
}

list<AnggotaEC> EC::getAnggotaec()
{
    return this->anggotaec;
}

// inisialisasi destructor
EC::~EC()
{
}