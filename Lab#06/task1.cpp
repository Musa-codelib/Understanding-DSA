#include <iostream>
using namespace std;

struct Student{
    string name;
    string faculty;
    int id;
    double gpa;
};

int partition(Student students[], int low, int high)
{
    int pivot= students[high].id;
    int i=low -1;
    
    for(int j=low; j<=high; j++)
{
        if (students[j].id<pivot)
    {
        i++;
        swap(students[i],students[j]);
    }  
}

swap(students[i+1],students[high]);
return (i+1);
}

void quicksort(Student students[],int low, int high)
{
if (low<high)
{
    int pi=partition(students,low,high);
    quicksort(students,low,pi-1);
    quicksort(students,pi+1,high);
}
}

int main()
{
    int n;
    cout<<"Enter the number of students. ";
    cin>>n;

    Student students[n];

    for (int i=0;i<n;i++)
    {
        cout<<"Enter the name of student "<<i+1<<endl;
        cin>>students[i].name;
        cout<<"Enter the ID of student "<<i+1<<endl;
        cin>>students[i].id;
        cout<<"Enter the faculty of student "<<i+1<<endl;
        cin>>students[i].faculty;
        cout<<"Enter the GPA of student "<<i+1<<endl;
        cin>>students[i].gpa;
        cout<<endl;
    }
    quicksort(students,0,n-1);

    cout<<"Sorted students based on ID are as: "<<endl;
    for (int i=0;i<n;i++)
    {
        cout<<"ID: "<<students[i].id<<", "<<"Faculty: "<<students[i].faculty<<", "<<"Name: "<<students[i].name<<", "<<"GPA score: "<<students[i].gpa<<endl;
    }
return 0;
}