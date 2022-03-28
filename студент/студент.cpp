//Реалізуйте клас «Студент». Необхідно зберігати в змінних-членах класу: ПІБ, дату народження, контактний телефон, місто, країну, назву навчального закладу, місто та 
//країну(де знаходиться навчальний заклад), номер групи.Реалізуйте функції - члени класу для введення даних, виведення даних.
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
class Student
{
public:
	string name;
	string birthday;
	string nomerPhone;//стрінг щоб можна юуло вказати +38 
	string city;
	string country;
	string nameSchool;
	string cityAndCountryOfSchool;
	string nomergrupe;//використав тип стріг тому ,що номер групи може включати букви

	void input() {
		cout << "Введіть ПІБ студента :" << endl;
		getline(cin, name); cout << endl;
		cout << "Введіть дату народженя студента :" << endl;
		cin >> birthday; cin.ignore(100, '\n');//ігноруєм розрив рядка інакше наступна фраза не введеться а перекина далі
		cout << endl;
		cout << "Введіть номер телефона студента : " << endl;
		cin >> nomerPhone; cin.ignore(100, '\n');//ігноруєм розрив рядка 
		cout << endl;
		cout << "Введіть місто проживання студента :" << endl;
		getline(cin, city); cout << endl;
		cout << "Введіть країну проживання студента :" << endl;
		getline(cin, country); cout << endl;
		cout << "Введіть назву навчального закладу студента :" << endl;
		getline(cin, nameSchool); cout << endl;
		cout << "Введіть місто та країну розміщення навчального закладу студента :" << endl;
		getline(cin, cityAndCountryOfSchool); cout << endl;
		cout << "Введіть номер групи студента" << endl << endl;
		cin >> nomergrupe; cin.ignore(100, '\n');//ігноруєм розрив рядка 
		cout << endl;
	}
	void output() {
		cout << "ПІБ:" << name << endl;
		cout << "Дата народження:" << birthday << endl;
		cout <<"Номер телефону:" << nomerPhone << endl;
		cout << "Місто проживання :" << city << endl;
		cout << "Країна проживання:" << country << endl;
		cout << "Назва навчального закладу:" << nameSchool << endl;
		cout << "Розташування навчального закладу:" << cityAndCountryOfSchool << endl;
		cout << "Номер групи студента:" << nomergrupe << endl;
	}
};
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Введіть данні першого студента" << endl;
	Student first;
	first.input();
	cout << "Введіть данні другого студента " << endl;
	Student second;
	second.input();
	cout << "Введіть данні третього студента " << endl;
	Student third;
	third.input();
	int a = 0;
	char c = 0;
	cout << "Якщо бажаєте дізнатися дані якогось зі студентів виберіть наступну дію:" << endl;
	cout << "1 : Данні першого студента " << endl;
	cout << "2 : Данні другого студента" << endl;
	cout << "3 : Данні третього студента" << endl;
	cin >> a;

	switch (a)
	{
	case 1:
		first.output();
		break;
	case 2:
		second.output();
		break;
	case 3:
		third.output();
		break;
	}



}

