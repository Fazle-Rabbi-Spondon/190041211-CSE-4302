#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

class Flight
{
private:
    int flight_number;
    char destination[30];
    float distance;
    float MaxFuelCapacity;

    float CalFuel (float distance)
    {
        if (distance<=1000) return 500.0;
        else if (distance>1000 && distance<=2000) return 1100.0;
        else if (distance>2000) return 2200.0;
    }

public :
    void FeedInfo ()
    {
        int a, i;
        float b;
        char p[30];
        cout<<"Flight Number: ";
        cin>>a;
        flight_number=a;
        cout<<"Destination: ";
        scanf("%s", p);
        for (i=0;i<strlen(p);i++)
        {
            destination[i]=p[i];
        }
        destination[i]='\0';
        cout<<"Distance: ";
        cin>>b;
        distance=b;
        cout<<"Maximum Fuel Capacity: ";
        cin>>b;
        MaxFuelCapacity=b;
    }

    void ShowInfo()
    {
        cout<<"Flight Number: "<<flight_number<<endl;
        printf("Destination: %s\n", destination);
         cout<<"Distance: "<<distance<<endl;
         cout<<"Maximum Fuel Capacity: "<<MaxFuelCapacity<<endl;
         int q=CalFuel(distance);
       //  cout<<q;
         if (q<=MaxFuelCapacity) cout<<"Fuel Capacity is fit for this flight";
         else cout<<"Not sufficient Fuel Capacity for this flight";
    }

};

int main ()
{
    Flight f;
    f.FeedInfo();
    f.ShowInfo();
}
