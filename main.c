﻿#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

//    //배열
//    int subway_1 = 30; // 지하철 1호차에 30명이 타고 있다
//    int subway_2 = 40;
//    int subway_3 = 50;
//
//    printf("지하철 1호차에 %d 명이 타고 있습니다.\n", subway_1);
//    printf("지하철 2호차에 %d 명이 타고 있습니다.\n", subway_2);
//    printf("지하철 3호차에 %d 명이 타고 있습니다.\n", subway_3);

    // 여러 개의 벼수를 함께, 동시에 생성
    int subway_array[3];
    subway_array[0] = 30;
    subway_array[1] = 40;
    subway_array[2] = 50;

    for (int i = 0; i < 3; i++) {
        printf("지하철 %d 호차에 %d 명이 타고 있습니다.\n", i + 1, subway_array[i]);
    }
    
    return 0;
}