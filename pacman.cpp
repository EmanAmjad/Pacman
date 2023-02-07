#include<iostream>
#include<conio.h>
#include<map>
#include<windows.h>
using namespace std;
void menu(){
HANDLE hStdout5=GetStdHandle(STD_OUTPUT_HANDLE);
     COORD position5={7,7};
	SetConsoleCursorPosition(hStdout5,position5);
		
	cout << "Press 'S' to start the game.";


	HANDLE hStdout6=GetStdHandle(STD_OUTPUT_HANDLE);
 COORD position6={7,10};                             
SetConsoleCursorPosition(hStdout6,position6);
cout<< "Press 'W' to Move Up."; 


HANDLE hStdout7=GetStdHandle(STD_OUTPUT_HANDLE);
 COORD position7={7,13};                             
SetConsoleCursorPosition(hStdout7,position7);
cout<< "Press 'S' to Move Down.";


HANDLE hStdout8=GetStdHandle(STD_OUTPUT_HANDLE);
 COORD position8={7,16};                             
SetConsoleCursorPosition(hStdout8,position8);
cout<< "Press 'A' to Move Left.";

HANDLE hStdout9=GetStdHandle(STD_OUTPUT_HANDLE);
 COORD position9={7,19};                             
SetConsoleCursorPosition(hStdout9,position9);
cout<< "Press 'D' to Move Right.";
}
void pause(){
HANDLE hStdout10=GetStdHandle(STD_OUTPUT_HANDLE);
     COORD position10={7,7};
	SetConsoleCursorPosition(hStdout10,position10);
		
	cout << "Press 'Any Key' to continue the game.";
}


