#include<bits/stdc++.h>
using namespace std;

void pattern( int n)
{
   

    for(int i= 0; i<n ; i++)
    {  //space 
        
        for( int j=0 ; j<n-i-1; j++)
        { 
           cout << "  " ;}
            //number
            int start = 1 ;
          for( int j=0 ; j< 2*i+1; j++ )
          { if( j< (2*i+1)/2){

            cout << start << "  " ;
            start = start + 1 ;}

            else{

                cout << start << "  ";
                start = ( start - 1 ) ;
            }}
            //space
            for( int j=0 ; j< n-i-1 ; j++)
            {
              cout << " "; }
    cout << endl;
    }
}

int main(){
 
int num;

cout << "Enter any number :\n" ;
cin >> num;
pattern(num);

    return 0;
}