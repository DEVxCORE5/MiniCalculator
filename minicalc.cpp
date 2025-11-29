#include <bits/stdc++.h>
using namespace std;

void calc()
{
    cout << "     WelCome to miniCalCulator "<<endl;
    cout << "<<------------------------------>>"<< endl;
       

    double num1, num2;
    char choice;

    while (1)
    {

        cout << "Enter  < + >  for Addition" << endl;
        cout << "Enter  < - >  for Subtraction" << endl;
        cout << "Enter  < * >  for Multiplication" << endl;
        cout << "Enter  < / >  for Division" << endl;
        cout << "Enter  < % >  for Modulus" << endl;
        cout << "Enter  < ^ >  for Power"<<endl;
        cout << "Enter  < E >  for Exit" << endl << endl;
            

        cout << "Enter your Choice : " << endl;
        cin >> choice;
         if (islower(choice)) choice = toupper(choice);
        system("cls");

        cout << "------------------------------" << endl
             << endl;

        switch (choice)
        {
            
               

        case '+':
        {
            cout << "Enter Two Number for Addition -> " << endl;
            cin >> num1;
            cin>>num2;
            cout << num1 << " + " << num2 << " = " << num1 + num2<<endl<<endl;
            break;
        }

        case '-':
        {
            cout << "Enter Two Number for Subtraction -> " << endl;
            cin >> num1;
            cin>>num2;
            cout << num1 << " - " << num2 << " = " << num1 - num2<<endl<<endl;
            break;
        }

        case '*':
        {
            cout << "Enter Two Number for Multiplication -> " << endl;
            cin >> num1;
            cin>>num2;
            cout << num1 << " * " << num2 << " = " << num1 * num2<<endl<<endl;
            break;
        }

        case '/':
        {
            cout << "Enter Two Number for Division -> " << endl;
            cin >> num1;
            cin>>num2;
            cout << num1 << " / " << num2 << " = " << num1 / num2<<endl<<endl;
            break;
        }

        case '%':
        {   
            int num1,num2;
            cout << "Enter Two Number for Modulus -> " << endl;
            cin >> num1;
            cin>>num2;
            cout << num1 << " % " << num2 << " = " << num1 % num2<<endl<<endl;
            break;
        }

         case '^':
        {   
            double base,power;
            cout << "Enter Two Number for Power -> " << endl;
            cin >> base;
            cin>>power;
            cout << base << " ^ " << power << " = " << pow(base,power)<<endl<<endl;
            break;
        }


        case 'E' :{
            cout<<"<--  Thank For Using This  --> " <<endl;
            exit(0);

        }

        default :{
                 cout<<"Please Enter valid Choice"<<endl<<endl;
            }



        }
    }
}

int main(){
    calc();
    return 0;


}