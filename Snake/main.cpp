#include "Snake.h"
#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    cout << "遊戲規則:" << endl;
    cout << "1.按下'A'鍵向左移動，按下'D'鍵向右移動，按下'W'鍵向上移動，按下'S'鍵向下移動，按下'F'鍵直接結束" << endl;
    cout << "2.控制貪食蛇移動，讓它吃到水果，吃到一次得五分" << endl;
    cout << "3.撞到自己的身體或遊戲邊界就結束" << endl;
    cout << "按下任意鍵開始遊戲..." << endl;
    _getch();
    system("cls");
    Snake snake;
    snake.Run();
    return 0;
}
