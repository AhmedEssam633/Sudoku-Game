#include<stdio.h>
#include <windows.h>

void gotoxy(int x, int y)
{
    COORD CRD;
    CRD.X=x;
    CRD.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),CRD);
}

void setColor(int ForgC)
{
    WORD wColor;
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    if(GetConsoleScreenBufferInfo(hStdOut, &csbi)){
        wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
        SetConsoleTextAttribute(hStdOut, wColor);
}
}

void matrix_array_print(int arr[][9],int row,int col)
{
    int i,j;
    setColor(11);
printf("\n\n");
printf("                                       + --------- + --------- + --------- +\n");
    for(i=0; i<row; i++)
    {
        printf("                                       ");
        for(j=0; j<col; j++)
        {
            if(arr[i][j]==0)
            {

                arr[i][j]= ' ';
                setColor(11);
                printf("| %c ",arr[i][j]);
            }
            else
            {
                setColor(11);
                printf("|");
                setColor(6);
                printf("%2d ", arr[i][j]);
            }

            if(j==8)
            {setColor(11);
                printf("|");
            }
        }
 if(i==0||i==1||i==3||i==4||i==6||i==7)
        {
            printf("\n");
        }
        printf("\n");
        if(i==2||i==5)
        {
            setColor(11);
            printf("                                       + --------- + --------- + --------- +\n");
        }
    }
    setColor(11);
printf("                                       + --------- + --------- + --------- +\n");
}



int exist_num(int arr[][9],int row,int col,int num)
{
    int i,j;
    if(num<10 && num >0)
    {arr[row][col]=0;
        for(i=0; i<9; i++)
        {
            if(num==arr[row][i])
                return 0;
        }

        for(j=0; j<9; j++)
        {
            if(num==arr[j][col])
                return 0;
        }
        return 1;
    }
    return -1;
}


int check_location_empty(int arr[][9],int row,int colum,int x,int y,int * arr1)
{

    int j,z,num=0,flag=0,c=0,m=27;
    for(j=0;j<62;j=j+2)
    {
        if(y==arr1[j])
        {
            if(x==arr1[j+1])
            {
                flag=1;
            }
        }

    }


    if(arr[x][y]==0||flag==1)
    {gotoxy(0,30);
printf("                                                                        ");
        gotoxy(61+c,27);
    c+2;

        z=1;
        setColor(3);
printf("\n->   please enter the number you want to add in this location =  ");





        return z;

    }
    else
    {

        gotoxy(11,23);
 printf("                     ");
  gotoxy(29,25);
 printf("        ");

  gotoxy(40,32);
printf("                                                                \n");
printf("                                                                \n");
printf("                                                                \n");

        gotoxy(40,27);

        setColor(4);
        printf(" \n\n\n-> ( please select other location this location you can't change it )  \n\n");
        z=0;

        return z;


    }


}


