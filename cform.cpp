#include<iostream>

using namespace std;


int main(){
	char t_ctitle[25], t_ccode[25] ,t_lecturer[25];
	int t_unit;
	
	cout<<"enter your course title";
	cin.getline(t_ctitle, 25);
	
	cout<<"enter your course code";
	cin.getline(t_ccode, 25);
	 
	cout<<"enter your lecturers name";
	cin.getline(t_lecturer, 25);
	 
	cout<<"enter your unit(press 0 to end)";
	cin>>t_unit;


	char t_ctitle2[25], t_ccode2[25] ,t_lecturer2[25];
	int t_unit2;
	cin.ignore();
	cout<<"enter your course title";
	cin.getline(t_ctitle2, 25);
	
	cout<<"enter your course code";
	cin.getline(t_ccode2, 25);
	 
	cout<<"enter your lecturers name";
	cin.getline(t_lecturer2, 25);
	 
	cout<<"enter your unit(press 0 to end)";
	cin>>t_unit2;


	char t_ctitle3[25], t_ccode3[25] ,t_lecturer3[25];
	int t_unit3;
	cin.ignore();	
	cout<<"enter your course title";
	cin.getline(t_ctitle3, 25);
	
	cout<<"enter your course code";
	cin.getline(t_ccode3, 25);
	 
	cout<<"enter your lecturers name";
	cin.getline(t_lecturer3, 25);
	 
	cout<<"enter your unit(press 0 to end)";
	cin>>t_unit3;


	cout<< "\n entered details are:\n";
	cout<< "course title:"<< t_ctitle<< endl;
	cout<< "course code:"<<t_ccode<< endl;
	cout<< "lecturers name:"<<t_lecturer << endl;
	cout<< "unit:"<<t_unit << endl;

	cout<< "\n entered details are:\n";
	cout<< "course title:"<< t_ctitle2<< endl;
	cout<< "course code:"<<t_ccode2<< endl;
	cout<< "lecturers name:"<<t_lecturer2 << endl;
	cout<< "unit:"<<t_unit2 << endl;

	cout<< "\n entered details are:\n";
	cout<< "course title:"<< t_ctitle3<< endl;
	cout<< "course code:"<<t_ccode3<< endl;
	cout<< "lecturers name:"<<t_lecturer3 << endl;
	cout<< "unit:"<<t_unit3 << endl;

	/*course code course title unit lecturers name 
	   cosc111     cprogramming  3    potato
	   cos112     c++programming  3   mensha
	   seng102    webdesign      3    pringle
	*/
	//Oghenewhogaga Akpotu Valentine
	//Akinrinde Teniola Leslie
}
