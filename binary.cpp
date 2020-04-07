#include <iostream>  
using namespace std;  
int main()  
{  
int a[50], n, i;    //array
cout<<"\nEnter the number to convert: ";    
cin>>n;    
for(i=0; n>0; i++)    //loop to convert to binary 
{    
a[i]=n%2;    
n= n/2;  
}    
cout<<"\nBinary of the given number= ";    
for(i=i-1 ;i>=0 ;i--)    //loop to print array
cout<<a[i];    

cout<<endl<<endl;
return 0;
}  
