#include <iostream>
#include <stdlib.h>
using namespace std;

/*
cout<<c1<<v<<v<<v<<pj<<v<<v<<v<<pj<<v<<v<<v<<c2<<endl;
cout<<o<<" X "<<o<<" X "<<o<<" X "<<o<<endl;
cout<<pr<<v<<v<<v<<c<<v<<v<<v<<c<<v<<v<<v<<pl<<endl;
cout<<o<<" X "<<o<<" X "<<o<<" X "<<o<<endl;
cout<<pr<<v<<v<<v<<c<<v<<v<<v<<c<<v<<v<<v<<pl<<endl;
cout<<o<<" X "<<o<<" X "<<o<<" X "<<o<<endl;
cout<<c3<<v<<v<<v<<ps<<v<<v<<v<<ps<<v<<v<<v<<c4<<endl;
*/

char c1=0xDA, c2=0xBF, c3=0xC0, c4=0xD9; //Colturi
char o=0xB3, v=0xC4; //Orizontala | si verticala -
char pj=0xC2, ps=0xC1, pl=0xB4, pr=0xC3; //Perpendicular varful: jos v sus ^ left < right >
char c=0xc5; //Cruce +

char V[9]={'1','2','3','4','5','6','7','8','9'};

void board();
void Player_1();
void Player_2();
int checkWin();

int main()
{
int a;

do{
system("cls");
board();


Player_1();
a=checkWin();
if(a==1){
cout<<"WINNER: Player 1!\n"; break;}
else if(a==0) {cout<<"Game Over!\n"; break;}

Player_2();
a=checkWin();
if(a==1){
cout<<"WINNER: Player 2!\n"; break;}
else if(a==0) {cout<<"Game Over!\n"; break;}
}while(a==-1);



}

void board(){
system("cls");
cout<<"\n\n Tic Tac Toe\n\n";
cout<<c1<<v<<v<<v<<pj<<v<<v<<v<<pj<<v<<v<<v<<c2<<endl;
cout<<o<<" "<<V[0]<<" "<<o<<" "<<V[1]<<" "<<o<<" "<<V[2]<<" "<<o<<endl;
cout<<pr<<v<<v<<v<<c<<v<<v<<v<<c<<v<<v<<v<<pl<<endl;
cout<<o<<" "<<V[3]<<" "<<o<<" "<<V[4]<<" "<<o<<" "<<V[5]<<" "<<o<<endl;
cout<<pr<<v<<v<<v<<c<<v<<v<<v<<c<<v<<v<<v<<pl<<endl;
cout<<o<<" "<<V[6]<<" "<<o<<" "<<V[7]<<" "<<o<<" "<<V[8]<<" "<<o<<endl;
cout<<c3<<v<<v<<v<<ps<<v<<v<<v<<ps<<v<<v<<v<<c4<<endl<<endl;
}

void Player_1()
{
char x;
cout<<"Player 1 [X]: Pick a number: "; cin>>x;
for(int i=0;i<9;i++)
    if(V[i]==x)
    V[i]='X';
board();
}

void Player_2()
{
char o;
cout<<"Player 2 [O]: Pick a number: "; cin>>o;
for(int i=0;i<9;i++)
if(V[i]==o)
V[i]='O';

board();
}

int checkWin(){

if(V[0]==V[1] && V[1]==V[2])
    return 1;
else if(V[3]==V[4] && V[4]==V[5])
    return 1;
else if(V[6]==V[7] && V[7]==V[8])
    return 1;
else if(V[0]==V[3] && V[3]==V[6])
    return 1;
else if(V[1]==V[4] && V[4]==V[7])
    return 1;
else if(V[2]==V[5] && V[5]==V[8])
    return 1;
else if(V[0]==V[4] && V[4]==V[8])
    return 1;
else if(V[2]==V[4] && V[4]==V[6])
    return 1;
else if(V[0]!='1' && V[1]!='2' && V[2]!='3' && V[3]!='4' && V[4]!='5' && V[5]!='6' && V[6]!='7' && V[7]!='8' && V[8]!='9')
    return 0;
return -1;
}



