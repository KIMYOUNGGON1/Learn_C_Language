#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//선언
void p(int num);
void function_without_return();
int function_with_return();

int main() {

    /*
    printf("Hello World\n");
    printf("Hello World\n");
    printf("Hello World\n");
    printf("Hello World\n");
    printf("Hello World\n");
    printf("Hello World\n");
    printf("Hello World\n");
    printf("Hello World\n");
    printf("Hello World\n");
    printf("Hello World\n");
    printf("Hello World\n"); */

    // ++뿔뿔
    /*int a = 10;
    printf("a 는 %d\n", a);
    a++;
    printf("a 는 %d\n", a);
    a++;
    printf("a 는 %d\n", a);*/

    /*
    int b = 20;
    //b = b + 1;
    printf("b 는 %d\n", ++b);
    printf("b 는 %d\n", b++);
    printf("b 는 %d\n", b);
    */

    /*
    int i = 1;
    printf("Hello World %d\n", i++);
    printf("Hello World %d\n", i++);
    printf("Hello World %d\n", i++);
    printf("Hello World %d\n", i++);
    printf("Hello World %d\n", i++);
    printf("Hello World %d\n", i++);
    printf("Hello World %d\n", i++);
    printf("Hello World %d\n", i++);
    printf("Hello World %d\n", i++);
    printf("Hello World %d\n", i++); */

    //반복문
    //for, while, do while

    //for (선언: 조건: 증감)
    /*
    for (int i = 1; i <= 10; ++i) {
        printf("Hello World %d\n", i);
    }
    */

    //while (조건) (  )
    /*
    int i = 1;

    while (i <= 10) {
        printf("Hello World %d\n", i++);
//        i++;
    }*/

    // do { } while (조건);
    /*
    int i = 1;
    do {
        printf("Hello Wolrd %d\n", i++);
    } while(i <= 10);
    */

    //2중 반복문
    /*
    for (int i = 1; i <= 3; ++i) {
        printf("첫 번째 반복문 : %d\n", i);

        for (int j = 1; j <= 5; ++j) {
            printf("      두 번째 반복문 : %d\n", j);
        }
    }
     */

    //구구단
//    2 x 1 = 2
//    2 x 2 = 4
//    2 x 3 = 6
//    2 x 4 = 8
//    2 x 5 = 10...
//    ...
//    9 X 9 = 81
/*
    for (int i = 2; i <= 9 ; ++i) {
        printf("%d단 계산\n", i);
        for (int j = 1; j <= 9; ++j) {
            printf(" %d x %d = %d\n", i, j, i*j);
        }
    }
    */

    /* for (int i = 0; i < 5; ++i) {
        for (int j = 0; j <= i; ++j) {
            printf("*");
        }
        printf("\n");
    }*/

    /*
    for (int i = 0; i < 5; i++) {
        for (int j = i; j < 5 - 1 ; j++) {
            printf(" ");
        }
        for (int k = 0; k <= i; k++) {
            printf("*");
        }
        printf("\n");
    }*/

    //피라미드를 쌓아라 - 프로젝트

    /*
    int floor;
    printf("몇 층으로 쌓겠느냐?");
    scanf("%d", &floor);

    for (int i = 0; i < floor; i++) {
        for (int j = i; j < floor - 1; j++) {
            printf(" ");
        }
        for (int k = 0; k < i * 2 + 1; k++) {
            printf("*");
        }
        printf("\n");
    }
     */

    // 버스를 탄다고 가정. 학생 / 일반인으로 구분 (일반인 : 20세)
    /* int age = 15;
    // if (조건) {...} else {....}
    if (age >= 20) {
        printf("일반인 입니다.\n");
    } else {
        printf("학생입니다.\n");
    }*/

//    초등학생(8-13) / 중학생 (14-16) / 고등학생(17-19)으로 나누면?
//    if / else if / else
/*
    int age = 25;
    if (age >= 8 && age <= 13) {
        printf("초등학생입니다.\n");
    } else if (age >= 14 && age <= 16) {
        printf("중학생입니다.\n");
    } else if (age >= 17 && age <= 19) {
        printf("고등학생입니다.\n");
    } else {
        printf("학생이 아닌가봐요.");
    }
    */

    //break / continue
    //1번부터 30번까지 있는 반에서 1번에서 5번까지 조별 발표를 합니다.
    /*for (int i = 0; i <= 30; ++i) {
        if (i >= 6) {
            printf("나머지 학생은 집에 가세요.\n");
            break;
        }
        printf("%d 번 학생은 조별 발표 준비를 하세요\n", i);
    }*/

    //1번부터 30번까지 있는 반에서 7번 학생은 아파서 결석
    //7번을 제외하고 6번부터 10번까지 조별 발표를 하세요.
    /*
    for (int i = 0; i <= 30; ++i) {
        if (i >= 6 && i <= 10) {
            if (i == 7) {
                printf("%d 번 학생은 결석입니다.\n", i);
                continue;
            }
            printf("%d 번 학생은 조별 발표 준비를 하세요.\n", i);
        }
    }
     */

    // && ||
    /*
    int a = 10;
    int b = 11;
    int c = 12;
    int d = 12;
    if (a == b || c == d) {
        printf("a와 b, 혹은 c 와 d 의 값이 같습니다.\n");
    } else {
        printf("값이 서로 다르네요.\n");
    }
     */

    // 가위 0 바위 1 보 2
    /*
    srand(time(NULL));
    int i = rand() % 3; // 0 - 2 반환
    if (i == 0) {
        printf("가위\n");
    } else if (i == 1) {
        printf("바위\n");
    } else if (i == 2) {
        printf("보\n");
    } else {
        printf("몰라요\n");
    } */

    /*
    srand(time(NULL));
    int i = rand() % 3; // 0 - 2 반환
    switch (i) {
        case 0:
            printf("가위\n");
            break;
        case 1:
            printf("바위\n");
            break;
        case 2:
            printf("보\n");
            break;
        default :
            printf("몰라요\n");
            break;
    }
     */

    /*
    int age = 17;
    switch (age) {
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
            printf("초등학생입니다.\n");
            break;
        case 14:
        case 15:
        case 16:
            printf("중학생입니다.\n");
            break;
        case 17:
        case 18:
        case 19:
            printf("고등학생입니다.\n");
            break;
        default:
            printf("학생이 아닌가봐요.\n");
            break;
    }
     */

    //Up and Down
    /*
    srand(time(NULL));
    int num = rand() % 100 + 1; // 1 - 100 사이의 숫자
    printf("숫자 : %d\n", num);
    int answer = 0; //정답
    int chance = 5; //기회
    while (1) { // 1:참, 0: 거짓
        printf("남은 기회 %d 번\n", chance--);
        printf("숫자를 맞혀보세요. (1-100)");
        scanf("%d", &answer);

        if (answer > num) {
            printf("DOWN ↓\n\n");
        } else if (answer < num) {
            printf("UP ↑\n\n");
        } else if (answer == num) {
            printf("정답입니다! \n\n");
            break;
        } else {
            printf("알 수 없는 오류가 발생했어요.\n\n");
        }
        if (chance == 0) {
            printf("모든 기회를 다 사용하셨네요. 아쉽게 실패했습니다.\n");
            break;
        }
    }
     */

    //function
    //계산기
//    int num = 2;
////    printf("num 은 %d 입니다\n", num); // 2
//    p(num);
//
//    // 2 + 3 은?
//    num = num + 3; // num += 3;
////    printf("num 은 %d 입니다.\n", num); //5
//    p(num);
//
//    // 5 - 1 은?
//    num -= 1; //num = num - 1;
////    printf("num 은 %d 입니다\n", num); //4
//    p(num);
//
//    // 4 x 3은?
//    num *= 3;
////    printf("num 은 %d 입니다.\n", num); //12
//    p(num);
//
//    //12 / 6은?
//    num /= 6;
////    printf("num 은 %d 입니다\n", num); //2
//    p(num);

    //함수 종류
    //반환값이 없는 함수
    function_without_return();

    //반환값이 있는 함수
    int ret = function_with_return();
    p(ret);

    return 0;
}

//정의
void p(int num) {
    printf("num 은 %d 입니다\n", num);
}

// 전달값 : 36
// 함수 : ㅁ + 4
// 반환형 : ?
//int 함수이름 (int num) {
//    return num + 4;
//}

void function_without_return() {
    printf("반환값이 없는 함수입니다.\n");
}

int function_with_return() {
    printf("반환값이 있는 함수입니다.\n");
    return 10;
}

