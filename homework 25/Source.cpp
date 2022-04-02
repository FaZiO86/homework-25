#include <iostream>
#include <string>

using namespace std;

struct movies {
	string title;
	int year;
	string genre;
	int duration;
	int price;
};

void showMovie(movies& M);

int expensive(movies& M1, movies& M2, movies& M3);

void updateInfo(movies& m);




int main() {
	setlocale(LC_ALL, "Russian");
	
	movies starshipTropers = { "������� ������", 1997, "������, ����������", 144, 350 };
	movies spawn = { "�����", 1997, "������, ������, �����", 89, 300 };
	movies scream = { "����", 2022, "�������, ��������, �����", 114, 999 };
	
			//������ 1
	cout << "������ 1" << endl;
	cout << "������ �����:" << endl;
	showMovie(starshipTropers);
	cout << "\n������ �����:" << endl;
	showMovie(spawn);
	cout << "\n������ �����:" << endl;
	showMovie(scream);
	cout << endl;

			//������ 2
	cout << "������ 2" << endl;
	cout << "����� ������� �����: " << expensive(starshipTropers, spawn, scream) << " ������" << endl << endl;
	
			//������ 3
	cout << "������ 3" << endl;
	updateInfo(spawn);
	cout << endl;
	showMovie(spawn);


	return 0;
}

void updateInfo(movies& m) {
	cout << "�������� ���������� �����: " << endl;
	cout << "1. ��������: " << endl;
	cout << "2. ��� ������: " << endl;
	cout << "3. ����: " << endl;
	cout << "4. �����������������: " << endl;
	cout << "5. ���� �� ����: " << endl;
	
	int x;
	cin >> x;
	cin.ignore();
	switch (x)
	{
	case 1: {cout << "������� ����� ��������: "; getline(cin, m.title); } break;
	case 2: {cout << "������� ����� ��� ������: "; cin >> m.year; } break;
	case 3: {cout << "������� ����� ����: "; getline(cin, m.genre); } break;
	case 4: {cout << "������� ����� ����������������� ������: "; cin >> m.duration; } break;
	case 5: {cout << "������� ����� ���� �� ����: "; cin >> m.price; } break;
	}
}

int expensive(movies& M1, movies& M2, movies& M3) {
	if (M1.price > M2.price && M1.price > M3.price)
		return M1.price;
	if (M2.price > M1.price && M2.price > M3.price)
		return M2.price;
	if (M3.price > M1.price && M3.price > M2.price)
		return M3.price;
}

void showMovie(movies& M) {
	cout << "�������� ������ - " << M.title << endl;
	cout << "��� ������ ������ - " << M.year << " ���" << endl;
	cout << "���� ������ - " << M.genre << endl;
	cout << "����������������� ������ - " << M.duration << " �����" << endl;
	cout << "���� �� ���� - " << M.price << " ������" << endl;
}