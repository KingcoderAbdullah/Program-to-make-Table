#include <iostream> 

using namespace std; 

int main()
{ 
    int counter;
    int Number;
    int MaxMultiplier;

        cout<<"Enter the number which you want to get the table: ";
        cin>>Number;
        cout<<"Enter the max multiplier for your table: ";
        cin>>MaxMultiplier;
    for (counter= 1; counter<=MaxMultiplier; counter++)
    {
        cout<<Number<<"x"<<counter<<"="<<Number*counter<<endl;
    }

    int exit;
    cout<<"Type 0 to close the program: ";
    cin>>exit;

}




