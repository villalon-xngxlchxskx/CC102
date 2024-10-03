#include <iostream>

using namespace std;

int main ()

{
	string  nickname;
	string course;
	string school;
	
	cout << " Nickname: ";
	cin >> nickname ;
	cout << "Course - Year Level: " ;
	cin >> course;
	cout << "School:" ;
	cin >> school ;
	cout << "Wow Congrats " << nickname << "! " << course << " is a nice course. And you are studying in " << school<< " which is one of the Center Excellence in Tertiary Education." ;
	
	return 0;

}