int main()
{      
	     int score=0,control=0,lives=3,levels=1;
     char condition='\0';
     char temp_var='\0';
 if(control==0){
     	menu();
        condition=getch();
        if(condition=='s' || condition=='S'){
         control=1;
        }
 }
 system("cls");
 if(control==1){       
	    char map[15][31]={
		  "------------------------------",
	      "|                            |",
          "| +========================+ |",
          "| |  Eman Amjad pac-man    | |",
          "| +========================+ |",
		  "|                            |",
          "| +========================+ |",
          "|                            |",
          "| +========================+ |",
	      "|                            |",
	      "| ########################## |",
          "|                            |",
	      "| ########################## |",
          "|                            |",
          "------------------------------"
	};
	system("cls");
	
	for(int i=0; i<15; i++)
	{
	   for(int j=0; j<31; j++)
	   {
		   if(map[i][j]==' ')
		   { 
			   if((i == 1) || (i==9) || (i==11) || (i==13) || (j==1) || (j==28) || (i==5) || (i==7))
			   {
				   map[i][j]='.';
			   }
		   }
	   }
	}
	for(int i=0; i<15; i++)
	{
		for(int j=0; j<31; j++)
		{
			cout<<map[i][j];
		}
		cout<<endl;
	}
	
int test = 0;
	short pacman_x=13 , pacman_y=28; //initial position of pac-man(R)

	short enemy_x=7 , enemy_y=7; //initial position of enemy(R)
	short enemy_x1=1 , enemy_y1=7; //initial position of enemy(R)
  	
	
int check=0;	
	while(true){
	temp_var=getch();
	if(temp_var=='p' || temp_var=='P'){
		control=0;
		system("cls");
		pause();
		temp_var=getch();
	}

///////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////     Dumb A.I     //////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////
if( (pacman_x > enemy_x) && (pacman_y > enemy_y) ){
	if(map[enemy_x+1][enemy_y] ==' ' || map[enemy_x+1][enemy_y]=='.')
		{
			enemy_x++;
		}
		if(map[enemy_x][enemy_y-1] ==' ' || map[enemy_x][enemy_y-1]=='.'){
			enemy_y--;
			}
}
if( (pacman_x > enemy_x) && (pacman_y < enemy_y) ){
	if(map[enemy_x+1][enemy_y] ==' ' || map[enemy_x+1][enemy_y]=='.')
		{
			enemy_x++;
		}
			if(map[enemy_x][enemy_y+1] ==' ' || map[enemy_x][enemy_y+1]=='.'){
			enemy_y++;
			}
}


if( (pacman_x < enemy_x) && (pacman_y > enemy_y) ){
	if(map[enemy_x-1][enemy_y] ==' ' || map[enemy_x-1][enemy_y]=='.')
		{
			enemy_x--;
		}
		if(map[enemy_x][enemy_y-1] ==' ' || map[enemy_x][enemy_y-1]=='.'){
			enemy_y--;
			}
}
if( (pacman_x < enemy_x) && (pacman_y < enemy_y) ){
	if(map[enemy_x-1][enemy_y] ==' ' || map[enemy_x-1][enemy_y]=='.')
		{
			enemy_x--;	
		}
		if(map[enemy_x][enemy_y+1] ==' ' || map[enemy_x][enemy_y+1]=='.'){
			enemy_y++;
			}
}

if( (pacman_x == enemy_x) && (pacman_y > enemy_y) ){
			if(map[enemy_x][enemy_y+1] ==' ' || map[enemy_x][enemy_y+1]=='.'){
			enemy_y++;
			}
		}
if( (pacman_x == enemy_x) && (pacman_y < enemy_y) ){
	        if(map[enemy_x][enemy_y-1] ==' ' || map[enemy_x][enemy_y-1]=='.'){
			enemy_y--;
			}
}

if( (pacman_x > enemy_x) && (pacman_y == enemy_y) ){
			if(map[enemy_x+1][enemy_y] ==' ' || map[enemy_x+1][enemy_y]=='.'){
			enemy_x++;
			}
		}
if( (pacman_x < enemy_x) && (pacman_y == enemy_y) ){
	        if(map[enemy_x-1][enemy_y] ==' ' || map[enemy_x-1][enemy_y]=='.'){
			enemy_x--;
			}
}


if(levels==2){
	///////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////     Dumb A.I     //////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////
if( (pacman_x > enemy_x1) && (pacman_y > enemy_y1) ){
	if(map[enemy_x1+1][enemy_y1] ==' ' || map[enemy_x1+1][enemy_y1]=='.')
		{
			enemy_x1++;
		}
		if(map[enemy_x1][enemy_y1-1] ==' ' || map[enemy_x1][enemy_y1-1]=='.'){
			enemy_y1--;
			}
}
if( (pacman_x > enemy_x1) && (pacman_y < enemy_y1) ){
	if(map[enemy_x1+1][enemy_y1] ==' ' || map[enemy_x1+1][enemy_y1]=='.')
		{
			enemy_x1++;
		}
			if(map[enemy_x1][enemy_y1+1] ==' ' || map[enemy_x1][enemy_y1+1]=='.'){
			enemy_y1++;
			}
}


if( (pacman_x < enemy_x1) && (pacman_y > enemy_y1) ){
	if(map[enemy_x1-1][enemy_y1] ==' ' || map[enemy_x1-1][enemy_y1]=='.')
		{
			enemy_x1--;
		}
		if(map[enemy_x1][enemy_y1-1] ==' ' || map[enemy_x1][enemy_y1-1]=='.'){
			enemy_y1--;
			}
}
if( (pacman_x < enemy_x1) && (pacman_y < enemy_y1) ){
	if(map[enemy_x1-1][enemy_y1] ==' ' || map[enemy_x1-1][enemy_y1]=='.')
		{
			enemy_x1--;	
		}
		if(map[enemy_x1][enemy_y1+1] ==' ' || map[enemy_x1][enemy_y1+1]=='.'){
			enemy_y1++;
			}
}

if( (pacman_x == enemy_x1) && (pacman_y > enemy_y1) ){
			if(map[enemy_x1][enemy_y1+1] ==' ' || map[enemy_x1][enemy_y1+1]=='.'){
			enemy_y1++;
			}
		}
if( (pacman_x == enemy_x1) && (pacman_y < enemy_y1) ){
	        if(map[enemy_x1][enemy_y1-1] ==' ' || map[enemy_x1][enemy_y1-1]=='.'){
			enemy_y1--;
			}
}

if( (pacman_x > enemy_x1) && (pacman_y == enemy_y1) ){
			if(map[enemy_x1+1][enemy_y1] ==' ' || map[enemy_x1+1][enemy_y1]=='.'){
			enemy_x1++;
			}
		}
if( (pacman_x < enemy_x1) && (pacman_y == enemy_y1) ){
	        if(map[enemy_x1-1][enemy_y1] ==' ' || map[enemy_x1-1][enemy_y1]=='.'){
			enemy_x1--;
			}
}

///////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////     Dumb A.I     //////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////
}



///////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////     Dumb A.I     //////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////
	//pac-man(G) movement
	if(temp_var=='s' || temp_var=='S') //downward movement
	{ 
		if (map[pacman_x+1][pacman_y]==' ' || map[pacman_x+1][pacman_y]=='.')
		pacman_x++;

	} else
	if(temp_var=='a' || temp_var=='A') //leftward movement
	{
		if (map[pacman_x][pacman_y-1]==' ' || map[pacman_x][pacman_y-1]=='.')
		pacman_y--;

	}else
	if(temp_var=='w' || temp_var=='W') //upward movement
	{
		if (map[pacman_x-1][pacman_y]==' ' || map[pacman_x-1][pacman_y]=='.')
		pacman_x--;


	}else
	if(temp_var=='d' || temp_var=='D') //rightward movement
	{
		if (map[pacman_x][pacman_y+1]==' ' || map[pacman_x][pacman_y+1]=='.')
		pacman_y++;

	}else
	{
		HANDLE hStdout3=GetStdHandle(STD_OUTPUT_HANDLE);
     COORD position3={45,7};
	SetConsoleCursorPosition(hStdout3,position3);
		
	cout << "Wrong Input.";}
	system("cls");
	if (map[pacman_x][pacman_y]=='.')
	{
		score++;
		map[pacman_x][pacman_y]=' ';
	}
	system("cls");
	
	for(int i=0; i<15; i++)
	{
		for(int j=0; j<31; j++)
		{
			cout<<map[i][j];
		}
		cout<<endl;
	}
	if(score == 182)
	{
		levels++;
		
		score=190;
	// 	char map[15][31]={
	// 	  "------------------------------",
	//       "|                            |",
    //       "| +========================+ |",
    //       "| |  Eman Amjad pac-man    | |",
    //       "| +========================+ |",
	// 	  "|                            |",
    //       "| +========================+ |",
    //       "|                            |",
    //       "| +========================+ |",
	//       "|                            |",
	//       "| ########################## |",
    //       "|                            |",
	//       "| ########################## |",
    //       "|                            |",
    //       "------------------------------"
	// };
	// system("cls");
	
	for(int i=0; i<15; i++)
	{
	   for(int j=0; j<31; j++)
	   {
		   if(map[i][j]==' ')
		   { 
			   if((i == 1) || (i==9) || (i==11) || (i==13) || (j==1) || (j==28) || (i==5) || (i==7))
			   {
				   map[i][j]='.';
			   }
		   }
	   }
	}
	for(int i=0; i<15; i++)
	{
		for(int j=0; j<31; j++)
		{
			cout<<map[i][j];
		}
		cout<<endl;
	}
		pacman_x=13 , pacman_y=28; //initial position of pac-man(R)
	    enemy_x=7 , enemy_y=7; //initial position of enemy(R)
	}
	if(score == 372)
	{
		test=1;
		system("cls");
		break;
	}
	if(levels==1){
     if(pacman_x<=enemy_x+1 && pacman_x>=enemy_x-1 && pacman_y<=enemy_y+1 && pacman_y>=enemy_y-1)
       {
		   lives--;
    pacman_x=13 , pacman_y=28; //initial position of pac-man(R)
	 enemy_x=7 , enemy_y=7; //initial position of enemy(R)
		   system("cls");
		   
		   if(lives==0){
		   test=2;
	 system("cls");
	 break;
		   }
	   }
	}
	if(levels==2){
     if((pacman_x<=enemy_x+1 && pacman_x>=enemy_x-1 && pacman_y<=enemy_y+1 && pacman_y>=enemy_y-1 )|| (pacman_x<=enemy_x1+1 && pacman_x>=enemy_x1-1 && pacman_y<=enemy_y1+1 && pacman_y>=enemy_y1-1) )
       {
		   lives--;
    pacman_x=13 , pacman_y=28; //initial position of pac-man(R)
	 enemy_x=7 , enemy_y=7; //initial position of enemy(R)
     enemy_x1=1 , enemy_y1=7; //initial position of enemy(R)
		   system("cls");
		   
		   if(lives==0){
		   test=2;
	 system("cls");
	 break;
		   }
	   }
	}
		HANDLE hStdout=GetStdHandle(STD_OUTPUT_HANDLE);
     COORD position={39,3};
	SetConsoleCursorPosition(hStdout,position);
	cout<<"Score:"<<score;
	HANDLE hStdout11=GetStdHandle(STD_OUTPUT_HANDLE);
     COORD position11={39,6};
	SetConsoleCursorPosition(hStdout11,position11);
	cout<<"Lives:"<<lives;
	HANDLE hStdout12=GetStdHandle(STD_OUTPUT_HANDLE);
     COORD position12={39,9};
	SetConsoleCursorPosition(hStdout12,position12);
	cout<<"Level:"<<levels;
		HANDLE hStdout1=GetStdHandle(STD_OUTPUT_HANDLE);
     COORD position1={pacman_y,pacman_x};
 	SetConsoleCursorPosition(hStdout1,position1);
    cout<<"G";               //G is my pac-man
	HANDLE hStdout2=GetStdHandle(STD_OUTPUT_HANDLE);
     COORD position2={enemy_y,enemy_x};
 	SetConsoleCursorPosition(hStdout2,position2);
	cout<<"$";              //$ is an enemy of my game
	if(levels==2){
	HANDLE hStdout2=GetStdHandle(STD_OUTPUT_HANDLE);
     COORD position2={enemy_y1,enemy_x1};
 	SetConsoleCursorPosition(hStdout2,position2);
	cout<<"$";              //$ is an enemy of my game
	}
	// if(score == 182)
	// {
	// 	test=1;
	// 	system("cls");
	// 	break;
	// }
    //  if(pacman_x==enemy_x && pacman_y==enemy_y)
    //    {
	// 	   lives--;
	// 	   short pacman_x=13 , pacman_y=28; //initial position of pac-man(R)
	// short enemy_x=7 , enemy_y=7; //initial position of enemy(R)
	// 	   system("cls");
		   
	// 	   if(lives==0){
	// 	   test=2;
	//  system("cls");
	//  break;
	// 	   }
	//    }
   }
  if(test==1){
	  cout<<"\tYOU WIN"<<endl;

  }else 
  if(test==2){
	  	 cout<<"\tYOU LOSE"<<endl;
	 cout<<"\tYour Score is:"<<score<<endl;
  }
  system ("pause");
  
}
}