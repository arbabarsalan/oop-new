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
void studentinfo (  students *student, int size){

for (int i=0; i<size ; i++)
{

cout<<"enter student "<<i+1<<" id        ";cin>>(*(student+i)).id;
int ch;
cout<<"how many character does your name has?  ";cin>>ch;
cin.ignore();


// ******************dynamoc array for name****************
(*(student+i)).name= new char [ch+1];
cout<<"enter student "<<i+1<<" name       ";
cin.getline((*(student+i)).name,ch+1);



cout<<"enter student  "<<i+1<<" age       ";cin>>(*(student+i)).age;
cout<<"enter student "<<i+1<< " gpa       ";cin>>(*(student+i)).gpa;
cout<<"enter student "<<i+1<< " credits   ";cin>>(*(student+i)).credits;
cout<<endl;
}}


//***************************printing student info*************************
void print_student_info(students *student, int size) {
    cout << "\n============================================\n";
    cout << "         STUDENT MANAGEMENT SYSTEM          \n";
    cout << "============================================\n\n";

    cout << "------------------------------------------------------\n";
    cout << "  ID\tName\tAge\tGPA\tCredits\t\n";
    cout << "------------------------------------------------------\n";

    for (int i = 0; i < size; i++) {
        cout << "" << (*(student+i)).id <<"\t"<< (*(student+i)).name << "\t"<< (*(student+i)).age << "\t"<< (*(student+i)).gpa <<"\t"<< (*(student+i)).credits<<endl;
    }

    cout << "------------------------------------------------------\n";
}
//************************** printing info of student with highest gpa***************************************

void printing_highest_gpa_info (students *student ,int index){
cout<<"*************student with highest gpa is**********";
    cout << "------------------------------------------------------\n";
    cout << "  ID\tName\tAge\tGPA\tCredits\t\n";
    cout << "------------------------------------------------------\n";
    cout << "" << (*(student+index)).id <<"\t"<< (*(student+index)).name << "\t"<< (*(student+index)).age << "\t"<< (*(student+index)).gpa <<"\t"<< (*(student+index)).credits<<endl;
}

// ************ finding highest gpa***********************
void  finding_highest_gpa(students *student, int size) {
    float highest_gpa = (*(student)).gpa;
    int index = 0;

    for (int i = 1; i < size; i++) {
        if ((*(student+i)).gpa > highest_gpa) {
            highest_gpa = (*(student+i)).gpa;
            index = i;
        }
        else if ((*(student+i)).gpa==highest_gpa){
            cout<<"more than one student has highest gpa ( SAME GPA)";
            return;
        }
    }

    printing_highest_gpa_info (student , index);


}

//**************swaping**************** */
void swaping (students *student,int size){

int max_credits=(*(student)).credits;
for(int j=0; j<size;j++)
for (int i = 0; i < size - j - 1; i++) {
if((*(student+i)).credits<(*(student+i+1)).credits)
{
int temp_id,temp_age,temp_credits;float temp_gpa; char* temp_name;
temp_id=(*(student+i)).id;
(*(student+i)).id=(*(student+i+1)).id;
(*(student+i+1)).id=temp_id;

 temp_name = (*(student+i)).name;
 (*(student+i)).name=(*(student+i+1)).name;
 (*(student+i+1)).name=temp_name;

temp_age=(*(student+i)).age;
(*(student+i)).age=(*(student+i+1)).age;
(*(student+i+1)).age=temp_age;

temp_gpa=(*(student+i)).gpa;
(*(student+i)).gpa=(*(student+i+1)).gpa;
(*(student+i+1)).gpa=temp_gpa;

temp_credits=(*(student+i)).credits;
(*(student+i)).credits=(*(student+i+1)).credits;
(*(student+i+1)).credits=temp_credits;
}
}
}


