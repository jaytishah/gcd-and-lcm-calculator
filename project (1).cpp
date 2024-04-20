#include<iostream>
using namespace std;
class calculator
{
   private:
   int num1,num2;
   public:
    calculator(int n1,int n2)
    {
        num1=n1;
        num2=n2;
    }
   int calHCF() 
   {
    int hcf;
    int min=(num1<num2)?num1:num2;
    for(int i=min;i>=1;i--)
    {
        if(num1%i==0 && num2%i==0)
        {
            hcf=i;
           break;
        }
    }
    return hcf;
   }
   int calLCM()
   {
    int lcm;
    int max=(num1>num2)?num1:num2;
    while(1)
    {
        if(max%num1==0 && max%num2==0)
        {
            lcm=max;
            break;
        }
        max++;
    }
    return lcm;
   }
};
int main()
{
    int choice,num1,num2;
    cout<<"\t\t\t CALCULATOR OF LCM AND HCF OF TWO NUMBERS"<<endl;
    calculator calc(num1,num2);
    cout<<"CHOICES : "<<endl;
    cout<<"Enter 1 : calculate LCM"<<endl;
    cout<<"Enter 2 : calculate HCF"<<endl;
    cout<<"Enter 3 : calculate LCM and HCF"<<endl;
    cout<<"Enter 4 : Exit"<<endl;
    while(1)
    {
        cout<<"\n\nEnter number 1 :"<<endl;
        cin>>num1;
        cout<<"Enter number 2 :"<<endl;
        cin>>num2;
        calculator calc(num1,num2);
        cout<<"Enter your choice"<<endl;
        cin>>choice;
    
        switch(choice) 
        {
            case 1:
                cout<<"LCM of "<<num1<<" and "<<num2<<" is "<<calc.calLCM()<<endl;
                break;
        
            case 2:
                cout<<"HCF of "<<num1<<" and "<<num2<<" is "<<calc.calHCF()<<endl;
                break;
        
            case 3:
                cout<<"LCM of "<<num1<<" and "<<num2<<" is "<<calc.calLCM()<<endl;
                cout<<"HCF of "<<num1<<" and "<<num2<<" is "<<calc.calHCF()<<endl;
                break;
            
            case 4:
                cout<<"Thank You!"<<endl;
                return 0;
        
            default:
                cout<<"Invalid choice"<<endl;
                break;
       }
    }
}
//23CS086 - Jayti Shah
//23CS088 - Niyati Shah