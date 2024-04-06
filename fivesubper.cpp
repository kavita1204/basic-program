#include<iostream>
using namespace std;
int main()
{
    int hindi, eng, math, science, arts;
    cout<<"enter the hindi marks";
    cin>>hindi;
    cout<<"enter the eng marks";
    cin>>eng;
    cout<<"enter the math marks";
    cin>>math;
    cout<<"enter the science marks";
    cin>>science;
    cout<<"enter the arts marks";
    cin>>arts;
    float per;
    per= ((hindi + eng + math + science + arts)*100)/500;
    cout<<"five subject is"<<per<<"%";
    return 0;
}