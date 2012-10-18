#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

class Date
{
	int day1,day2;
	int month1,month2;
	int year;
	
public:
	Date(){day1=0;day2=0;month1=0;month2=0;year=0;}
	void set_date(char*d, char*m, char*y)
	{

		if( d[2]!='\0' || m[2]!='\0' || y[4]!='\0' || ((int)d[0]-48)>3 || ((int)d[1]-48)>9 || (((int)m[0]-48)>1 && ((int)m[1]-48)>9)     
			
			||  (((int)d[0]-48)==3 && ((int)d[1]-48)==1 && ((int)m[1]-48)%2==0) ||   (((int)m[0]-48)==1 && ((int)m[1]-48)>2 ) 
			
			||  (((int)d[0]-48)==2 && ((int)d[1]-48)>8  && ((int)m[0]-48)==0  &&  ((int)m[1]-48)==2   &&  ((int)y[3]-48)%4==0)  
			
			||  (((int)d[0]-48)>2 && ((int)d[1]-48)>9  && ((int)m[0]-48)==0  &&  ((int)m[1]-48)==2   &&  ((int)y[3]-48)%4!=0))
			
		
		{
		
			cout<<"Oblom!";
		}
		else
		{
		
			cout<<"!!!";
		}

	}

	void riznytsya()
	{
		int mass[6]={11,10,2012,15,12,2010};
		int q=0;
		cout<<"Start"<<" d1: "<<mass[3]<<" m1: "<<mass[4]<<" y1: "<<mass[5]<<" d2: "<<mass[0]<<" m2: "<<mass[1]<<" y2: "<<mass[2]<<"\n\n";
		
		while(1)
		{
			cout<<"While-1\n\n";
			if(mass[3]==1 && mass[4]==1)
				{
					mass[3]=31;
					mass[4]=12;
					mass[5]--;
					mass[3]--;
					if(mass[0]==mass[3] && mass[1]==mass[4] && mass[2]==mass[5])
						break;
					q=q+2;
					cout<<"1 "<<" d1: "<<mass[3]<<" m1: "<<mass[4]<<" y1: "<<mass[5]<<" d2: "<<mass[0]<<" m2: "<<mass[1]<<" y2: "<<mass[2]<<"\n\n";
				}
			else if(mass[3]==1 && mass[4]!=1 && mass[4]%2==0)
			
				{
						mass[3]=31;
						mass[4]--;
						mass[3]--;
						if(mass[0]==mass[3] && mass[1]==mass[4] && mass[2]==mass[5])
						break;
						q=q+2;
				
						cout<<"2 "<<" d1: "<<mass[3]<<" m1: "<<mass[4]<<" y1: "<<mass[5]<<" d2: "<<mass[0]<<" m2: "<<mass[1]<<" y2: "<<mass[2]<<"\n\n";
				}
				
			else if(mass[3]==1 && mass[4]!=1 && mass[4]%2!=0 && mass[4]!=3)
				{
					mass[3]=30;
					mass[4]--;
					mass[3]--;
					if(mass[0]==mass[3] && mass[1]==mass[4] && mass[2]==mass[5])
					break;
					q=q+2;
				
					cout<<"3 "<<" d1: "<<mass[3]<<" m1: "<<mass[4]<<" y1: "<<mass[5]<<" d2: "<<mass[0]<<" m2: "<<mass[1]<<" y2: "<<mass[2]<<"\n\n";
				}
			else if(mass[3]==1 && mass[4]!=1 && mass[4]==3 && mass[5]%4==0)
				{
					mass[3]=29;
					mass[4]--;
					mass[3]--;
					if(mass[0]==mass[3] && mass[1]==mass[4] && mass[2]==mass[5])
					break;
					q=q+2;
					
					cout<<"4 "<<" d1: "<<mass[3]<<" m1: "<<mass[4]<<" y1: "<<mass[5]<<" d2: "<<mass[0]<<" m2: "<<mass[1]<<" y2: "<<mass[2]<<"\n\n";
				}
			else if(mass[3]==1 && mass[4]!=1 &&  mass[4]==3 && mass[5]%4!=0)
				{
					mass[3]=28;
					mass[4]--;
					mass[3]--;
					if(mass[0]==mass[3] && mass[1]==mass[4] && mass[2]==mass[5])
					break;
					q=q+2;
					
					cout<<"5 "<<" d1: "<<mass[3]<<" m1: "<<mass[4]<<" y1: "<<mass[5]<<" d2: "<<mass[0]<<" m2: "<<mass[1]<<" y2: "<<mass[2]<<"\n\n";
				}
			else
			{
				mass[3]--;
			
				if(mass[0]==mass[3] && mass[1]==mass[4] && mass[2]==mass[5])
					break;
				q++;
					
				
			}

		}

		cout<<q;
	}
};

void main()
{
	int kor;

	Date d;

	//d.set_date("29","02","1987");
	d.riznytsya();

	cin>>kor;
}

