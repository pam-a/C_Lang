//
//  7.celsius.c
//  
//
//  Created by minwoo choi on 2015. 1. 1..
//
//

#include <stdio.h>
int main(){
    double celsius;
    
    printf("섭씨 온도를 화씨 온도로 바꿔주는 프로그램 입니다. \n");
    printf("섭씨 온도를 입력해 주세요");
    printf("섭씨 온도를 입력해 주세요");
    scanf("$lf", &celsius);
    
    printf("섭씨 %f 도는 화씨 %f 입니다.\n", celsius, 9*celsius / 5 + 32);
    
    return 0;
}