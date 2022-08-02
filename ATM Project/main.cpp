#include <iostream>
#include <string>
#include <windows.h>

using namespace std;


  void Account ( int ID , float balance ) { cout << " your ID is : " << ID << endl << " your balance is " << balance << endl ; }
  float  Deposit ( float balance ) { float Money ; cout << " Enter the number " ;      cin  >> Money ;      balance = balance + Money ;     cout << endl << "Successful Operation" << endl << " Your balance is : " <<  balance << endl ; return ( balance) ; }
  float  Withdrawal ( float balance ) { cout << " Enter the number " ;     float Money;  Again : cin  >> Money ;      if ( balance >= Money ){     balance = balance - Money ;      cout << endl << "Successful Operation" << endl << " Your balance is : " <<  balance << endl ; }
                                    else { cout << " you don't have that amount of money in your account please try again" << endl ;     goto Again ; }  return ( balance ); }
  void Transfer ( float *balance1 , float *balance2 ) { cout << " Enter the number " ;  float Money ;    Again  : cin  >> Money ;      if ( *balance1 >= Money ){     *balance1 = *balance1 - Money ;  *balance2 = *balance2 + Money ;   cout << endl << "Successful Operation" << endl << " Your balance is : " <<  *balance1 << endl ; }
                                    else { cout << " you don't have that amount of money in your account please try again" << endl ;     goto Again ; }}
  void choicec (){cout << " please Choose an option :  1 : Account     2 : Deposit     3 : Withdrawal      4 : Transfer    5 : Another ID    6 : End " << endl  ;}



int main()
{   cout << "                                                                                                       ASU ATM  " << endl ;
    int ID , i , option ;
    float balance1 = 3980 , balance2 = 5830 , balance3 = 1700 , balance4 = 5999 , Money ;

    while (1){

    id : cout << " Please Enter your ID : " ;      { cin >> ID ;   i++; }


    switch ( ID ) {

                case 180467 : choice : choicec()  ;      cin >> option ;

    switch ( option ) {

       case 1 :    Account ( ID , balance1 ) ;         goto choice ;
       case 2 : balance1 = Deposit ( balance1 );       goto choice ;
       case 3 : balance1 = Withdrawal ( balance1 ) ;   goto choice ;
       case 4 : id2 :cout << " Please choose an ID :  " ;  cin >> ID ;       switch ( ID ) {

                        case 284017 : Transfer ( &balance1 , &balance2 );         goto choice ;
                        case 295730 : Transfer ( &balance1 , &balance3 );         goto choice ;
                        case 164028 : Transfer ( &balance1 , &balance4 );         goto choice ;
                        default : cout << " Wrong ID please try again " << endl ;    goto id2 ;

                                                                                       }
       case 5 : goto id  ;
       case 6 : cout << " Bye :) " << endl ; return 0 ;
       default : cout << " Wrong choice : " ;  goto choice;
                      }

                case 284017 : choice2 : choicec() ;      cin >> option ;

    switch ( option ) {

       case 1 :    Account ( ID , balance2 ) ;         goto choice2 ;
       case 2 : balance2 = Deposit ( balance2 );       goto choice2 ;
       case 3 : balance2 = Withdrawal ( balance2 ) ;   goto choice2 ;
       case 4 : id3 :cout << " Please choose an ID :  " ;  cin >> ID ;       switch ( ID ) {

                        case 180467 : Transfer ( &balance2 , &balance1 );         goto choice2 ;
                        case 295730 : Transfer ( &balance2 , &balance3 );         goto choice2 ;
                        case 164028 : Transfer ( &balance2 , &balance4 );         goto choice2 ;
                        default : cout << " Wrong ID please try again " << endl ;    goto id3  ;

                                                                                       }
       case 5 : goto id  ;
       case 6 : cout << " Bye :) " << endl ; return 0 ;
       default : cout << " Wrong choice : " ;  goto choice2;
                      }

                case 295730 : choice3 : choicec() ;    cin >> option ;

    switch ( option ) {

       case 1 :    Account ( ID , balance3 ) ;         goto choice3 ;
       case 2 : balance3 = Deposit ( balance3 );       goto choice3 ;
       case 3 : balance3 = Withdrawal ( balance3 ) ;   goto choice3 ;
       case 4 : id4 :cout << " Please choose an ID :  " ;  cin >> ID ;       switch ( ID ) {

                        case 180467 : Transfer ( &balance3 , &balance1 );         goto choice3 ;
                        case 284017 : Transfer ( &balance3 , &balance2 );         goto choice3 ;
                        case 164028 : Transfer ( &balance3 , &balance4 );         goto choice3 ;
                        default : cout << " Wrong ID please try again " << endl ;    goto id4  ;

                                                                                       }
       case 5 : goto id  ;
       case 6 : cout << " Bye :) " << endl ; return 0 ;
       default : cout << " Wrong choice : " ;  goto choice3;
                      }

                case 164028 :choice4 : choicec() ;      cin >> option ;

    switch ( option ) {

       case 1 :    Account ( ID , balance4 ) ;         goto choice4 ;
       case 2 : balance4 = Deposit ( balance4 );       goto choice4 ;
       case 3 : balance4 = Withdrawal ( balance4 ) ;   goto choice4 ;
       case 4 : id5 :cout << " Please choose an ID :  " ;  cin >> ID ;       switch ( ID ) {

                        case 180467 : Transfer ( &balance4 , &balance1 );         goto choice4 ;
                        case 284017 : Transfer ( &balance4 , &balance2 );         goto choice4 ;
                        case 295730 : Transfer ( &balance4 , &balance3 );         goto choice4 ;
                        default : cout << " Wrong ID please try again " << endl ;    goto id5  ;

                                                                                       }
       case 5 : goto id  ;
       case 6 : cout << " Bye :) " << endl ; return 0 ;
       default : cout << " Wrong choice : " ;  goto choice4;
                      }



    default : if ( i < 3 ) {  cout << " Wrong ID please try again  " << i << "/3" << endl ;    goto id ;  }
              else {  cout << " Wrong ID   "<< i << "/3" << endl << " your attempts are over please wait for 5 seconds and try again " << endl ;
                       Sleep ( 5000 ) ; i = 0 ; goto id ;  }

                  }

    }
    return 0;
}
