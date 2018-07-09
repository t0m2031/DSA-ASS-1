#include <iostream>
using namespace std;

class student
{
    int dsa[30],i,j,n,sum,cnt[50],k,rn[30];             //data members
public:
    student()                                              //default constructor
    {
    float av;
        i=j=n=0;
        av=sum=k=0;
    }
    
    void acc_data()
{
    cout<<"\nHow many student in class? ";
    cin>>n;
    
    cout<<"\nEnter the marks scored for first test of subject DSA: ";
    
    cout<<"\n\nStudent who remains Absent for the test please enter -1 for them:";
    
    for(i=0;i<n;i++)
    {
     cout<<"\nEnter the marks of Roll no: "<<i+1<<" : ";
     cin>>dsa[i];
    }
}


    void repeat()
{
    for(i=0;i<50;i++)
    {
        cnt[i]=0;
    }
    for(i=0;i<50;i++)
    {
        for(j=0;j<n;j++)
        {
            if(dsa[j]==i)
            {
                cnt[i]=cnt[i]+1;
            }
        }
    }
    
    

    k=0;
    j=0;
        int max=cnt[j];
    for(i=0;i<50;i++)
    {
     if(cnt[i]>=max)
     {
         max=cnt[i];
         k=i;
     }
    }
    cout<<"\n\nMAximum marks "<<k<<" scored by "<<max <<" Students...\n";
    for(i=0;i<n;i++)
    {
        if(dsa[i]==k)
        {
            rn[j]=i;
            j++;
        }
    }
    cout<<"\n\n Students Roll Number are :";
    for(i=0;i<j;i++)
    {
        cout<<","<<rn[i]+1;
    }
}


void display()
{
    cout<<"\n\nFirst Test Marks of Subject DSA are as follows...\n";
    
    cout<<"  Roll No\t"<<" DSA Marks ";
    
    for(i=0;i<n;i++)
    {
        cout<<"\n  "<<i+1<<"\t\t"<<dsa[i]<<"\n";
    }
    
}

void avg()
{
    int p=0;
    float av;
    cout<<"\nAverage Score of Class =";
    for(i=0;i<n;i++)
    {
        if(dsa[i]!=-1)
        {
            sum=sum+dsa[i];
            p++;
        }

    }
    av=sum/p;
    cout<<av;
}


void Attend()
{
    int cnt=0;
    for(i=0;i<n;i++)
    {
        if(dsa[i]==-1)
        {
            cout<<i+1<<"\tAbsent\n";
            cnt++;
        }
    }
    cout<<"\n\tTotal_Absent_Student :=: "<<cnt;
}

void compare()
{
    int min=0;
    int max=0,rno=0,i=0;
    cout<<"\n\nHighest Score of the Class for DSA Subject are as follows..\n";
    max=dsa[i];
    for(i=0;i<n;i++)
    {
        if(dsa[i]==-1)
        {

        }
        else if(dsa[i]>=max)
        {
            max=dsa[i];
            rno=i;
        }
    }
    cout<<"\n\tDSA Highest Score: "<<"Roll No : "<<rno+1<<" Marks : "<<max;
    cout<<"\n\nLowest Score of the Class for DSA Subject are as follows..\n";
    rno=0;
    min=dsa[j];
    for(j=0;j<n;j++)
    {
        if(dsa[j]==-1)
        {

        }
        else if(dsa[j]<=min)
        {
         min=dsa[j];
         rno=j;
        }
    }
    cout<<"\n\tDSA Lowest Score: "<<"Roll No : "<<rno+1<<" Marks : "<<min;
}

};

int main()
{
    class student s;
    s.acc_data();
    s.display();
    s.avg();
    s.Attend();
    s.compare();
    s.repeat();
        return 0;
}
