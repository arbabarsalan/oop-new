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


void print_student_info(students student[], int size) {
    cout << "\n============================================\n";
    cout << "         STUDENT MANAGEMENT SYSTEM          \n";
    cout << "============================================\n\n";

    cout << "------------------------------------------------------\n";
    cout << "  ID\tName\tAge\tGPA\tCredits\t\n";
    cout << "------------------------------------------------------\n";

    for (int i = 0; i < size; i++) {
        cout << "" << student[i].id <<"\t"<< student[i].name << "\t"<< student[i].age << "\t"<< student[i].gpa <<"\t"<< student[i].credits<<endl;
    }

    cout << "------------------------------------------------------\n";
}


void highest_gpa(students student[], int size) {
    float highest_gpa = student[0].gpa;
    int index = 0;

    for (int i = 1; i < size; i++) {
        if (student[i].gpa > highest_gpa) {
            highest_gpa = student[i].gpa;
            index = i;
        }
    }
    cout<<"*************student with highest gpa is**********";
    cout << "------------------------------------------------------\n";
    cout << "  ID\tName\tAge\tGPA\tCredits\t\n";
    cout << "------------------------------------------------------\n";
    cout << "" << student[index].id <<"\t"<< student[index].name << "\t"<< student[index].age << "\t"<< student[index].gpa <<"\t"<< student[index].credits<<endl;


}




void swaping (students student[],int size){

int max_credits=student[0].credits;
for(int j=0; j<size;j++)
for (int i = 0; i < size - j - 1; i++) {
if(student[i].credits<student[i+1].credits)
{
int temp_id,temp_age,temp_credits;float temp_gpa; char* temp_name;
temp_id=student[i].id;
student[i].id=student[i+1].id;
student[i+1].id=temp_id;

 temp_name = student[i].name;
 student[i].name=student[i+1].name;
 student[i+1].name=temp_name;

temp_age=student[i].age;
student[i].age=student[i+1].age;
student[i+1].age=temp_age;

temp_gpa=student[i].gpa;
student[i].gpa=student[i+1].gpa;
student[i+1].gpa=temp_gpa;

temp_credits=student[i].credits;
student[i].credits=student[i+1].credits;
student[i+1].credits=temp_credits;
}
}
}


int main()
{

cout<<"enter no of students data you want to have ";
int size=0;
cin>>size;

students *student= new students [size];

studentinfo ( student,size);
//highest_gpa(student,  size);
swaping (student, size);
 print_student_info(student,  size);


return 0;

}



