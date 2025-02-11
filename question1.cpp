

/*

#include <iostream>

using namespace std;

int main()
{




     int row =0;
int colum =0;

cout<<"enter no of rows";
cin>>row;
cout<<"enter no of elements you want in array";
cin>>colum;

int **twoD= new int *[row];

for(int i=0; i<row;i++){
twoD[i]=new int [colum];
}

for(int i=0; i<row;i++){
for(int j=0;j<colum;j++){

cout<<"enter values od 2d array for index  "<<"["<<i<<"]"<<"["<<j<<"] ";
int value=0;
cin>>value;
twoD[i][j]=value;

}
}


 cout << "2D array values are:" << endl;
 for (int i = 0; i < row; i++) {
 for (int j = 0; j < colum; j++) {
            cout << twoD[i][j] << " ";
        }
cout << endl;
    }

     for (int i = 0; i < row; i++) {
     int rowsum=0;
 for (int j = 0; j < colum; j++) {
rowsum+=twoD[i][j];}
cout<<"row  "<<i <<"  sum ="<<rowsum<<endl;}




     for (int i = 0; i < row; i++) {
     int colsum=0;
 for (int j = 0; j < colum; j++) {
colsum+=twoD[j][i];}
cout<<"colum "<<i <<"  sum ="<<colsum<<endl;}


    for (int i = 0; i < row; i++) {
        delete[] twoD[i];
    }
    delete[] twoD;

return 0;

}
*/