void search ( students *student,int  size, int roll_no){

bool is_found=false;
int index=0;
for(int i=0; i<size;i++){
if((*(student+i)).id==roll_no){
is_found=true;
index=i;
}}
if(is_found){cout<<"*************student record of id "<< roll_no << " **********";
    cout << "------------------------------------------------------\n";
    cout << "  ID\tName\tAge\tGPA\tCredits\t\n";
    cout << "------------------------------------------------------\n";
    cout << "" << (*(student+index)).id <<"\t"<< (*(student+index)).name << "\t"<< (*(student+index)).age << "\t"<< (*(student+index)).gpa <<"\t"<< (*(student+index)).credits<<endl;
}
else{cout<<"no id found";}}

//************** updating*****************************
void updating ( students *student, int size , int roll_no){
bool is_found=false;
int index=0;
for(int i=0; i<size;i++){
if((*(student+i)).id==roll_no){
is_found=true;
index=i;
}}
if(is_found)
{cout<<"enter student "<<index+1<<" id        ";cin>>(*(student+index)).id;
int ch;
cout<<"how many character does your name has?  ";cin>>ch;
cin.ignore();
(*(student+index)).name= new char [ch+1];
cout<<"enter student "<<index+1<<" name       ";
cin.getline((*(student+index)).name,ch+1);
cout<<"enter student  "<<index+1<<" age       ";cin>>(*(student+index)).age;
cout<<"enter student "<<index+1<< " gpa       ";cin>>(*(student+index)).gpa;
cout<<"enter student "<<index+1<< " credits   ";cin>>(*(student+index)).credits;
cout<<endl;}
else{cout<<"no id found";}
}
//*************** deleting student data  *************************
void deleting (students *student, int size,int roll_no){
bool is_found=false;
int index=0;
for(int i=0; i<size;i++){
if((*(student+i)).id==roll_no){
is_found=true;
index=i;
}}
if(is_found){

//delete student[ind]

}


}
int main()
{

cout<<"Enter no of students data you want to have ";
int size=0;
cin>>size;

students *student= new students [size];

studentinfo ( student,size);

char choice;
cout<<"you you want to know the top performer?"<<endl<<" press 'y' or 'Y' for yes and 'n' or 'N' for no"<<endl; cin>>choice;

switch (choice)
{
case 'y':
finding_highest_gpa (student,  size) ;
    break;
case 'Y':
finding_highest_gpa(student,  size) ;
break;
case 'n': break;
case 'N': break;
default:
cout<<"invalid choice";
    break;
}



char choice1;
cout<<"you you want to search a specific student? "<<endl<<" press 'y' or 'Y' for yes and 'n' or 'N' for no"<<endl; cin>>choice1;

switch (choice1)
{
case 'y':
int roll_no;
cout<<"enter the id of student you want to search";cin>>roll_no;
search ( student, size,  roll_no);
    break;
case 'Y':

cout<<"enter the id of student you want to search";cin>>roll_no;
search ( student, size,  roll_no);
    break;
case 'n': break;
case 'N': break;
default:
cout<<"invalid choice";
    break;
}







char choice2;
cout<<"you you want to update a specific student data? "<<endl<<" press 'y' or 'Y' for yes and 'n' or 'N' for no"<<endl; cin>>choice2;

switch (choice2)
{
case 'y':
int roll_no;
cout<<"enter the id of student you want to update";cin>>roll_no;
updating ( student,  size ,  roll_no);
    break;
case 'Y':

cout<<"enter the id of student you want to update";cin>>roll_no;
updating ( student,  size , roll_no);
    break;
case 'n': break;
case 'N': break;
default:
cout<<"invalid choice";
    break;
}










cout<<"printing student info BEFORE arranging in decending order"<<endl<<"*********************************************************"<<endl<<"**************************************************************"<<endl<<endl;
print_student_info(student,  size);
cout<<"printing student info AFTER arranging in decending order"<<endl<<"*********************************************************"<<endl<<"**************************************************************"<<endl<<endl;
swaping (student, size);
print_student_info(student,  size);

delete[] student;
cout<<student[0].age<<"akjdagdkj";

return 0;

}



