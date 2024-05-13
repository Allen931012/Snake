#include "Snake.h"
#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    cout << "按下任意鍵開始遊戲" << endl;
    _getch();
    system("cls");
    Snake snake;
    snake.Run();
    return 0;
}
