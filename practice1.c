#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 7

int main( void )
{
   int face; /* �ŧi�I�� 1 - 6 */
   int roll; /* �Y��l�p�ƾ� */
   int times; /* �Y��l����*/
   int frequency[ SIZE ] = { 0 }; /* ��l�Ʋέp�}�C */    
   float total=0.0;

   printf("��J��l���Y����:");
   scanf("%d", &times);
   printf("\n");
   srand( time( NULL ) ); /* �]�w�üƺؤl */

   for ( roll = 1; roll <= times; roll++ ) {
      face = 1 + rand() % 6;	/* �üƲ����I�� 1 - 6 */
      ++frequency[ face ];		/* �N���ͪ��I�ƭp�J�έp�}�C*/
   }                          

   printf( "�I��\t����\t�X�{���v\n" );

   for ( face = 1; face < SIZE; face++ ) {
      printf( "%d\t%4d\t%.4f\n", face, frequency[ face ], (float)frequency[ face ]/times );
   } 
   
   for ( face = 1; face < SIZE; face++ ) {

	  total = total + (float)frequency[ face ]/times;
   } 
   printf( "\n�`�M\t%d\t%.2f\n", times, total );
   return 0; 
} 
