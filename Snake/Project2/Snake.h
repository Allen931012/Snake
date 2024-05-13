#ifndef SNAKE_H
#define SNAKE_H

class Snake {
public:
    Snake();
    void Draw();
    void Input();
    void Logic();
    void Run();

private:


    int x, y, fruitX, fruitY;
    int tailX[400], tailY[400];
    int width, height, score, speed, tail_length;
    bool gameOver;
    enum direction { STOP = 0, LEFT, RIGHT, UP, DOWN };
    direction dir;
};

#endif

