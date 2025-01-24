// Вариант № 10
// - ввести целое число A
// - ввести целое число B
// - ввести целое число C
// - найти остаток от деления суммы целых чисел А и В на число С
// - найти целую часть от деления суммы целых чисел А и В на число С

#include <iostream>
#include <map>
#include <functional>

int A, B, C;

std::function<void()> EnterNumber(int& varLink, std::string label) {
    return [&varLink, label]() {
        // разарбатывает Зинкин, но позже
    };
}

void Remainder() {
    // разарбатывает Зинкин, но позже
}

void Division() {
    // разарбатывает Зинкин, но позже
}

int main() {
    struct MenuItem {
        std::string title;
        std::function<void()> action;
    };

    std::map<int, MenuItem> menu = {
        {1, {"Ввод целого числа A", EnterNumber(A, "A")}},
        {2, {"Ввод целого числа B", EnterNumber(B, "B")}},
        {3, {"Ввод целого числа C", EnterNumber(C, "C")}},
        {4, {"(A + B) mod C", Remainder}},
        {5, {"⎣(A + B) / C⎦", Division}},
    };

    int choice = 0;

    while (true) {
        std::cout << "Меню:" << std::endl;

        for (const auto& item : menu) {
            std::cout << "Task " << item.first << ". " << item.second.title << std::endl;
        }

        std::cout << "0. Выход" << std::endl;
        std::cout << "Введите номер пункта: ";
        std::cin >> choice;

        if (choice == 0) {
            std::cout << "© 2025 Artem Zinkin" << std::endl;
            break;
        }

        std::cout << std::endl;

        if (menu.find(choice) != menu.end()) {
            menu[choice].action();
        } else {
            std::cout << "Некорректный ввод.";
        }

        std::cout << std::endl << std::endl;
    }

    return 0;
}
