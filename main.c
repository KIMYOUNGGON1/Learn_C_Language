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

    // 미션맨!

    // 첫 번째 미션 : 아파트의 각 집에 방문하여 문에 적힌 암호 확인
    int * missionMan; //포인터 변수
    missionMan = &cs;
    printf("미션맨이 방문하는 곳 주소 : %d, 암호 : %d\n", missionMan, *missionMan);

    missionMan = &yh;
    printf("미션맨이 방문하는 곳 주소 : %d, 암호 : %d\n", missionMan, *missionMan);

    missionMan = &ms;
    printf("미션맨이 방문하는 곳 주소 : %d, 암호 : %d\n", missionMan, *missionMan);


    // 두 번째 미션 : 각 암호에 3을 곱해라
    missionMan = &cs;
    *missionMan = *missionMan * 3;
    printf("미션맨이 방문하는 곳 주소 : %d, 암호 : %d\n", missionMan, *missionMan);

    missionMan = &yh;
    *missionMan = *missionMan * 3;
    printf("미션맨이 방문하는 곳 주소 : %d, 암호 : %d\n", missionMan, *missionMan);

    missionMan = &ms;
    *missionMan = *missionMan * 3;
    printf("미션맨이 방문하는 곳 주소 : %d, 암호 : %d\n", missionMan, *missionMan);

    return 0;
}