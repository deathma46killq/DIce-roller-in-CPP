//PROJECT:dice roller
//LANGUAGE:C++
//PROGRAMMED BY:Sujal vishwakarma

#include<iostream>
#include<cstdlib>  //to use rand function and generate random number
#include<ctime>  //to use time as a sedd value in srand
using namespace std;


void list();   //list of the choices
int random();    //to generate a random number
 //int logic(int r1);    //main logic of program



int main(){
  int mychoice;   //choice of list

	cout<<"DICEROLLER"<<endl;
	
      
      label:
      list();

      cout<<"enter your choice"<<endl;

      cin>>mychoice;
  
     switch(mychoice)
     {
     	case 1:
     	cout<<random()<<endl;
     	break;

     	case 2:
     	exit(0);
     	break;

     	default:
     	cout<<"Invalid choice "<<endl;
     	goto label;
}

          char c1;
          label2:
     cout<<"you want to roll the dice again (y/n)"<<endl;
     cin>>c1;
     if(c1=='y')
     {
     	goto label;
     }
     else if(c1=='n'){
     	exit(0);
     }
     else{
     	cout<<"wrong input'''"<<endl;
     	goto label2;
     }
      
   
	return 0;
}
void list(){
	int lo;
	cout<<"1.roll the dice"<<endl;
	cout<<"2.exit"<<endl;

	
}

int random()
{
	int z;
	srand(time(0));
	z=rand()%7;  //generating random between 0 to 7
	return z;
	if (z==0)
	{
		return z+1;
	}
	  
	  
}
