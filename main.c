#include <stdio.h>
#include <time.h>
#include <stdlib.h>



int main() {

    // 포인터

    // [철수] : 101호 -> 메모리 공간의 주소
    // [영희] : 102호
    // [민수] : 103호
    // 각 문 앞에 '암호' 가 걸려 있음

    int cs = 1; // 암호
    int yh = 2;
    int ms = 3;

    printf("철수네 주소 : %d, 암호 : %d\n", &cs, cs);
    printf("영희네 주소 : %d, 암호 : %d\n", &yh, yh);
    printf("민수네 주소 : %d, 암호 : %d\n", &ms, ms);

    return 0;
}