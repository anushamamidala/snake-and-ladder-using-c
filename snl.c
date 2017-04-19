#include<stdio.h>
#include<stdlib.h>
int rr = 1 ;

int start();
void main()
{
   int num,pos = 0,newpos = 0,finalpos = 0,moves[101],i=1,h=0;
  
   for (i =1; i<=100; i++){
        moves[i] = -1;
   }
  
   //ladder
   moves[4]=14;
   moves[9]=31;
   moves[20]=38;
   moves[28]=84;
   moves[40]=59;
   moves[51]=67;
   moves[63]=81;
   moves[71]=91;
   //snakes
   moves[17]=7;
   moves[62]=19;
   moves[64]=60;
   moves[99]=78;
   moves[95]=75;
   moves[93]=73;
   moves[87]=24;
   moves[54]=34; 
 
   
   int step = 0 ;

   while ( 1 ) {

      while ( ! (num = start()) ) ;

      newpos = pos + num ;
      printf("\n%d.current %d\n ",++step, pos);
      printf("dice value %d\n ",num);
      printf("new pos %d\n ",newpos);
      if ( newpos == 100 ) {
         printf("Yahoo....Won\n");
         break; 
      }

      
      if ( (newpos < 100) && (moves[newpos] != -1) ) {

         if ( newpos > moves[newpos] ) {

            printf(" got snake....Mmmm! going down to %d\n",moves[newpos]); 
            
         } else {
             printf(" ladder ....yeahh..!! going up to  %d\n",moves[newpos]); 
         }
         
         pos = moves[newpos] ;
      } else {

         if ( newpos < 100 ) 
            pos = newpos ;
      } 

      
      

   }
}
int start()
{
 
static int r=1;
/*r = rand();*/
for ( int ii = 0 ; ii < 10000000; ii++ ) {
for ( int ij = 0 ; ij < 10; ij++ ) {
   ii = ii ;
}
}
return ( rand() % 6 + 1) ;
  
}
