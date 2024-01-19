#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int* solution(int num_list[], size_t num_list_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * 2);
    int even = 0, odd = 0;
    int i;
    for(i = 0; i<num_list_len; i++){
        if(num_list[i] % 2 == 0) even++;
        else if(num_list[i] % 2 != 0) odd++;
    }
    answer[0] = even;
    answer[1] = odd;
    
    return answer;
}