#include<bits/stdc++.h>
#include <ctime>
using namespace std;
int main()
{
srand(time(0));
cout<<"Do you really think you can defeat me in Guess Cricket"<<endl;
cout<<"Ok then come on lets play a game noob"<<endl;
cout<<" Do you know the rules of the games "<<endl;
cout<< "  Press N for NO or any other key to start" << endl;
char check;
cin>>check;
if(check == 'N' || check == 'n')
{
	cout<<"Ok, the rules are quite simple,we will start with the toss , toss will be as follows"<<endl<<" I will ask you to pick a random number between 1 to 6. I will too pick up a random number between 1 to 6 now you need to bet whether sum of our choises is Even or Odd. The one who wins the toss will decide to Bat or Ball"<<endl;
	cout<< "Once the toss is done , the next rule to discuss is how to bat; again the rules are quite similar, one who will bat will choose random numbers between 1 to 6 and the bowler too will choose a  number between 1 and 6; If number matches batsman is out else and otherwise he will go on batting and set the target. i guess you will get more familiar once you start playing" << endl<< "are you ready to get defeated "<<endl;
}

	cout<< " Before the match starts lets decide the number of player that are gonna play from a single team " << endl;
	cout<< " ok Leader enter a number between 1-11, choose the number of player you want "<< endl;
       int players;
       cin >> players;
       cout << " so we are gonna play with " << players << " well lets proceed with the toss dude "<< endl;
       int toss;
       cout<< " As you are aware with toss rule, enter a number buddy between 1 to 6 " << endl;
       cin>> toss;
       int mtoss = 1+ (rand()%6);
       cout << " ok bro , i have also thought a number in my mind , guess work start, make a guess whether sum of our thought number is even or odd "<<endl;
       cout<< " press O for odd and E for even " << endl<< " don't worry i will not cheat "<< endl;
       char tosstime;
       cin >> tosstime;
       int factor =0;
       if ( tosstime == 'o' || tosstime == 'O' )
{
	if( ( toss + mtoss) % 2 == 0)
	{
		cout<<" ohh you lost the toss. now it is time to loss the match too . my guess number was "<<mtoss<<endl;
		factor=0;
	}
	else {
		cout << " how this happened , you won the toss , but don't dare to think that you won the match "<< endl;
                factor = 1;
	}
}
if ( tosstime == 'e' || tosstime == 'E' )
{
	if ( ( toss + mtoss)%2==0)
	{
		cout<< " how this happened , you won the toss , but don't dare to think that you won the match " << endl;
		factor = 1;
	}
	else 
	{
		cout << " count down of your lose has started, you have lost the toss, my guessed number was " << mtoss << endl;
		factor = 0;
	}
}
string choice;
int innings = 0;
      if ( factor == 1 )
{
 cout<< " ok leader , you have won the toss , its ur choise to decide whether to bat or ball "<<endl;
cout<< " enter BAT to do batting first or enter BALL to do bowling " << endl;
cin >> choice;
if ( choice == "BAT" || choice == "bat" || choice == "Bat")
{
	cout<<"so you have opted to bat first. let me get you out faster "<<endl;
        innings = 1;
}
else{
cout << " ok you have decided to ball first. let me send every ball out of stands"<< endl;
innings = 0;
}
}

      if ( factor == 0 )
{
 cout<< " ok leader , as always you have lost the toss , its my choice to decide whether to bat or ball "<<endl;
int decide = rand()%2;
if ( decide == 0)
{
	cout<<"so i have decided to ball first. let me get you out faster "<<endl;
        innings = 1;
}
else{
cout << " ok i have decided to bat first. let me send every ball out of stands"<< endl;
innings = 0;
}
}
int tplayers = players;
int sump= 0;
int sumc= 0;
int batsman;
int baller;
int arrayp[players];
int arrayc[players];
if( innings == 1 )
{
	while ( tplayers > 0 )
	{
	cout<< " ok here comes the batsman number  " << (players - tplayers+1) << endl;
	cout << " so here comes the first ball, guess the number Mr leader " << endl;
        batsman = 1;
	baller = 0;
	int single = 0;
	while ( batsman != baller )
	{
		cin >> batsman;
		if ( batsman > 0 && batsman < 7 )
		{
		baller = 1+ ( rand()%6);
		cout<<" ok so batsman is trying for "<<batsman<<" runs "<<endl;
	       cout<< " and the computer has thought the number "<< baller <<endl;
		if ( batsman != baller )
		{
			cout<<" what a shot champ, you scored "<<batsman<<" runs "<< endl;

			sump = sump + batsman ;
			single = single + batsman ;
			cout << " total score of the team is now "<< sump << " individual score of batsman is " << single << endl;
			cout<< " be ready for the next ball, enter a number again "<< endl;
		}

		else
		{ 
			cout<< " ohh so sad , that is the departure of the batsman , he has scored "<< single << " runs and the team score is "<<sump<< " for loss of "<< (players-tplayers+1)<< " wicket "<< endl;
			arrayp[(players-tplayers)]=single;
			tplayers--;
		}
	}
		else
		{
			cout<< " input between 1 to 6 dude, don't cheat " << endl;
			
	}
	}
	}
	
	cout << " And this is the end of first innings champ , nicely played "<< endl;

		cout<< " your team scoreboard is as follows " << endl;
	for ( int i = 0; i < players ; i++)
	{
		cout<< " Batsman "<< i+1<< "     =       " << arrayp[i]<< endl;
	}
	cout << " so the target is set champ.you have scored "<<sump<<" i need to score "<< sump+1<< " to win the match " << endl;
		cout<<"are you ready with the balls "<< endl;
tplayers= players;
	while ( tplayers > 0 && sumc <=sump  )
	{
	cout<< " ok here comes the batsman number  " << (players - tplayers+1) << endl;
	cout << " so here comes the first shot from me, guess the balling skill number from 1 to 6 Mr leader " << endl;
        batsman = 1;
	baller = 0;
	int single = 0;
	while ( batsman != baller )
	{
		cin >> baller;
		if( baller >0 && baller < 7)
		{
		batsman = 1+ ( rand()%6);
		cout<<" ok so you have decided to bowl with bowl number "<<baller<<endl;
	       cout<< " and i have hit the shot for  "<< batsman<<" runs" <<endl;
		if ( batsman != baller )
		{
			cout<<" that was a brilliant shot by me for  "<<batsman<<" runs "<< endl;

			sumc = sumc + batsman ;
			single = single + batsman ;
			cout << " total score of my team is now "<< sumc << " individual score of batsman is " << single << endl;
			
	if ( sumc > sump )
	{
			arrayc[(players-tplayers)]=single;
	break;		
	}
	cout<<" Type the next balling delivery dude "<< endl;
		}

		else
		{ 
			cout<< " that was really a nice delivery,i got out , my batsman  has scored "<< single << " runs and the team score is "<<sumc<< " for loss of "<< (players-tplayers+1)<< " wickets "<< endl;
			arrayc[(players-tplayers)]=single;
			tplayers--;
		}
	}
		else 
		{
			cout<< " enter a legit delivery , between 1 to 6 "<< endl;
		
		}
	}
}
if ( sumc>sump)
{
      cout<< " i told you champ, you gonna never win against me " <<endl;
      cout << " my team scoreboard is as follows "<< endl;
      for( int i = 0 ; i < players - tplayers+1 ; i++ )
      {
	     cout << "  Batsman "<< i+1 <<"      =      "<< arrayc[i]<<endl;
      }
     cout<<" enjoyed playing with you "<<endl;
}
else if( sumc<sump )
{
      cout<< "hard luck to myself. You really played well and deserved a win. " <<endl;
      cout << " My team scoreboard is as follows "<< endl;
      for( int i = 0 ; i < players; i++ )
      {
	     cout << "  Batsman "<< i+1 <<"      =      "<< arrayc[i]<<endl;
      }
     cout<<" enjoyed playing with you "<<endl;
}
else
{

      cout<< " its tie champ. Both of us looks great challenger to each other " <<endl;
      cout << " my team scoreboard is as follows "<< endl;
      for( int i = 0 ; i < players; i++ )
      {
	     cout << "  Batsman "<< i+1 <<"      =      "<< arrayc[i]<<endl;
      }
     cout<<" enjoyed playing with you "<<endl;
}
}
if( innings == 0)

{
	while ( tplayers > 0 )
	{
	cout<< " ok here comes the batsman number  " << (players - tplayers+1) << endl;
	cout << " so here comes the first shot from me, guess the balling skill number from 1 to 6 Mr leader " << endl;
        batsman = 1;
	baller = 0;
	int single = 0;
	while ( batsman != baller )
	{
		cin >> baller;
		if( baller >0 && baller < 7)
		{
		batsman = 1+ ( rand()%6);
		cout<<" ok so you have decided to bowl with bowl number "<<baller<<endl;
	       cout<< " and i have hit the shot for  "<< batsman<<" runs" <<endl;
		if ( batsman != baller )
		{
			cout<<" that was a brilliant shot by me for  "<<batsman<<" runs "<< endl;

			sumc = sumc + batsman ;
			single = single + batsman ;
			cout << " total score of my team is now "<< sumc << " individual score of batsman is " << single << endl;
			cout<< " type the next delivery champ "<< endl;
//	if ( sumc > sump )
//		break;
		}

		else
		{ 
			cout<< " that was really a nice delivery,i got out , my batsman  has scored "<< single << " runs and the team score is "<<sumc<< " for loss of "<< (players-tplayers+1)<< " wickets "<< endl;
			arrayc[(players-tplayers)]=single;
			tplayers--;
		}
	}
		else 
		{
			cout<< " enter a legit delivery , between 1 to 6 "<< endl;
		
		}
	}
	}
		cout << " And this is the end of first innings champ , i think it was a nice play, lets get ready for your innings. "<< endl;

		cout<< " My team scoreboard is as follows " << endl;
		for ( int i = 0; i < players ; i++)
	{
		cout<< " Batsman "<< i+1<< "     =       " << arrayc[i]<< endl;
	}
	cout << " so the target is set champ.I have scored "<<sumc<<" you need to score "<< sumc+1<< " to win the match " << endl;
		cout<<"are you ready with your poor cricketing shots "<< endl;
tplayers= players;
	while ( tplayers > 0 && sumc >=sump  )
	{
	cout<< " ok here comes the batsman number  " << (players - tplayers+1) << endl;
	cout << " so here comes the first ball, guess the number Mr leader " << endl;
        batsman = 1;
	baller = 0;
	int single = 0;
	while ( batsman != baller )
	{
		cin >> batsman;
		if ( batsman > 0 && batsman < 7 )
		{
		baller = 1+ ( rand()%6);
		cout<<" ok so batsman is trying for "<<batsman<<" runs "<<endl;
	       cout<< " and the computer has thought the number "<< baller <<endl;
		if ( batsman != baller )
		{
			cout<<" what a shot champ, you scored "<<batsman<<" runs "<< endl;

			sump = sump + batsman ;
			single = single + batsman ;
			cout << " total score of the team is now "<< sump << " individual score of batsman is " << single << endl;
			if(sump>sumc)
			{
			arrayp[(players-tplayers)]=single;		
				break;
			}
			cout<< " be ready for the next ball, enter a number again "<< endl;
		}

		else
		{ 
			cout<< " ohh so sad , that is the departure of the batsman , he has scored "<< single << " runs and the team score is "<<sump<< " for loss of "<< (players-tplayers+1)<< " wicket "<< endl;
			arrayp[(players-tplayers)]=single;
			tplayers--;
		}
	}
		else
		{
			cout<< " input between 1 to 6 dude, don't cheat " << endl;
			
	}
	}
	}
if ( sumc>sump)
{
      cout<< " i told you champ, you gonna never win against me " <<endl;
      cout << " your team scoreboard is as follows "<< endl;
      for( int i = 0 ; i < players ; i++ )
      {
	     cout << "  Batsman "<< i+1 <<"      =      "<< arrayp[i]<<endl;
      }
     cout<<" enjoyed playing with you "<<endl;
}
else if( sumc<sump )
{
      cout<< "hard luck to myself. You really played well and deserved a win. " <<endl;
      cout << " your  team scoreboard is as follows "<< endl;
      for( int i = 0 ; i < players-tplayers+1; i++ )
      {
	     cout << "  Batsman "<< i+1 <<"      =      "<< arrayp[i]<<endl;
      }
     cout<<" enjoyed playing with you "<<endl;
}
else
{

      cout<< " its tie champ. Both of us looks great challenger to each other " <<endl;
      cout << " your team scoreboard is as follows "<< endl;
      for( int i = 0 ; i < players; i++ )
      {
	     cout << "  Batsman "<< i+1 <<"      =      "<< arrayp[i]<<endl;
      }
     cout<<" enjoyed playing with you "<<endl;
}
}
return 0;
}
