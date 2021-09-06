#include<iostream>
#include<windows.h>
using namespace std;  
struct Bank{ 
   string name,newname,details; 
   int amount,newamount,newage,age,account,pin,withdraw,deposit,back,transfer,input,checkdetails,newpin; 
}; 
int main(){  
Bank p,p1,p2,p3; p.account;
{ cout<<"|**STATE BANK OF PAKISTAN**|"<<endl;
p1.account=1;    p1.pin=110; 
p2.account=2;    p2.pin=111;
p3.account=3;   p3.pin=112;
cout<<p1.account<<endl; p1.name="|***FAREED***|";  cout<<p1.name<<endl;
cout<<p2.account<<endl; p2.name="|***NOMAN ABRO***|"; cout<<p2.name<<endl;
cout<<p3.account<<endl; p3.name="|***ALI RAZA***|"; cout<<p3.name<<endl;
again: //from here we can be back as we have used goto label here.
	cout<<"Please Entre Account"<<endl;
cin>>p.account;}   //Now from here which account Do you want to access
if(p.account==1){  
cout<<p1.account; 
p1.pin;  
cout<<"Please Entre Pin"<<endl;
cin>>p1.pin;   //here it is the pin of user 1: 
if(p1.pin!=110){ 
cout<<"please put valid Pin"<<endl; Beep(1123,200);Beep(1003,500);Beep(1123,800);Beep(23,200);
goto again; }  
if(p1.pin==110){ 
again12:
	system("cls");
cout<<"Account"<<p1.account<<endl;
p1.details="information"; //Now we have details of customer account
cout<<"Details="<<p1.details<<endl;
p1.name = "FAREED"; 
cout<<"Candidate Name="<<p1.name<<endl;
p1.age=24;  
cout<<"Age of Candidate:"<<p1.age<<endl;
p1.amount=12000; 
cout<<"Stored Amount="<<p1.amount<<endl; 
cout<<"Amount Transfered To Any Of Two Account:"<<endl; 
p1.transfer; 
cout<<p1.amount-p1.transfer<<endl;
cout<<"Amount Received from P2 Account:"<<endl; 
p2.transfer;
cout<<p2.transfer+p1.amount<<endl;
cout<<"Amount Received From p3 Account"<<endl;
p3.transfer; 
cout<<p3.transfer+p1.amount<<endl;
system("pause");
p1.withdraw; 
p1.deposit; 
p1.transfer; 
p1.input;  again1: //Now this time goto statement start from p1 account not from p.account 
{ system("cls");
cout<<"1) p1.withdraw"<<endl; 
cout<<"2) p1.deposit"<<endl; 
cout<<"3) p1.transfer"<<endl; 
cout<<"4) p1.changedetails"<<endl;  
cout<<"5) p1.checkdetails"<<endl;
//We have used input to access which thing we are going to do first.
cin>>p1.input;} 
if(p1.input==1){ 
cout<<p1.withdraw<<endl;
system("cls"); //Here we have clear screen mode
cout<<"Entre Value For Withdraw:";
cin>>p1.withdraw; 
cout<<"Value:"<<p1.withdraw<<endl;
if(p1.withdraw>=1&&p1.withdraw<=12000){ 
cout<<"You have succesfully withdrwed: "<<p1.withdraw<<endl; 
cout<<"Remaining Balance:"<<p1.amount-p1.withdraw<<endl;
system("pause");
goto again1; //goto statement For P1.Account
} 
else{ 
cout<"You have insufficient amount to withdraw!";  
cout<<"PLEASE GO BACK!"<<endl; 
system("pause");
goto again1;   //goto statement For P1.Account
} 
 p1.back;
 cout<<"Press Zero to go BAck!"<<endl; //go back statement
 cin>>p1.back; 
 if(p1.back==0){ Beep(1123,200);Beep(1003,500);Beep(1123,800);Beep(23,200);
 goto again1;
 } }
 if(p1.input==2){ 
cout<<p1.deposit<<endl;   //deposit option
system("cls"); 
cout<<"Entre value for deposit:"<<endl; 
cin>>p1.deposit; 
cout<<"Value:"<<p1.deposit<<endl;
cout<<"Amount Added:"<<p1.amount+p1.deposit<<endl; //Amount and Deposit addition
system("pause");
goto again1;}
if(p1.input==3){
     cout<<"Entre Account in which Do you want to transfer Amount?"<<endl; 
cin>>p.account; 
if(p.account==2){ 
cout<<"INSERT PIN AGAIN TO VERIFY ACCOUNT"<<endl;
cin>>p2.pin;
if(p2.pin!=111){ 
cout<<"please Insert Valid Pin"<<endl; 
cout<<"try again"<<endl; Beep(1123,200);Beep(1003,500);Beep(1123,800);Beep(23,200);
system("pause");
goto again1;
} 
if(p2.pin==111){ system("cls");
cout<<"Transfer :"<<endl; 
p1.transfer;
p1.amount; 
cout<<"BALANCE IN YOUR ACCOUNT:"<<endl;
cout<<p1.amount<<endl;
p1.amount==p1.transfer; 
cout<<"Insert Amount You Want To Transfer:"<<endl;
cin>>p1.transfer;
if(p1.transfer<=12000){  
cout<<"Entre Account   you want to transfer Amount?"<<endl; 
cout<<"Entre P2 Account Amount:"<<endl; 
p2.amount=16000; 
p1.transfer;
cout<<"Amount of P2 Account Before Addition Of Transfered Amount:"<<endl; 
cout<<p2.amount<<endl; 
cout<<"Transfered Amount:"<<endl; 
cout<<p1.transfer+p2.amount<<endl; 
cout<<"Remaining Amount In P1 Account:"<<endl; 
cout<<p1.amount-p1.transfer<<endl;
system("pause");
goto again1;}} 
else{ 
cout<<"You Have Entered Insufficient Amount For Transfer:"<<endl; 
cout<<"Please Go Back And Try Again:"<<endl;
system("pause");
goto again1;
} } 
if(p.account==3){ 
system("cls"); 
cout<<"INSERT PIN AGAIN TO VERIFY ACCOUNT"<<endl;
cin>>p3.pin;
if(p3.pin!=112){ 
cout<<"please Insert Valid Pin"<<endl; 
cout<<"try again"<<endl; Beep(1123,200);Beep(1003,500);Beep(1123,800);Beep(23,200);
system("pause");
goto again1;
} 
if(p3.pin==112){ system("cls");
cout<<"Transfer :"<<endl; 
p1.transfer;
p1.amount; 
cout<<"BALANCE IN YOUR ACCOUNT:"<<endl;
cout<<p1.amount<<endl;
p1.amount==p1.transfer; 
cout<<"Insert Amount You Want To Transfer:"<<endl;
cin>>p1.transfer;
if(p1.transfer<=12000){  
cout<<"Entre Account   you want to transfer Amount?"<<endl; 
cout<<"Entre P2 Account Amount:"<<endl; 
p3.amount=18000; 
p1.transfer;
cout<<"Amount of P3 Account Before Addition Of Transfered Amount:"<<endl; 
cout<<p3.amount<<endl; 
cout<<"Transfered Amount:"<<endl; 
cout<<p1.transfer+p3.amount<<endl; 
cout<<"Remaining Amount In P1 Account:"<<endl; 
cout<<p1.amount-p1.transfer<<endl;
system("pause");
goto again1;}} 
else{ 
cout<<"You Have Entered Insufficient Amount For Transfer:"<<endl; 
cout<<"Please Go Back And Try Again:"<<endl;
system("pause");
goto again1;
 } } }  
if(p1.input==4){ 
cout<<"Details of a User:"<<endl;  
cout<<"Once Again you can see Details!"<<endl;  
cout<<"Name of User:"<<endl;        //Now Here We Put Name Of New User
p1.newname;
cin>>p1.newname; 
p1.name;
p1.newname==p1.name;
cout<<"PLease Entre New Name of User:"<<p1.newname<<endl;
p1.newage;                   
cout<<"Please Entre New Age of User:"<<endl;         //Now Here We Put Age Of Same User
cin>>p1.newage;
cout<<"New Age of User:"<<p1.newage<<endl; 
p1.newamount;
cout<<"Please Entre New Amount of User:"<<endl;       //Now Here We Put Amount Of Same User
cin>>p1.newamount;
cout<<"New Amount of User:"<<p1.newamount<<endl;
 p1.newpin;
cout<<"Please Entre New Pin of User:"<<endl;       //Now Here We Put Pin Of Same User
cin>>p1.newpin;
cout<<"New Amount of User:"<<p1.newpin<<endl; 
if(p1.newpin==0){ 
p1.pin; 
p1.newpin; 
p1.pin==p1.newpin; 
cout<<"New Pin:"<<endl;
system("pause");
goto again13;
}
{ again13:
system("cls");
p1.name;
p1.newname==p1.name;
 cout<<"|**STATE BANK OF PAKISTAN**|"<<endl;
 cout<<"|**"<<p1.newname<<"**|"<<endl;
 cout<<"|**"<<p2.name<<"**|"<<endl;
 cout<<"|**"<<p3.name<<"**|"<<endl;
system("pause");
 } 
goto again1; 
} if(p1.input==5){ 
system("cls");
cout<<"Here you can check your changings:"<<endl;     //In this Part We Can See Our Changings
cout<<"New Name of a User:"<<endl; 
cout<<p1.newname<<endl; 
cout<<"New Age of a User:"<<endl; 
cout<<p1.newage<<endl; 
cout<<"New Amount of a User:"<<endl; 
cout<<p1.newamount<<endl; 
cout<<"New Pin Of User :"<<p2.newpin<<endl; 
cout<<"Now Go to Old User Details:"<<endl;          //Now Compare Changings With Old User Details
system("pause");
goto again12;
} 
} 
if(p1.input==0){ cout<<"back"<<endl; Beep(1123,1124);Beep(23,124);
goto again;
}
}      
if(p.account==2){ 
cout<<p2.account; 
p2.pin;  
cout<<"Please Entre Pin"<<endl;
cin>>p2.pin;   //here it is the pin of user 1: 
if(p2.pin!=111){ 
cout<<"please put valid Pin"<<endl; Beep(1123,200);Beep(1003,500);Beep(1123,800);Beep(23,200);
goto again; }  
if(p2.pin==111){ 
again21:
	system("cls");
cout<<"Account"<<p2.account<<endl;
p2.details="information"; //Now we have details of customer account
cout<<"Details="<<p2.details<<endl;
p2.name = "NOMAN ABRO"; 
cout<<"Candidate Name="<<p2.name<<endl;
p2.age=24;  
cout<<"Age of Candidate:"<<p2.age<<endl;
p2.amount=16000; 
cout<<"Stored Amount="<<p2.amount<<endl;  
cout<<"Amount Transfered To Any Of Two Accountss:"<<endl; 
p2.transfer;
p1.transfer;
p2.amount; 
cout<<p2.amount-p2.transfer<<endl;
cout<<"Amount Received From P1 Account:"<<endl; 
cout<<p1.transfer+p2.amount<<endl;
p3.transfer; 
cout<<"Amount Received From P3 Account:"<<endl;
cout<<p3.transfer+p2.amount<<endl;
system("pause");
p2.withdraw; 
p2.deposit; 
p2.transfer; 
p2.input;  again22: //Now this time goto statement start from p1 account not from p.account 
{ system("cls");
cout<<"1) p2.withdraw"<<endl; 
cout<<"2) p2.deposit"<<endl; 
cout<<"3) p2.transfer"<<endl; 
cout<<"4) p2.changedetails"<<endl;  
cout<<"5) p2.checkdetails"<<endl;
//We have used input to access which thing we are going to do first.
cin>>p2.input;} 
if(p2.input==1){ 
cout<<p2.withdraw<<endl;
system("cls"); //Here we have clear screen mode
cout<<"Entre Value For Withdraw:";
cin>>p2.withdraw; 
cout<<"Value:"<<p2.withdraw<<endl;
if(p2.withdraw>=1&&p2.withdraw<=16000){ 
cout<<"You have succesfully withdrwed: "<<p2.withdraw<<endl; 
cout<<"Remaining Balance:"<<p2.amount-p2.withdraw<<endl;
system("pause");
goto again22; //goto statement For P1.Account
} 
else{ 
cout<"You have insufficient amount to withdraw!";  
cout<<"PLEASE GO BACK!"<<endl; 
system("pause");
goto again22;   //goto statement For P1.Account
} 
 p2.back;
 cout<<"Press Zero to go BAck!"<<endl; //go back statement
 cin>>p2.back; 
 if(p2.back==0){ Beep(1000,200);Beep(1000,200);Beep(1000,200);
 goto again22;
 } }
 if(p2.input==2){ 
cout<<p2.deposit<<endl;   //deposit option
system("cls"); 
cout<<"Entre value for deposit:"<<endl; 
cin>>p2.deposit; 
cout<<"Value:"<<p2.deposit<<endl;
cout<<"Amount Added:"<<p2.amount+p2.deposit<<endl; //Amount and Deposit addition
system("pause");
goto again22;}
if(p2.input==3){
     cout<<"Entre Account in which Do you want to transfer Amount?"<<endl; 
cin>>p.account; 
if(p.account==1){ 
cout<<"INSERT PIN AGAIN TO VERIFY ACCOUNT"<<endl;
cin>>p1.pin;
if(p1.pin!=110){ 
cout<<"please Insert Valid Pin"<<endl; 
cout<<"try again"<<endl; Beep(1123,200);Beep(1003,500);Beep(1123,800);Beep(23,200);
system("pause");
goto again22;
} 
if(p1.pin==110){ system("cls");
cout<<"Transfer :"<<endl; 
p2.transfer;
p2.amount; 
cout<<"BALANCE IN YOUR ACCOUNT:"<<endl;
cout<<p2.amount<<endl;
p2.amount==p2.transfer; 
cout<<"Insert Amount You Want To Transfer:"<<endl;
cin>>p2.transfer;
if(p2.transfer<=16000){  
cout<<"Entre Account   you want to transfer Amount?"<<endl; 
cout<<"Entre P1 Account Amount:"<<endl; 
p1.amount=12000; 
p2.transfer;
cout<<"Amount of P1 Account Before Addition Of Transfered Amount:"<<endl; 
cout<<p1.amount<<endl; 
cout<<"Transfered Amount:"<<endl; 
cout<<p2.transfer+p1.amount<<endl; 
cout<<"Remaining Amount In P2 Account:"<<endl; 
cout<<p2.amount-p2.transfer<<endl;
system("pause");
goto again22;}} 
else{ 
cout<<"You Have Entered Insufficient Amount For Transfer:"<<endl; 
cout<<"Please Go Back And Try Again:"<<endl;
system("pause");
goto again22;
} } 
if(p.account==3){ 
system("cls"); 
cout<<"INSERT PIN AGAIN TO VERIFY ACCOUNT"<<endl;
cin>>p3.pin;
if(p3.pin!=112){ 
cout<<"please Insert Valid Pin"<<endl; 
cout<<"try again"<<endl; Beep(1123,200);Beep(1003,500);Beep(1123,800);Beep(23,200);
system("pause");
goto again22;
} 
if(p3.pin==112){ system("cls");
cout<<"Transfer :"<<endl; 
p2.transfer;
p2.amount; 
cout<<"BALANCE IN YOUR ACCOUNT:"<<endl;
cout<<p2.amount<<endl;
p2.amount==p2.transfer; 
cout<<"Insert Amount You Want To Transfer:"<<endl;
cin>>p2.transfer;
if(p2.transfer<=16000){   
cout<<"Entre P3 Account Amount:"<<endl; 
p3.amount=18000; 
p2.transfer;
cout<<"Amount of P3 Account Before Addition Of Transfered Amount:"<<endl; 
cout<<p3.amount<<endl; 
cout<<"Transfered Amount:"<<endl; 
cout<<p2.transfer+p3.amount<<endl; 
cout<<"Remaining Amount In P2 Account:"<<endl; 
cout<<p2.amount-p2.transfer<<endl;
system("pause");
goto again22;}} 
else{ 
cout<<"You Have Entered Insufficient Amount For Transfer:"<<endl; 
cout<<"Please Go Back And Try Again:"<<endl;
system("pause");
goto again22;
 } } }  
if(p2.input==4){ 
cout<<"Details of a User:"<<endl;  
cout<<"Once Again you can see Details!"<<endl;  
cout<<"Name of User:"<<endl;        //Now Here We Put Name Of New User
p2.newname;
cin>>p2.newname; 
p2.name;
p2.newname==p2.name;
cout<<"PLease Entre New Name of User:"<<p2.newname<<endl;
p2.newage;                   
cout<<"Please Entre New Age of User:"<<endl;         //Now Here We Put Age Of Same User
cin>>p2.newage;
cout<<"New Age of User:"<<p2.newage<<endl; 
p2.newamount;
cout<<"Please Entre New Amount of User:"<<endl;       //Now Here We Put Amount Of Same User
cin>>p2.newamount;
cout<<"New Amount of User:"<<p2.newamount<<endl;
 p2.newpin;
cout<<"Please Entre New Pin of User:"<<endl;       //Now Here We Put Pin Of Same User
cin>>p2.newpin;
cout<<"New Amount of User:"<<p2.newpin<<endl; 
if(p2.newpin==0){ 
p2.pin; 
p2.newpin; 
p2.pin==p2.newpin; 
cout<<"New Pin:"<<endl;
system("pause");
goto again23;
}
{ again23:
system("cls");
p2.name;
p2.newname==p2.name;
 cout<<"|**STATE BANK OF PAKISTAN**|"<<endl;
 cout<<"|**"<<p1.name<<"**|"<<endl;
 cout<<"|**"<<p2.newname<<"**|"<<endl;
 cout<<"|**"<<p3.name<<"**|"<<endl;
system("pause");
 } 
goto again22; 
} if(p2.input==5){ 
system("cls");
cout<<"Here you can check your changings:"<<endl;     //In this Part We Can See Our Changings
cout<<"New Name of a User:"<<endl; 
cout<<p2.newname<<endl; 
cout<<"New Age of a User:"<<endl; 
cout<<p2.newage<<endl; 
cout<<"New Amount of a User:"<<endl; 
cout<<p2.newamount<<endl;
cout<<"New Pin Of User :"<<p2.newpin<<endl; 
cout<<"Now Go to Old User Details:"<<endl;          //Now Compare Changings With Old User Details
system("pause");
goto again21;
} 
} 
if(p2.input==0){ cout<<"back"<<endl; 
Beep(1123,200);Beep(1003,500);Beep(1123,800);Beep(23,200);
goto again;
}
}        //New User FROM HERE P3
if(p.account==3){ 
cout<<p3.account; 
p3.pin;  
cout<<"Please Entre Pin"<<endl;
cin>>p3.pin;   //here it is the pin of user 1: 
if(p3.pin!=112){ 
cout<<"please put valid Pin"<<endl; Beep(1123,200);Beep(1003,500);Beep(1123,800);Beep(23,200);
goto again; }  
if(p3.pin==112){ 
again31:
	system("cls");
cout<<"Account"<<p3.account<<endl;
p3.details="information"; //Now we have details of customer account
cout<<"Details="<<p3.details<<endl;
p3.name = "ALI RAZA"; 
cout<<"Candidate Name="<<p3.name<<endl;
p3.age=24;  
cout<<"Age of Candidate:"<<p3.age<<endl;
p3.amount=18000; 
cout<<"Stored Amount="<<p3.amount<<endl;  
cout<<"Amount Transfered To Any Of Two Accountss:"<<endl; 
p3.transfer;
p1.transfer;
p3.amount; 
cout<<p3.amount-p3.transfer<<endl;
cout<<"Amount Received From P1 Account:"<<endl; 
cout<<p1.transfer+p3.amount<<endl;
p2.transfer; 
cout<<"Amount Received From P2 Account:"<<endl;
cout<<p2.transfer+p2.amount<<endl;
system("pause");
p3.withdraw; 
p3.deposit; 
p3.transfer; 
p3.input;  again33: //Now this time goto statement start from p1 account not from p.account 
{ system("cls");
cout<<"1) p3.withdraw"<<endl; 
cout<<"2) p3.deposit"<<endl; 
cout<<"3) p3.transfer"<<endl; 
cout<<"4) p3.changedetails"<<endl;  
cout<<"5) p3.checkdetails"<<endl;
//We have used input to access which thing we are going to do first.
cin>>p3.input;} 
if(p3.input==1){ 
cout<<p3.withdraw<<endl;
system("cls"); //Here we have clear screen mode
cout<<"Entre Value For Withdraw:";
cin>>p3.withdraw; 
cout<<"Value:"<<p3.withdraw<<endl;
if(p3.withdraw>=1&&p3.withdraw<=18000){ 
cout<<"You have succesfully withdrwed: "<<p3.withdraw<<endl; 
cout<<"Remaining Balance:"<<p3.amount-p3.withdraw<<endl;
system("pause");
goto again33; //goto statement For P1.Account
} 
else{  
cout<<"PLEASE GO BACK!"<<endl; 
cout<"You have insufficient amount to withdraw!"; 
system("pause");
goto again33;   //goto statement For P1.Account
} 
 p3.back;
 cout<<"Press Zero to go BAck!"<<endl; //go back statement
 cin>>p3.back; 
 if(p3.back==0){ 
 goto again33;
 } }
 if(p3.input==2){ 
cout<<p3.deposit<<endl;   //deposit option
system("cls"); 
cout<<"Entre value for deposit:"<<endl; 
cin>>p3.deposit; 
cout<<"Value:"<<p3.deposit<<endl;
cout<<"Amount Added:"<<p3.amount+p3.deposit<<endl; //Amount and Deposit addition
system("pause");
goto again33;}
if(p3.input==3){
     cout<<"Entre Account in which Do you want to transfer Amount?"<<endl; 
cin>>p.account; 
if(p.account==1){ 
cout<<"INSERT PIN AGAIN TO VERIFY ACCOUNT"<<endl;
cin>>p1.pin;
if(p1.pin!=110){ 
cout<<"please Insert Valid Pin"<<endl; 
cout<<"try again"<<endl; Beep(1123,200);Beep(1003,500);Beep(1123,800);Beep(23,200);
system("pause");
goto again33;
} 
if(p1.pin==110){ system("cls");
cout<<"Transfer :"<<endl; 
p3.transfer;
p3.amount; 
cout<<"BALANCE IN YOUR ACCOUNT:"<<endl;
cout<<p3.amount<<endl;
p3.amount==p3.transfer; 
cout<<"Insert Amount You Want To Transfer:"<<endl;
cin>>p3.transfer;
if(p3.transfer<=18000){  
cout<<"Entre P1 Account Amount:"<<endl; 
p1.amount=12000; 
p3.transfer;
cout<<"Amount of P1 Account Before Addition Of Transfered Amount:"<<endl; 
cout<<p1.amount<<endl; 
cout<<"Transfered Amount In p1 Account:"<<endl; 
cout<<p3.transfer+p1.amount<<endl; 
cout<<"Remaining Amount In P3 Account:"<<endl; 
cout<<p3.amount-p3.transfer<<endl;
system("pause");
goto again33;}} 
else{ 
cout<<"You Have Entered Insufficient Amount For Transfer:"<<endl; 
cout<<"Please Go Back And Try Again:"<<endl;
system("pause");
goto again33;
} } 
if(p.account==2){ 
system("cls"); 
cout<<"INSERT PIN AGAIN TO VERIFY ACCOUNT"<<endl;
cin>>p2.pin;
if(p2.pin!=111){ 
cout<<"please Insert Valid Pin"<<endl; 
cout<<"try again"<<endl; 
system("pause");
goto again33;
} 
if(p2.pin==111){ system("cls");
cout<<"Transfer :"<<endl; 
p3.transfer;
p3.amount; 
cout<<"BALANCE IN YOUR ACCOUNT:"<<endl;
cout<<p3.amount<<endl;
p3.amount==p3.transfer; 
cout<<"Insert Amount You Want To Transfer:"<<endl;
cin>>p3.transfer;
if(p3.transfer<=18000){   
cout<<"Entre P2 Account Amount:"<<endl; 
p2.amount=16000; 
p3.transfer;
cout<<"Amount of P2 Account Before Addition Of Transfered Amount:"<<endl; 
cout<<p2.amount<<endl; 
cout<<"Transfered Amount In P2:"<<endl; 
cout<<p3.transfer+p2.amount<<endl; 
cout<<"Remaining Amount In P3 Account:"<<endl; 
cout<<p3.amount-p3.transfer<<endl;
system("pause");
goto again33;}} 
else{ 
cout<<"You Have Entered Insufficient Amount For Transfer:"<<endl; 
cout<<"Please Go Back And Try Again:"<<endl;
system("pause");
goto again33;
 } } }  
if(p3.input==4){ 
cout<<"Details of a User:"<<endl;  
cout<<"Once Again you can see Details!"<<endl;  
cout<<"Name of User:"<<endl;        //Now Here We Put Name Of New User
p3.newname;
cin>>p3.newname; 
p3.name;
p3.newname==p3.name;
cout<<"PLease Entre New Name of User:"<<p3.newname<<endl;
p3.newage;                   
cout<<"Please Entre New Age of User:"<<endl;         //Now Here We Put Age Of Same User
cin>>p3.newage;
cout<<"New Age of User:"<<p3.newage<<endl; 
p3.newamount;
cout<<"Please Entre New Amount of User:"<<endl;       //Now Here We Put Amount Of Same User
cin>>p3.newamount;
cout<<"New Amount of User:"<<p3.newamount<<endl;
 p3.newpin;
cout<<"Please Entre New Pin of User:"<<endl;       //Now Here We Put Pin Of Same User
cin>>p3.newpin;
cout<<"New Pin of User:"<<p3.newpin<<endl; 
if(p3.newpin==0){ 
p3.pin; 
p3.newpin; 
p3.pin==p3.newpin; 
cout<<"New Pin:"<<endl;
system("pause");
goto again34;
}
{ again34:
system("cls");
p3.name;
p3.newname==p3.name;
 cout<<"|**STATE BANK OF PAKISTAN**|"<<endl;
 cout<<"|**"<<p1.name<<"**|"<<endl;
 cout<<"|**"<<p2.name<<"**|"<<endl;
 cout<<"|**"<<p3.newname<<"**|"<<endl;
system("pause");
 } 
goto again33; 
} if(p3.input==5){ 
system("cls");
cout<<"Here you can check your changings:"<<endl;     //In this Part We Can See Our Changings
cout<<"New Name of a User:"<<endl; 
cout<<p3.newname<<endl; 
cout<<"New Age of a User:"<<endl; 
cout<<p3.newage<<endl; 
cout<<"New Amount of a User:"<<endl; 
cout<<p3.newamount<<endl; 
cout<<"New Pin Of User :"<<p3.newpin<<endl;
cout<<"Now Go to Old User Details:"<<endl;          //Now Compare Changings With Old User Details
system("pause");
goto again31;
} 
} 
if(p3.input==0){ cout<<"back"<<endl; Beep(1123,200);Beep(1003,500);Beep(1123,800);Beep(23,200);
goto again;
}
}}       //From Here Start of Another Member 
