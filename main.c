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


    printf("===============================================\n\n");

    // 미션맨!

    // 첫 번째 미션 : 아파트의 각 집에 방문하여 문에 적힌 암호 확인
    int * missionMan; //포인터 변수
    missionMan = &cs;
    printf("미션맨이 방문하는 곳 주소 : %d, 암호 : %d\n", missionMan, *missionMan);

    missionMan = &yh;
    printf("미션맨이 방문하는 곳 주소 : %d, 암호 : %d\n", missionMan, *missionMan);

    missionMan = &ms;
    printf("미션맨이 방문하는 곳 주소 : %d, 암호 : %d\n", missionMan, *missionMan);

    printf("=======================MissionMan's First Mission End========================\n\n");

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

    printf("=======================MissionMan's Second Mission End========================\n\n");

    // 스파이
    // 미션맨이 바꾼 암호에서 2를 빼라 !

//    스파이 (2522124)
//            =>> 누군가의 아파트 주소
//    미션맨 (2522124)

    int * spy = missionMan;
    printf("\n... 스파이가 미션 수행하는 중 ... \n\n");
    spy = &cs;
    *spy = *spy - 2; // cs = cs -2;
    printf("스파이가 방문하는 곳 주소 : %d, 암호 : %d\n", spy, *spy);

    spy = &yh;
    *spy = *spy - 2; // cs = cs -2;
    printf("스파이가 방문하는 곳 주소 : %d, 암호 : %d\n", spy, *spy);

    spy = &ms;
    *spy = *spy - 2; // cs = cs -2;
    printf("스파이가 방문하는 곳 주소 : %d, 암호 : %d\n", spy, *spy);

    printf("=======================Spy's First Mission End========================\n\n");

    printf("\n... 철수, 영희, 민수는 집에 오고서는 바뀐 암호를 보고 깜놀 ...\n\n");

    printf("철수네 주소 : %d, 암호 : %d\n", &cs, cs);
    printf("영희네 주소 : %d, 암호 : %d\n", &yh, yh);
    printf("민수네 주소 : %d, 암호 : %d\n", &ms, ms);

    //참고로... 미션맨이 사는 곳의 주소는... &missionMan 으로 확인
    printf("미션맨의 주소 : %d\n", &missionMan);
    printf("스파이 주소 : %d\n", &spy);


    return 0;
}