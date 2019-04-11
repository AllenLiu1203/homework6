//
//  main.cpp
//  homework6
//
//  Created by 劉世翔 on 2019/4/12.
//  Copyright © 2019年 劉世翔. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int year;
    printf("請輸入年數(西元)：");
    scanf("%d" , &year);
    if(year % 400 == 0 )
        printf("%d年是閏年\n",year);
    else if(year % 100 == 0)
        printf("%d年是平年\n",year);
    else if(year % 4 == 0)
        printf("%d年是閏年\n",year);
    else
        printf("%d年是平年\n",year);
    system("pause");
    return 0;
}
