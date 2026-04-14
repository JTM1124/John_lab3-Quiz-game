/*John Thomas Mathison 
CSCI 2000*/

#include <iostream> 
using namespace std; 

void question1();
void question2();
void question3();
void question4();
void question5();
int incorrect =0; 
char answer; 


int main()
{

	 question1();
	 question2();
     question3();
	 question4();
	 question5();
	 cout << "You got " << 5 - incorrect << " answers correct." << endl; 
	 return 0; 


}
void question1()
{
	cout << "What is ln(e)?" << endl; 
	cout << "A) 7" << endl; 
	cout << "B) 1" << endl; 
	cout << "C) 0" << endl; 
	cout << "D) -1" << endl; 
	cin >> answer; 
	if (answer != 'B' && answer != 'b')
	{
		incorrect = incorrect + 1;
	}
}
void question2()
{
	cout << "What is absolute zero." << endl; 
	cout << "A) 0 C" << endl; 
	cout << "B) 0 F" << endl; 
	cout << "C) 0 K" << endl; 
	cout << "D) -200 C" << endl; 
	cin >> answer; 
	if (answer != 'C' && answer != 'c')
	{
		incorrect = incorrect + 1; 
	}

}
void question3()
{
	cout << "Who wrote The Masque of the Red Death" << endl; 
	cout << "A) Shakespeare" << endl; 
	cout << "B) Samuel Taylor Coleridge" << endl; 
	cout << "C) William Blake" << endl; 
	cout << "D) Edgar Allan Poe" << endl; 
	cin >> answer; 
	if (answer != 'D' && answer != 'd')
	{
		incorrect = incorrect + 1; 
	}
}
void question4()
{
	cout << "A lepidopterist is someone who studies which typw of creature?" << endl; 
	cout << "A) Birds" << endl; 
	cout << "B) Ants" << endl; 
	cout << "C) Fish" << endl; 
	cout << "D) Butterflies" << endl; 
	cin >> answer;
	if (answer != 'D' && answer != 'd')
	{
		incorrect = incorrect + 1;
	}
}
void question5()
{
	cout << "What country is knows as the 'Emerald Isle'?" << endl; 
	cout << "A) Italy" << endl; 
	cout << "B) Mexico" << endl; 
	cout << "C) Ireland" << endl; 
	cout << "D) Colorado" << endl; 
	cin >> answer; 
	if (answer != 'C' && answer != 'c')
	{
		incorrect = incorrect + 1;
	}
}