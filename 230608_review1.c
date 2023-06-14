#include <stdio.h>
#include <stdlib.h>
#define MAX_STUDENTS 100
#define MAX_NAME_LENGTH 50	//�Q�Ϋe�m�B�z�A�w�]�ǥͦ��Z�P�m�W�}�C�j�p 

char names[MAX_STUDENTS][MAX_NAME_LENGTH];	//�]�p�r���G���}�C�A�x�s�s��(MAX_STUDENTS)�H�Ωm�W(MAX_NAME_LENGTH) 
int scores[MAX_STUDENTS];					//�]�p��Ƥ@���}�C�A�x�s���Z 
int numStudents = 0;						//�w�]�s���q0�}�l 
void addStudent();							//�s�W��ƨ禡�쫬 
void updateScore();							//�ק��ƨ禡�쫬 
void printClassInfo();						//�C�L��ƨ禡�쫬 

int main() {
    int choice;
	//�Q��while(1)�L���`���j��A�f�tswitch case�������t�� 
    while (1) {
        printf("\n�п�ܾާ@�G\n");
        printf("1. �s�W�ǥ͸��\n");
        printf("2. �ק�ǥͦ��Z\n");
        printf("3. �C�L�Z�Ÿ�T\n");
        printf("4. �h�X\n");
        printf("���: ");
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
                exit(0);//�ϥ�exit(0)�y�k�h�X�{������ 
                break;
            default:
                printf("�L�Ī���ܡC\n");
        }
    }
} 


void addStudent() {
    if (numStudents >= MAX_STUDENTS) {
        printf("�L�k�s�W�ǥ͡A�w�F��̤j�ǥͼƶq�C\n");
        return;
    }
    fflush(stdin);
    printf("�п�J�ǥͩm�W�G");
    gets(names[numStudents]);	//�`�N���B�O��J�W�r�r���G���}�C���Anames[numStudents]��ܤG���}�C���Y�@��C�}�Y��}�A�G�L��&���} 
    printf("�п�J�ǥͦ��Z�G");			//���B�O��J���Z��@���}�C�A scores[numStudents]��ܰ}�C�����A�G�ݭn&���}�N�Ƚᤩ�Ӥ��� 
    scanf("%d", &scores[numStudents]);                                           
    numStudents++;
    printf("�ǥ͸�Ƥw�s�W�C\n");
}


void updateScore() {
    int studentID;
    int newScore;

    printf("�п�J�n�ק令�Z���ǥͽs���G");
    scanf("%d", &studentID);
    if (studentID >= 1 && studentID <= numStudents) {
        printf("�п�J�s���ǥͦ��Z�G");
        scanf("%d", &scores[studentID - 1]);	//�j�M���ǥͽs���P��ڰ}�C���x�s���s���t1 
        printf("�ǥͦ��Z�w��s�C\n");
    } else {
        printf("�䤣��Ӿǥ͡C\n");
    }
}


void printClassInfo() {
    printf("\n�Z�žǥͦW��P���Z�G\n");
    int i;
    for (i = 0; i < numStudents; i++) {
        printf("�ǥͽs���G%d  �ǥͩm�W�G%s  ���Z�G%d\n", i + 1, names[i], scores[i]);
    }
    double classAverage = 0.0;
    for (i = 0; i < numStudents; i++) {
        classAverage += scores[i];
    }
    classAverage /= numStudents;
    printf("�Z�ť������Z�G%.2f\n", classAverage);
}
