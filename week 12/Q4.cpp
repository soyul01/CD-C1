#include <stdio.h>
#include <windows.h>
#include <conio.h> // _kbhit(), _getch()

void GotoXY(int x, int y);

int main() {
    int x = 1, y = 5;
    char ch = '^';
    int maxX = 40;

    while(1) {
        GotoXY(x, y);
        printf("%c", ch);

        Sleep(100);

        GotoXY(x, y);
        printf(" "); // 이전 위치 지우기

        if (_kbhit()) { // 키 입력 체크
            char key = _getch();
            if (key == 'a' && x > 1) x--; // 왼쪽 이동
            if (key == 'd' && x < maxX) x++; // 오른쪽 이동
            if (key == 'q') break; // 종료
        }
    }

    return 0;
}

void GotoXY(int x, int y) {
    COORD Pos = {x-1, y-1};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

