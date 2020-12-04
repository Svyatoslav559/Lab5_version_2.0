#include <iostream>
using namespace std;
class Pupil {
	string name;
	string telephoneNumber;
	int age;
	double avBall;
public:
	void SetAge(int age);
	void SetName(string name);
	void SetAvBall(double avBall);
	void SetNumber(string number);
	double getAvBall();
	int getAge();
	string getNumber();
	string getName();
	Pupil();
	Pupil(int age, string name, double avBall, string number);
	friend ostream& operator<<(ostream& mystream, const Pupil& ob);
	friend istream& operator>>(istream& mystream, Pupil &ob);
};
class SchoolMan :public Pupil {
	string classTeacher;
	int classNumber;
	char classLetter;
public:
	SchoolMan() :Pupil(14, "Ivan Ivanov", 7.0, "5648947") {
		classTeacher = "Ivanova";
		classNumber = 9;
		classLetter = 'A';
	};
	SchoolMan(int age, string name, double ball,string number,string teacher,int class№, char letter) :Pupil(age, name, ball, number) {
		classTeacher = teacher;
		classNumber = class№;
		classLetter = letter;
	};
	void SetTeacher(string teacher);
	string GetTeacher();
	void SetClassNumber(int class№);
	int GetClassNumber();
	void SetLetter(char letter);
	char GetLetter();
};
class Student :public Pupil {
	int fellowship;
	int passesNumber;
public:
	Student() :Pupil(14, "Ivan Ivanov", 7.0, "5648947") {
		fellowship = 100;
		passesNumber = 3;
	};
	Student(int age, string name, double ball, string number,int fellowship,int passesNumber) :Pupil(age, name, ball, number) {
		this->fellowship = fellowship;
		this->passesNumber = passesNumber;
	};
	void SetFellowship(int a);
	int GetFellowship();
	void SetPassesNumber(int a);
	int GetPassesNumber();
};
