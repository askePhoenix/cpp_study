//
// Created by 김주윤 on 2021/11/14.
//

#include "common.h"


void swap(int *x_p, int *y_p) {
    int tmp = *x_p;
    *x_p = *y_p;
    *y_p = tmp;
}
