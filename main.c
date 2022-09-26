#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int x,y=0,num,row,col,z=0,i,j,flag=0,c=22;
int arr1[62]={0,1,1,0,2,0,2,2,2,3,2,5,2,6,2,8,3,2,3,6,4,2,4,5,4,8,5,0,5,2,5,8,6,0,6,1,6,4,6,6,6,7,6,8,7,0,7,2,7,4,7,5,7,6,7,7,7,8,8,3,8,7};
    int arr[9][9]=
    {               {7,0,0,3,1,0,0,0,6},
                    {0,5,8,7,4,6,0,2,1},
                    {9,6,0,0,0,0,4,0,7},
                    {2,1,0,9,8,7,5,4,0},
                    {8,9,5,4,6,3,0,0,2},
                    {4,3,0,1,0,2,6,0,9},
                    {1,2,0,0,3,4,0,0,5},
                    {6,7,4,2,9,5,0,0,0},
                    {5,8,0,6,0,0,0,0,4}
    };



    matrix_array_print( arr,9,9);
    while(1)
    {setColor(9);
         gotoxy(3,8);
 //  printf("( OMAR Hussien )\n\n" );
   //printf("   ( Abdelrahman Amin )\n\n" );
   printf("   ( Ahmed Essam )" );
gotoxy(0,c);
        setColor(7);
        printf("\n-> what the number of colum =  ");
        gotoxy(0,25);
printf("                                  ");
        gotoxy(29,c+1);
        printf(" ");

    scanf("%d",&col);
        setColor(7);
    printf("\n -> what the number of row =  ");
    gotoxy(28,c+3);
          printf(" ");
    scanf("%d",&row);

    z=check_location_empty(arr,9,9,row,col,arr1);

      if(z==1)
    {
        x=0;
        while(x!=1)
        {

        scanf("%d",&num);
          x=  exist_num(arr,row,col,num);
          if(x==0)
          {
               gotoxy(0,28);
printf("                                                                         \n");


 gotoxy(40,32);
printf("                                                                \n");
printf("                                                                \n");
printf("                                                                \n");

              gotoxy(40,28);
              setColor(4);
              printf("\n\n -> this number in (colum) or (row) of this location please set the differant number  =  ");




          }

          if(x==-1)
          {

              gotoxy(40,32);
              setColor(5);
              printf(" \n -> this number is no't in rang of game \n");
              setColor(5);
              printf(" -> write the number in rang of ( 0 < num > 10 ) = ");
              gotoxy(50,34);
              printf(" ");

          }
          if(x==1)
          {

              arr[row][col]=num ;
              gotoxy(40,28);
              setColor(9);
              printf("\n\n** Done the number added in location  **                                                    \n\n");
              gotoxy(col+(col*3)+41,(row*2)+3);
               setColor(10);
              printf("%d",num);
                   gotoxy(0,28);
printf("                                                                         \n");


 gotoxy(40,32);
printf("                                                                \n");
printf("                                                                \n");
printf("                                                                \n");


          }

    }
    }
    printf("\n\n");



    }


}
