#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 7

int main( void )
{
   int face; /* 翴计 1 - 6 */
   int roll; /* 耏浑璸计竟 */
   int times; /* 耏浑Ω计*/
   int frequency[ SIZE ] = { 0 }; /* ﹍て参璸皚 */    
   float total=0.0;

   printf("块浑щ耏Ω计:");
   scanf("%d", &times);
   printf("\n");
   srand( time( NULL ) ); /* 砞﹚睹计贺 */

   for ( roll = 1; roll <= times; roll++ ) {
      face = 1 + rand() % 6;	/* 睹计玻ネ翴计 1 - 6 */
      ++frequency[ face ];		/* 盢玻ネ翴计璸参璸皚*/
   }                          

   printf( "翴计\tΩ计\t瞷诀瞯\n" );

   for ( face = 1; face < SIZE; face++ ) {
      printf( "%d\t%4d\t%.4f\n", face, frequency[ face ], (float)frequency[ face ]/times );
   } 
   
   for ( face = 1; face < SIZE; face++ ) {

	  total = total + (float)frequency[ face ]/times;
   } 
   printf( "\n羆㎝\t%d\t%.2f\n", times, total );
   return 0; 
} 
