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
	
	movies starshipTropers = { "Звёздный десант", 1997, "боевик, фантастика", 144, 350 };
	movies spawn = { "Спаун", 1997, "боевик, драмма, ужасы", 89, 300 };
	movies scream = { "Крик", 2022, "триллер, детектив, ужасы", 114, 999 };
	
			//Задача 1
	cout << "Задача 1" << endl;
	cout << "Первый фильм:" << endl;
	showMovie(starshipTropers);
	cout << "\nВторой фильм:" << endl;
	showMovie(spawn);
	cout << "\nТретий фильм:" << endl;
	showMovie(scream);
	cout << endl;

			//Задача 2
	cout << "Задача 2" << endl;
	cout << "Самый дорогой фильм: " << expensive(starshipTropers, spawn, scream) << " рублей" << endl << endl;
	
			//Задача 3
	cout << "Задача 3" << endl;
	updateInfo(spawn);
	cout << endl;
	showMovie(spawn);


	return 0;
}

void updateInfo(movies& m) {
	cout << "Выберите изменяемый пункт: " << endl;
	cout << "1. Название: " << endl;
	cout << "2. Год выхода: " << endl;
	cout << "3. Жанр: " << endl;
	cout << "4. Продолжительность: " << endl;
	cout << "5. Цена за диск: " << endl;
	
	int x;
	cin >> x;
	cin.ignore();
	switch (x)
	{
	case 1: {cout << "Введите новое название: "; getline(cin, m.title); } break;
	case 2: {cout << "Введите новый год выхода: "; cin >> m.year; } break;
	case 3: {cout << "Введите новый жанр: "; getline(cin, m.genre); } break;
	case 4: {cout << "Введите новую продолжительность фильма: "; cin >> m.duration; } break;
	case 5: {cout << "Введите новую цену за диск: "; cin >> m.price; } break;
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
	cout << "Название фильма - " << M.title << endl;
	cout << "Год выхода фильма - " << M.year << " год" << endl;
	cout << "Жанр фильма - " << M.genre << endl;
	cout << "Продолжительность фильма - " << M.duration << " минут" << endl;
	cout << "Цена за диск - " << M.price << " рублей" << endl;
}