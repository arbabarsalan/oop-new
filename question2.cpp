#include <iostream>

using namespace std;




//****************structure**********************
struct students {

int id;
char *name;
int age;
float gpa;
int credits;

};



// *************function for input*********************
void studentinfo (  students student[], int size){

for (int i=0; i<size ; i++)
{

cout<<"enter student "<<i+1<<" id        ";cin>>student[i].id;
int ch;
cout<<"how many character does your name has?  ";cin>>ch;
cin.ignore();


// ******************dynamoc array for name****************
student[i].name= new char [ch+1];
cout<<"enter student "<<i+1<<" name       ";
cin.getline(student[i].name,ch+1);



cout<<"enter student  "<<i+1<<" age       ";cin>>student[i].age;
cout<<"enter student "<<i+1<< " gpa       ";cin>>student[i].gpa;
cout<<"enter student "<<i+1<< " credits   ";cin>>student[i].credits;
cout<<endl;
}}




// **********************student detail printing function****************************



/*
void print_student_info ( students student[],int size)
{
  for(int i=0; i<size; i++)
{
cout<< "student "<<i+1<<" id      = "<< student[i].id<<endl;
cout<< "student "<<i+1<<" name    = "<< student[i].name<<endl;
cout<< "student "<<i+1<<" age     = "<< student[i].age<<endl;
cout<< "student "<<i+1<<" gpa     = "<< student[i].gpa<<endl;
cout<< "student "<<i+1<<" credits = "<< student[i].credits<<endl;
}}
*/

void print_student_info(students student[], int size) {
    cout << "\n============================================\n";
    cout << "         STUDENT MANAGEMENT SYSTEM          \n";
    cout << "============================================\n\n";

    cout << "------------------------------------------------------\n";
    cout << "  ID    |   Name       |  Age  |  GPA  |  Credits  \n";
    cout << "------------------------------------------------------\n";

    for (int i = 0; i < size; i++) {
        cout << "  " << student[i].id << "    |   "
             << student[i].name << "    |   "
             << student[i].age << "    |  "
             << student[i].gpa << "   |    "
             << student[i].credits << endl;
    }

    cout << "------------------------------------------------------\n";
}


int main()
{

cout<<"enter no of students data you want to have ";
int size=0;
cin>>size;

students *student= new students [size];

studentinfo ( student,size);
print_student_info(student,size);


return 0;

}



