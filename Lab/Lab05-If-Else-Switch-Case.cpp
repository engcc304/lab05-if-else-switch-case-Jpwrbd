/*
    ผู้ใช้กรอกค่า "คะแนนดิบ" เข้ามาในระบบเพื่อต้องการตรวจสอบเกรดในรายวิชา Programming ซึ่งมีเกณฑ์การให้คะแนนคือ F อยู่ในช่วงคะแนนน้อยกว่า 50 , D อยู่ในช่วงระหว่าง 50 ถึง 55 , D+ อยู่ในช่วงระหว่าง 55 ถึง 60 , C อยู่ในช่วงระหว่าง 60 ถึง 65 , C+ อยู่ในช่วงระหว่าง 65 ถึง 70 , B อยู่ในช่วงระหว่าง 70 ถึง 75 , B+ อยู่ในช่วงระหว่าง 75 ถึง 80 , A อยู่ในช่วงคะแนนมากกว่า 80 ขึ้นไป
    (กำหนดให้ข้อนี้ใช้คำสั่ง if else ได้เท่านั้น)

    Test case:
        enter score :
            80
    Output:
        A !

    Test case:
        enter score :
            55
    Output:
        D+ !

    Test case:
        enter score :
            64
    Output:
        C !

    Test case:
        enter score :
            44
    Output:
        F !

    Test case:
        enter score :
            hello
    Output:
        please enter number only.
*/

#include <stdio.h>

int main()
{
    int score = 0;
    printf("enter score : \n");
    scanf("%d", &score);
    if (score >= 80)
    {
        printf("A !");
    }
    else if (score <= 79 && score >= 75)
    {
        printf("B+ !");
    }
    else if (score <= 74 && score >= 70)
    {
        printf("B !");
    }
    else if (score <= 69 && score >= 65)
    {
        printf("C+ !");
    }
    else if (score <= 64 && score >= 60)
    {
        printf("C !");
    }
    else if (score <= 59 && score >= 55)
    {
        printf("D+ !");
    }
    else if (score <= 54 && score >= 50)
    {
        printf("D !");
    }
    else if( ! score)
    {
        printf("please enter number only. ");
    }
    else{
        printf("F !");
    }
    return 0;
} // end main function