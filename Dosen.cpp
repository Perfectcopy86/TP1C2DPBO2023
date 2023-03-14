#include "header.hh"

// konstruktor
Dosen::Dosen() : Sivitasakademi()
{
    NIP = "";
    pend = "";
    keahlian = "";
    laptop = "";
}

// Constructor with base human attribute.
Dosen::Dosen(string NIK, string nama, string gender, string asal, string email, string NIP, string pend, string keahlian, list<string> spidol, string laptop) : Sivitasakademi(NIK, nama, gender, asal, email)
{
    this->NIP = NIP;
    this->pend = pend;
    this->keahlian = keahlian;
    this->spidol = spidol;
    this->laptop = laptop;
}

// getter dan setter
void Dosen::setNIP(string NIP)
{
    this->NIP = NIP;
}

void Dosen::setPend(string pend)
{
    this->pend = pend;
}

void Dosen::setKeahlian(string keahlian)
{
    this->keahlian = keahlian;
}

void Dosen::setSpidol(list<string> spidol)
{
    this->spidol = spidol;
}

void Dosen::setLaptop(string laptop)
{
    this->laptop = laptop;
}

string Dosen::getNIP()
{
    return NIP;
}

string Dosen::getPend()
{
    return pend;
}

string Dosen::getKeahlian()
{
    return keahlian;
}

list<string> Dosen::getSpidol()
{
    return spidol;
}

string Dosen::getLaptop()
{
    return laptop;
}

void Dosen::add_asprak(Asprak asprak)
{
    this->asprak.push_back(asprak);
}

list<Asprak> Dosen::getAsprak()
{
    return this->asprak;
}

// destruktor
Dosen::~Dosen()
{
}