#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y)
{
     COORD coord;
     coord.X = x;
     coord.Y = y;
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
     }

int main ()

{
    int i = 0;
  
  
  /* les mus exteieus */  
   for(i=0;i<=15;i++){ 
  gotoxy (20,10+i);
  cout<<"I"; } 
  
  for(i=0;i<=50;i++){ 
  gotoxy (20+i,10);
  cout<<"I"; } 
  
  for(i=0;i<=15;i++){ 
  gotoxy (70,10+i);
  cout<<"I"; } 
  
    /* la porte */  
    
  for(i=0;i<=6;i++){ 
  gotoxy (40,19+i);
  cout<<"I"; } 
  
  for(i=0;i<=8;i++){ 
  gotoxy (40+i,19);
  cout<<"I"; } 
  
  for(i=0;i<=6;i++){ 
  gotoxy (48,19+i);
  cout<<"I"; } 
  
  for(i=0;i<=6;i++){ 
  gotoxy (20,4+i);
  cout<<"I"; }
  
  for(i=0;i<=4;i++){ 
  gotoxy (20+i,4);
  cout<<"I"; }
  
  for(i=0;i<=6;i++){ 
  gotoxy (24,4+i);
  cout<<"I"; }
  
  for(i=0;i<=5;i++){ 
  gotoxy (10,20+i);
  cout<<"I"; }
  
  for(i=0;i<=4;i++){ 
  gotoxy (8+i,20);
  cout<<"6"; }
  
  for(i=0;i<=2;i++){ 
  gotoxy (9+i,19);
  cout<<"6"; }
  
  for(i=0;i<=0;i++){ 
  gotoxy (10+i,18);
  cout<<"6"; }
  
 /*  twa9i */
 
  for(i=0;i<=6;i++){ 
  gotoxy (25+i,12);
  cout<<"_"; }
  
  for(i=0;i<=4;i++){ 
  gotoxy (24,13+i);
  cout<<"|"; }
  
  for(i=0;i<=6;i++){ 
  gotoxy (25+i,17);
  cout<<"_"; }
  
  for(i=0;i<=4;i++){ 
  gotoxy (32,13+i);
  cout<<"|"; }
  
  
  
  
  
  
  cin>>i;   
      /* cout<<"\r\r\r\r I \n";
             
             }
             cin>>i;  */
}
