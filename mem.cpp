#include <iostream>
using namespace std;
int main()
{   
    cout<<"Welcome to the Memory Game!!!"<<endl<<endl;
    srand((unsigned) time(NULL));
    int a,b=0,gam,c, d;
    cout<<"Enter the size of an array 6-20:";
    cin>>a;
    system("clear");
    int num[a],num2[a];
    for(int i=0; i<a; i++){
        num[i]=0;
        num2[i]=0;
    }
    for(int i=0; i<a/2; i++)
        num[i]=rand() % 10;
    for(int i=a/2; i<a; i++)
    {
        gam=a/2 + rand() % a/2;
        if(num[gam]==0){
        num[gam]=num[b];
        b++;
        }
        else
        i--;
    }    

    gam=0;
    while(true)
    {
        cout<<"Here is an array: ";
        for(int i=0; i<a; i++)
        {
            cout<<num2[i]<<" ";
        }
        cout<<endl<<endl<<"Enter the index to show:";
        cin>>c;
        cout<<"The card at index "<<c<<" is "<<num[c-1];
        cout<<endl<<endl<<"Enter second index to show:";
        cin>>d;
        cout<<"The card at index "<<d<<" is "<<num[d-1];
        if(num[c-1]==num[d-1])
        {
            if(gam==a)
            {
            cout<<"Great! Cards are matched. ";
            break;
            }
            cout<<"Great! Cards are matched. Press Enter to continue..."<<endl;
            num2[c-1]=num[c-1];
            num2[d-1]=num[d-1];
            gam+=2;
        }
        else
            cout<<"Cards do not match. Try again! Press Enter to continue..."<<endl;
        getchar();
        getchar();
        
        system("clear");    
        if (gam==a)
            break;
    }
    cout<<"Congratulations you won";
}