// return average of students grades

#include <iostream>
using namespace std;

int main() {
    int numOfStudents, count, curr, sum;
    double average;

    cout<<"Enter number of students: ";
    cin>>numOfStudents;

    cout<<"Enter students' grades separeted by space:"<<endl;

    sum=0;
    for (count = 1; count <= numOfStudents; count++)
    {
        cin>>curr;
        sum += curr;
    }
    
    average = (double)sum / (double)numOfStudents;

    cout<<"The average is "<<average<<endl;

    return 0;
}