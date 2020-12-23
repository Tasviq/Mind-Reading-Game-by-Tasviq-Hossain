/*
Tasviq Hossain

This program can be used in a group setting where the moderator asks a question related to the audience
and fills in an invisble response. After the audience inputs the question, the answer appears which sparks curiousity,
skepticism, and inquisitve thinking from the audience.

Demo:
- Moderator thinks of a question related to the audience that he/she knows the answer to ("What someone is wearing")
- Moderator writes in an invisible answer by filling in the "petition" (Click '.' and then proceed to write the answer, the screen displays a random statement to disguise the answer, finish by clicking '!')
- Audience inputs their question after the prompt
- Answer displayed, this will prompt the audience to be surprised as the answer matches with reality.

A program that is used to demonstrate cognitive tendancies particularly when reacting to unexplicable things.
*/

#include <iostream>
#include <conio.h> //this header is needed to use _getch()
#include <string>
using namespace std;

int main () {
	
	cout << "Petition: ";
	char move = _getch(); //_getch loads move with one character that the user enters
			      		  //the code continues after one key is pressed
	char ans[] = {'h', 'e', ' ' , 'c','o','m', 'p','u','t','e','r',' ','i','s',' ','t','h','i','n','k','i','n','g'};
	int num_elements = sizeof(ans) / sizeof( ans[0] );
	char cheat[80] = {move};
		if(move == '.') 
		{
			cout << "T";
			for (int i = 0; i <= num_elements ; i++)
		   {
				move = _getch();
				cheat[i] = move;
				cout << ans [i];
				if (move == '!') 
				{
					cout << "!";
					break;
				}
			}
		
			string question;
			cout << "\nQuestion: ";
			cin >> question;
			cout << endl;
			cout << cheat;
		}
		
		else 
		{
			cout <<move;
			for (int x = 0 ; x<=100; x++) {
				char move = _getch();
			cout <<move; 
			if (move == '!')
				break;
		}
			string question;
			cout << "\nQuestion: ";
			cin >> question;
			cout << "Cant find answer.";
	
			
		}
		
		return 0;
}
