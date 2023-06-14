#include <stdio.h>
#include <stdlib.h>
#define MAX_STUDENTS 100
#define MAX_NAME_LENGTH 50	//利用前置處理，預設學生成績與姓名陣列大小 

char names[MAX_STUDENTS][MAX_NAME_LENGTH];	//設計字元二維陣列，儲存編號(MAX_STUDENTS)以及姓名(MAX_NAME_LENGTH) 
int scores[MAX_STUDENTS];					//設計整數一維陣列，儲存成績 
int numStudents = 0;						//預設編號從0開始 
void addStudent();							//新增資料函式原型 
void updateScore();							//修改資料函式原型 
void printClassInfo();						//列印資料函式原型 

int main() {
    int choice;
	//利用while(1)無限循環迴圈，搭配switch case做成選單系統 
    while (1) {
        printf("\n請選擇操作：\n");
        printf("1. 新增學生資料\n");
        printf("2. 修改學生成績\n");
        printf("3. 列印班級資訊\n");
        printf("4. 退出\n");
        printf("選擇: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                updateScore();
                break;
            case 3:
                printClassInfo();
                break;
            case 4:
                exit(0);//使用exit(0)語法退出程式執行 
                break;
            default:
                printf("無效的選擇。\n");
        }
    }
} 


void addStudent() {
    if (numStudents >= MAX_STUDENTS) {
        printf("無法新增學生，已達到最大學生數量。\n");
        return;
    }
    fflush(stdin);
    printf("請輸入學生姓名：");
    gets(names[numStudents]);	//注意此處是輸入名字字串到二維陣列中，names[numStudents]表示二維陣列中某一整列開頭位址，故無需&取址 
    printf("請輸入學生成績：");			//此處是輸入成績到一維陣列， scores[numStudents]表示陣列元素，故需要&取址將值賦予該元素 
    scanf("%d", &scores[numStudents]);                                           
    numStudents++;
    printf("學生資料已新增。\n");
}


void updateScore() {
    int studentID;
    int newScore;

    printf("請輸入要修改成績的學生編號：");
    scanf("%d", &studentID);
    if (studentID >= 1 && studentID <= numStudents) {
        printf("請輸入新的學生成績：");
        scanf("%d", &scores[studentID - 1]);	//搜尋的學生編號與實際陣列中儲存的編號差1 
        printf("學生成績已更新。\n");
    } else {
        printf("找不到該學生。\n");
    }
}


void printClassInfo() {
    printf("\n班級學生名單與成績：\n");
    int i;
    for (i = 0; i < numStudents; i++) {
        printf("學生編號：%d  學生姓名：%s  成績：%d\n", i + 1, names[i], scores[i]);
    }
    double classAverage = 0.0;
    for (i = 0; i < numStudents; i++) {
        classAverage += scores[i];
    }
    classAverage /= numStudents;
    printf("班級平均成績：%.2f\n", classAverage);
}
