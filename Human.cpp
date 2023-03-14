#include "header.hh"

// konstruktor
Human::Human()
{
    NIK = "";
    nama = "";
    gender = "";
}

// konstruktor
Human::Human(string NIK, string nama, string gender)
{
    this->NIK = NIK;
    this->nama = nama;
    this->gender = gender;
}

// getter dan setter
void Human::setNIK(string NIK)
{
    this->NIK = NIK;
}

void Human::setNama(string nama)
{
    this->nama = nama;
}

void Human::setGender(string gender)
{
    this->gender = gender;
}

void Human::eat()
{
    cout << getNama() << " lagi makan" << endl;
}

void Human::drink()
{
    cout << getNama() << " lagi minum" << endl;
}

void Human::sleep()
{
    cout << getNama() << " lagi tidur" << endl;
}

string Human::getNIK()
{
    return NIK;
}

string Human::getNama()
{
    return nama;
}

string Human::getGender()
{
    return gender;
}

// destruktor
Human::~Human()
{
}