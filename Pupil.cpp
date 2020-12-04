#include "Pupil.h";
#include <iostream>;
using namespace std;
istream& operator>>(istream& mystream, Pupil& ob) {
	cout << "Enter age : \n";
	int ag;
	mystream >> ag;
	ob.SetAge(ag);
	cout << "Enter name: \n";
	string name;
	mystream >> name;
	ob.SetName(name);
	cout << "Enter telephone number: \n";
	string n;
	mystream >> n;
	ob.SetNumber(n);
	cout << "Enter average ball: \n";
	double a;
	mystream >> a;
	ob.SetAvBall(a);
	return mystream;
}
ostream& operator<<(ostream& mystream, const Pupil& ob) {
	mystream << "Age is: "; mystream << ob.age; mystream << endl;
	mystream << "Name is: "; mystream << ob.name; mystream << endl;
	mystream << "Average ball is: "; mystream << ob.avBall; mystream << endl;
	mystream << "Telephone number is: "; mystream << ob.telephoneNumber; mystream << endl;
	return mystream;
}
int Pupil::getAge() {
	return age;
}
double Pupil::getAvBall() {
	return avBall;
}
string Pupil::getName() {
	return name;
}
string Pupil::getNumber() {
	return telephoneNumber;
}
Pupil::Pupil() {
	name = "Ivan";
	age = 18;
	avBall = 6.5;
	telephoneNumber = "111111";
}
Pupil::Pupil(int age, string name, double avBall, string number) {
	this->name = name;
	this->age = age;
	this->avBall = avBall;
	this->telephoneNumber = number;
}
void Pupil::SetAge(int age) {
	this->age = age;
}
void Pupil::SetAvBall(double avBall) {
	this->avBall = avBall;
}
void Pupil::SetName(string name) {
	this->name = name;
}
void Pupil::SetNumber(string number) {
	this->telephoneNumber = number;
}
void SchoolMan::SetTeacher(string teacher) {
	this->classTeacher = teacher;
}
void SchoolMan::SetClassNumber(int class№) {
	this->classTeacher = class№;
}
void SchoolMan::SetLetter(char letter) {
	this->classLetter = letter;
}
char SchoolMan::GetLetter() {
	return classLetter;
}
int SchoolMan::GetClassNumber() {
	return classNumber;
}
string SchoolMan::GetTeacher() {
	return classTeacher;
}
int Student::GetPassesNumber() {
	return passesNumber;
}
void Student::SetPassesNumber(int a) {
	this->passesNumber = a;
}
void Student::SetFellowship(int a) {
	this->fellowship = a;
}
int Student::GetFellowship() {
	return fellowship;
}
