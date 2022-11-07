
#include <iostream>
#include <Windows.h>
#include <string>


class Counter
{

private:

	int a;

public:
	Counter(std::string q) {

		if (q == "да") {
			std::cout << "Введите начальное значение: ";
			std::cin >> a;
		}
		else { a = 1; }
	}

	void add() { a++; }

	void  subtract() { a--; }

	void equal() { std::cout << a << std::endl; }

	void set() { std::cin >> a; }


};




int main()
	
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string q;

	std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
	std::cin >> q;

	Counter count(q);

	char znak;

	bool play = true;

	while (play)
	{
		std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
		std::cin >> znak;

		switch (znak)
		{
		case '+':
			count.add();
			break;
		case '-':
			count.subtract();
			break;
		case '=':
			count.equal();
			break;
		case 'x':
			play = false;
			break;

		default:
			break;
		}
	}

	std::cout << "До свидания!";

}


