#include <iostream>
#include<Windows.h>
using namespace std;


int e1X=73,e1Y=1;
int e2X=73,e2Y=11;
int e3X=73,e3Y=21;
int pX=1,pY=15;
void homePage()
{
cout<<" ___________________________________________________________ "<<endl;
cout<<"|          $$$$$$$$$$    $$     $$$   $$  $$   $$           |"<<endl;
cout<<"|          $$  $$  $$  $$  $$   $$$$  $$  $$ $$             |"<<endl;
cout<<"|              $$     $$$$$$$$  $$ $$ $$  $$$$              |"<<endl;
cout<<"|              $$     $$    $$  $$  $$$$  $$ $$             |"<<endl;
cout<<"|             $$$$    $$    $$  $$   $$$  $$   $$           |"<<endl;
cout<<"|                                                           |"<<endl;
cout<<"|  $$$$  $$   $$  $$$$   $$$$  $$$$$$$$ $$ $$$   $$  $$$$$  |"<<endl;
cout<<"| $$   $ $$   $$ $$  $$ $$  $$    $$    $$ $$$$  $$ $$   $$ |"<<endl;
cout<<"|   $$   $$$$$$$ $$  $$ $$  $$    $$    $$ $$ $$ $$ $$      |"<<endl;
cout<<"| $   $$ $$   $$ $$  $$ $$  $$    $$    $$ $$  $$$$ $$ $$$$ |"<<endl;
cout<<"|  $$$$  $$   $$  $$$$   $$$$     $$    $$ $$   $$$  $$$$$  |"<<endl;
cout<<"|___________________________________________________________|"<<endl;
cout<<"Press enter to continue.";
}
void printMaze()
{
    cout<<"##################################################################################"<<endl;
    cout<<"#                                                                                #"<<endl;
    cout<<"#                                                                                #"<<endl;
    cout<<"#                                                                                #"<<endl;
    cout<<"#                                                                                #"<<endl;
    cout<<"#                                                                                #"<<endl;
    cout<<"#                                                                                #"<<endl;
    cout<<"#                                                                                #"<<endl;
    cout<<"#                                                                                #"<<endl;
    cout<<"#                                                                                #"<<endl;
    cout<<"#                                                                                #"<<endl;
    cout<<"#                                                                                #"<<endl;
    cout<<"#                                                                                #"<<endl;
    cout<<"#                                                                                #"<<endl;
    cout<<"#                                                                                #"<<endl;
    cout<<"#                                                                                #"<<endl;
    cout<<"#                                                                                #"<<endl;
    cout<<"#                                                                                #"<<endl;
    cout<<"#                                                                                #"<<endl;
    cout<<"#                                                                                #"<<endl;
    cout<<"#                                                                                #"<<endl;
    cout<<"#                                                                                #"<<endl;
    cout<<"#                                                                                #"<<endl;
    cout<<"#                                                                                #"<<endl;
    cout<<"#                                                                                #"<<endl;
    cout<<"#                                                                                #"<<endl;
    cout<<"#                                                                                #"<<endl;
    cout<<"#                                                                                #"<<endl;
    cout<<"#                                                                                #"<<endl;
    cout<<"#                                                                                #"<<endl;
    cout<<"#                                                                                #"<<endl;
    cout<<"##################################################################################"<<endl;
}
void gotoxy(int x,int y)
{
    COORD coordinates;
    coordinates.X= x;
    coordinates.Y= y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
char getCharAtxy(short int x,short int y)
{
   CHAR_INFO ci;
   COORD xy= {0,0};
   SMALL_RECT rect={x,y,x,y};
   COORD coordBufSize;
   coordBufSize.X=1;
   coordBufSize.Y=1;
   return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),&ci,coordBufSize,xy,&rect) ? ci.Char.AsciiChar: ' ';
}
void printPlayer()
{
    gotoxy(pX,pY);
    cout<<"     ___            "<<endl;
    gotoxy(pX,pY+1);
    cout<<"  __(___)_          "<<endl;
    gotoxy(pX,pY+2);
    cout<<"/__  /___\\\\======o"<<endl;
    gotoxy(pX,pY+3);
    cout<<"\\___|____/|        "<<endl;
    gotoxy(pX,pY+4);
    cout<<"(O_O_O_O_)          "<<endl;
    gotoxy(0,32);
}
void erasePlayer()
{
    gotoxy(pX,pY);
    cout<<"                    "<<endl;
    gotoxy(pX,pY+1);
    cout<<"                    "<<endl;
    gotoxy(pX,pY+2);
    cout<<"                    "<<endl;
    gotoxy(pX,pY+3);
    cout<<"                    "<<endl;
    gotoxy(pX,pY+4);
    cout<<"                    "<<endl;
    gotoxy(0,2);
}
void movePlayerUp()
{
    if(getCharAtxy(pX,pY-1)==' ')
    {
    erasePlayer();
    pY=pY-1;
    printPlayer();
    }
}
void movePlayerDown()
{
    if(getCharAtxy(pX,pY-26)==' ')
    {
    erasePlayer();
    pY=pY+1;
    printPlayer();
    }
}
void movePlayerLeft()
{
    if(getCharAtxy(pX-1,pY)==' ')
    {
    erasePlayer();
    pX=pX-1;
    printPlayer();
    }
}
void movePlayerRight()
{
    if(getCharAtxy(pX+20,pY)==' ')
    {
    erasePlayer();
    pX=pX+1;
    printPlayer();
    }
}
void printEnemy1()
{
    gotoxy(e1X,e1Y);
    cout<<"  (0,0) "<<endl;
    gotoxy(e1X,e1Y+1);
    cout<<"  __8   "<<endl;
    gotoxy(e1X,e1Y+2);
    cout<<" / /|   "<<endl;
    gotoxy(e1X,e1Y+3);
    cout<<"   /\\   "<<endl;
    gotoxy(e1X,e1Y+4);
    cout<<"  / |   "<<endl;
    gotoxy(0,32);
}
void eraseEnemy1()
{
    gotoxy(e1X,e1Y);
    cout<<"        "<<endl;
    gotoxy(e1X,e1Y+1);
    cout<<"        "<<endl;
    gotoxy(e1X,e1Y+2);
    cout<<"        "<<endl;
    gotoxy(e1X,e1Y+3);
    cout<<"        "<<endl;
    gotoxy(e1X,e1Y+4);
    cout<<"        "<<endl;
    gotoxy(0,32);
}
void moveEnemy1()
{
    eraseEnemy1();
    e1X=e1X-1;
    if(e1X==1)
    {
        e1X=73;
    }
    printEnemy1();
}
void printEnemy2()
{
    gotoxy(e2X,e2Y);
    cout<<"  (0,0) "<<endl;
    gotoxy(e2X,e2Y+1);
    cout<<"  __8   "<<endl;
    gotoxy(e2X,e2Y+2);
    cout<<" / /|   "<<endl;
    gotoxy(e2X,e2Y+3);
    cout<<"   /\\   "<<endl;
    gotoxy(e2X,e2Y+4);
    cout<<"  / |   "<<endl;
    gotoxy(0,32);
}
void eraseEnemy2()
{
    gotoxy(e2X,e2Y);
    cout<<"        "<<endl;
    gotoxy(e2X,e2Y+1);
    cout<<"        "<<endl;
    gotoxy(e2X,e2Y+2);
    cout<<"        "<<endl;
    gotoxy(e2X,e2Y+3);
    cout<<"        "<<endl;
    gotoxy(e2X,e2Y+4);
    cout<<"        "<<endl;
    gotoxy(0,32);
}
void moveEnemy2()
{
    eraseEnemy2();
    e2X=e2X-1;
    if(e2X==1)
    {
        e2X=73;
    }
    printEnemy2();
}
void printEnemy3()
{
    gotoxy(e3X,e3Y);
    cout<<"  (0,0) "<<endl;
    gotoxy(e3X,e3Y+1);
    cout<<"  __8   "<<endl;
    gotoxy(e3X,e3Y+2);
    cout<<" / /|   "<<endl;
    gotoxy(e3X,e3Y+3);
    cout<<"   /\\   "<<endl;
    gotoxy(e3X,e3Y+4);
    cout<<"  / |   "<<endl;
    gotoxy(0,32);
}
void eraseEnemy3()
{
    gotoxy(e3X,e3Y);
    cout<<"        "<<endl;
    gotoxy(e3X,e3Y+1);
    cout<<"        "<<endl;
    gotoxy(e3X,e3Y+2);
    cout<<"        "<<endl;
    gotoxy(e3X,e3Y+3);
    cout<<"        "<<endl;
    gotoxy(e3X,e3Y+4);
    cout<<"        "<<endl;
    gotoxy(0,32);
}
void moveEnemy3()
{
    eraseEnemy3();
    e3X=e3X-1;
    if(e3X==1)
    {
        e3X=73;
    }
    printEnemy3();
}
void score()
{
    cout<<"SCORE: ";
}
int main()
{
    system("cls");
    printMaze();
    printPlayer();
    printEnemy1();
    printEnemy2();
    printEnemy3();
    score();
    while(true)
    {
        if (GetAsyncKeyState(VK_UP))
        {
            movePlayerUp();
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            movePlayerDown();
        }
        if (GetAsyncKeyState(VK_LEFT))
        {
            movePlayerLeft();
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            movePlayerRight();
        }
        moveEnemy1();
        Sleep(100);
        moveEnemy2();
        Sleep(100);
        moveEnemy3();
        Sleep(100);
    }
}