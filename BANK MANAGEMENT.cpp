#include<iostream>
#include<iomanip>
#include<string>
#include<ctime>

using namespace std;
///start new user function////
int newUser();
bool ageChecker(int);
//End new user function///

//Start send money function///

int sendMoney();
int bankoption();
int nationalBank();
int internationalBank();
//////////// START NATIONAL FUNCTION PROTOTYPE//////////
int ahmadB();
int huzB();
int sleeB();
int rehB();
int hafB();

//////////END NATIONAL FUNCTION PROTOTYPE///////////

////////////START INTERNATIONAL FUNCTION PROTOTYPE//////////

int ahmadI();
int huzI();
int sleeI();
int rehI();
int hafI();
int AMERICA();
int CANADA();
int UNITEDKINGDOM();
int AUSTRALIA();
int GERMANY();
////////////END INTERNATIONAL FUNCTION PROTOTYPE//////////
int ahmadmoney=500000,huzmoney=400000,saleemoney=300000,rehmoney=200000,hafsamoney=100000,ahmadhouse=2,huzhouse=3,rehhouse=1,saleehouse=4,hafsahouse=5,withdrawmoneyy;
double amount,totalmoney;
string country,ahmadpin="5588",huzpin="5200",sleepin="5266",rehmpin="5144",hafspin="5699",mpin,persent;
string banknamee,select,countrynameee;
char yesno;
//End send money function//

/////////////////////////////////////////////////////////////Start CURRENCY EXCHANGE function///////////////////////////////////////////

////////////////Simple Function///////////
int currencyExchange();
int pakCurrency();
int europeanEuro();
int britishPound();
int saudiRayal();
int usDollar();

///////////////////////simple function end//////////


///////////////////cacculation functions for pakistan currencies /////////
int pakCurrencyExchangepk();
int europeanEuroExchangepk();
int britishPoundExchangepk();
int saudiRayalExchangepk();
int usDollarExchangepk();
/////////////////calculation functions end  for pakistan currencies/////////////

///////////////////cacculation functions START for US dollar currencies /////////
int pakCurrencyExchangeus();
int europeanEuroExchangeus();
int britishPoundExchangeus();
int saudiRayalExchangeus();
int usDollarExchangeus();
//////////////////cacculation functions END for us dollar currencies//////////

//////////////////cacculation functions START for  EURO//////////
int pakCurrencyExchangeuro();
int europeanEuroExchangeuro();
int britishPoundExchangeuro();
int saudiRayalExchangeuro();
int usDollarExchangeuro();

//////////////calculatio function END for EURO/////////////////

//////////////////cacculation functions START for  POUND STERLING//////////
int pakCurrencyExchangeps();
int europeanEuroExchangeps();
int britishPoundExchangeps();
int saudiRayalExchangeps();
int usDollarExchangeps();

//////////////calculatio function END for POUND STERLING/////////////////

//////////////////cacculation functions START for  SAUDI RIYAL//////////
int pakCurrencyExchangesr();
int europeanEuroExchangesr();
int britishPoundExchangesr();
int saudiRayalExchangesr();
int usDollarExchangesr();

//////////////calculation function END for SAUDI RIYAL/////////////////

//////////////////////////////////////////////////////////////End CURRENCY EXCHANGE  function////////////////////////////////////////////////

//////////Start withdraw function//////
int withDraw();
int otherAmount(int &);
int ahmadDraw();
int huzaifaDraw();
int hafsaDraw();
int saleehaDraw();
int abDraw();
/////////End withdraw function//////
////////Start tax pay function//////
int taxPay();
///////start salary tax function/////
int salaryTax();
int ahmadTaxs();
int huzTaxs();
int saleeTaxs();
int rehTaxs();
int hafTaxs();
//////End salary tax function////
/////Start home tax function////
int homeTax();
int ahmadTaxh();
int huzTaxh();
int saleeTaxh();
int rehTaxh();
int hafTaxh();

/////End home tax function/////
///////End tax pay function////

//////Start billtopup///
int billTopup();
int electricityBill();
int LESCO();
int GEPCO();
int PESCO();
int ahmadBill();
int saleeBill();
int hafsaBill();
int rehmanBill();
int huzBill();
/////End bill topup///////
string option;
int reverse();
int main(){
	reverse();
	
}

int reverse(){
	cout<<"\t\t\t ************************************** ROYAL BANK OF PAKISTAN ****************************************** "<<endl;
	cout<<endl;
	cout<<"\t\t\t ****************************** Welcome to our online banking system ************************************ "<<endl;
	cout<<endl;
	cout<<":Select from the given options to use our Services:"<<endl;
	cout<<endl;
	cout<<"\t (A) New User"<<"\t (B) Send Money"<<"\t\t (C) Tax Pay"<<endl;
	cout<<"\t (D) Withdraw"<<"\t (E) Bill top-up"<<"\t (F) Currency Exchange"<<endl;
	while(true){
	getline(cin,option);
	if(option=="A" || option=="a"){
		newUser();
		break;
	}
	else if(option=="B" || option=="b"){
		sendMoney();
		break;
	}
	else if(option=="C" || option=="c"){
		taxPay();
		break;
	}
	else if(option=="D" || option=="d"){
		withDraw();
		break;
	}
	else if(option=="E" || option=="e"){
		billTopup();
		break;
	}
	else if(option=="F" || option=="f"){
		currencyExchange();
		break; 
	}
	else{
		cout<<endl;
		cout<<"You entered a wrong input. Please select from the given options: ";
		continue;
	}
	
}
}


///////////Start New user///////////
int newUser(){
	string gender,phonenumber,firstname,lastname,fathername,homeaddress,person,cnicid,mpinid;
	int age;
	
	cout<<"\t\t\t ____________________________________________________ NEW USER __________________________________________  "<<endl;
	cout<<endl;
	cout<<"Please provide us the following details to open your new account in the ROYAL BANK OF PAKISTAN."<<endl;
	cout<<endl;
	
	cout<<endl;
	cout<<"Enter your first name:"<<endl;
	getline(cin,firstname);
	cout<<endl;
	cout<<"Enter your last name:"<<endl;
	getline(cin,lastname);
	cout<<endl;
	cout<<"Enter your father name:"<<endl;
	getline(cin,fathername);
	cout<<endl;
	cout<<"Enter your home address:"<<endl;
	getline(cin,homeaddress);
    cout<<endl;
	while(true)
	{
	cout<<"Enter your gender:"<<endl;
	cout<<endl;	
	cout<<"(M) Male"<<"  (F) Female"<<"  (O) Other"<<endl;
	getline(cin,gender);
	if(gender=="M" || gender=="m" ){
		cout<<endl;
		person="Male";
		break;
	}else if(gender=="F" || gender=="f"){
		person="Female";
		break;
	}
	else if(gender=="O" || gender=="o"){
		person="other";
		break;
	}
	else
		cout<<"Please select from the given options: ";
		continue;
	}
	cout<<"Enter your age:"<<endl;
	while(!(cin>>age)){
		
		cout<<"Invalid age. Please enter a valid age:";
		cin.clear();
		cin.ignore(10000,'\n');
	}
	while(ageChecker(age)==false){
		cout<<".Enter again.";
		while(!(cin>>age)){
			cout<<"Invalid age. Please enter valid age:";
			cin.clear();
			cin.ignore(10000,'\n');
		}
		
	}
	cout<<endl;
	
		bool flag = true;
	do{
		cout<<"Enter your Phone number :"<<" "<<" +92";
		cin>>phonenumber;
		if(phonenumber.length() == 10){
			for(int i = 0; i<10;i++){
				char no = phonenumber[i];
				if(no == '0' || no == '1' || no == '2'  || no == '3' || no == '4' ||no == '5' || no == '6' || no == '7' || no == '8' ||no == '9'){
					flag = true;
					continue;
				}
				else{
					cout<<"Error in Phone number :"<<endl;
					flag = false;
					break;
				}
			}
		}
		else{
			cout<<"Error in length please ignore first zero 0:"<<endl;
			flag = false;
			continue;
		}
		if(flag == 1){
			cout<<"Correct"<<endl;
			break;
		}
	}while(true);

	bool flag1 = true;
	do{
		cout<<"Enter your CNIC (Without dashes -)"<<endl;
		cin>>cnicid;
		if(cnicid.length() == 13){
			for(int i = 0; i<13;i++){
				char no = cnicid[i];
				if(no == '0' || no == '1' || no == '2'  || no == '3' || no == '4' ||no == '5' || no == '6' || no == '7' || no == '8' ||no == '9'){
					flag1 = true;
					continue;
				}
				else{
					cout<<"Error in cnic"<<endl;
					flag1 = false;
					break;
				}
			}
		}
		else{
			cout<<"Error in length"<<endl;
			flag1 = false;
			continue;
		}
		if(flag1 == 1){
			cout<<"Correct"<<endl;
			break;
		}
	}while(true);
	
	
	cout<<endl;


    bool flag2 = true;
	do{
		cout<<"Select your four digited unique MPIN ID :"<<" ";
		cin>>mpinid;
		if(mpinid.length() == 4){
			for(int i = 0; i<4;i++){
				char no = mpinid[i];
				if(no == '0' || no == '1' || no == '2'  || no == '3' || no == '4' ||no == '5' || no == '6' || no == '7' || no == '8' ||no == '9'){
					flag2 = true;
					continue;
				}
				else{
					cout<<"Error! MPIN ID does not include any alphabet or special character please select any four digit :"<<endl;
					flag2 = false;
					break;
				}
			}
		}
		else{
			cout<<"Error in length :"<<endl;
			flag2 = false;
			continue;
		}
		if(flag2 == 1){
			cout<<"Correct"<<endl;
			break;
		}
	}while(true);
	
    cout<<endl;
    
    cout<<endl;
   
    cout<<"\t\t\t\t\t-:Your account is created successfully on the details that are given below:- "<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<setw(80)<<"ROYAL BANK OF PAKISTAN"<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;    
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tName           |"<<" "<<firstname<<" "<<lastname<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tFther Name     |"<<" "<<fathername<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tGender         |"<<" "<<person<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tAge            |"<<" "<<age<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tPhone Number   |"<<" "<<"0"<<phonenumber<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tCNIC-ID        |"<<" "<<cnicid<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tHome Address   |"<<" "<<homeaddress<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tAccount Number |"<<" "<<"558520526514569"<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tMPIN-ID        |"<<" "<<mpinid<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tVALID FROM     |"<<" "<<"5/12/2022"<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tVALID THRU     |"<<" "<<"5/12/2026"<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t\t     R-B-P"<<endl;
    cout<<"\t\t\t\t\t\t____________________________________________"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\tThanks for using our Service."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t [Designed by HUGS FOR BUGS]"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"For more information:"<<endl;
    cout<<"Call  :555-252-5156"<<endl;
    cout<<"Visit :www.HugsForBugs.com"<<endl;
    cout<<"All copyrights reserved to HUGS FOR BUGS."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"DO you want to go on the main manue::";
    cout<<endl;
    cout<<"(Y)YES \t (N) NO"<<endl;
    cin>>yesno;
    if(yesno=='Y'|| yesno=='y'){
		reverse();
	}
	else{
		
	}
    
    return 0;
	}
bool ageChecker(int age){
	
	if(age>0 && age<18){
		cout<<"You are too young to make a new bank account. [SORRY]";
		return false;
	}
	if(age>=18 && age<100){
		cout<<"You are eligible for opening a new bank account.";
		return true;
	
	}
	if(age>100){
		cout<<"You are too old for opening a new bank account. [SORRY]";
		return false;
	}
	
}
	
//////////////////////End New user//////////////



/////////////////////START SEND MONEY///////////////////////

int sendMoney(){
	cout<<"\t\t\t __________________________________________ SEND MONEY _________________________________________________ "<<endl;
	cout<<endl;
	while(true)
	{
	cout<<":Select your banking type:"<<endl;
	cout<<endl;	
	cout<<"(A) INTERNATIONAL Bank "<<"  (B) NATIONAL Bank"<<endl;
	getline(cin,select);
	if(select=="A" || select=="a" ){
		cout<<endl;	
		internationalBank();
		break;
	}else if(select=="B" || select=="b"){
		nationalBank();
		break;
	}
	else
		cout<<"Please select from the given options: "<<endl;
		continue;
	}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////// START INTERNATIONAL BANKING //////////////////////////////
int internationalBank(){
	

	
	cout<<endl;
	cout<<endl;
	while(true)
	{
	
	cout<<"Select your country:"<<endl;
	cout<<endl;
	cout<<"\t (A) AMERICA  \t(B) CANADA  \t (C) UNITED KINGDOM \t(D) AUSTRALIA \t(E) GERMANY  "<<endl;
	cin>>country;
	if(country=="A" || country=="a"){
		countrynameee="AMERICA";
		AMERICA();
		
		break;
	}
	else if(country=="B" || country=="b"){
		countrynameee="CANADA";
		CANADA();
		break;
	}
	else if(country=="C" || country=="c"){
		countrynameee="UNITED KINGDOM";
		UNITEDKINGDOM();
		break;
			
		}
	else if(country=="D" || country=="d"){
		countrynameee="AUSTRALIA";
		AUSTRALIA();
		break;
	}	
	else if(country=="E" || country=="e"){
		countrynameee="GERMANY";
		GERMANY();
		break;
	}
	else{
		cout<<"ERROR! Please select from the given options::"<<endl;
		continue;
	}
}
	}
	
//////////////////////////// END INTERNATIONAL BANKING //////////////////////////////


////////////////COUNTRY START////////////////////

////////Country Function Start////////////////
int AMERICA(){
	string countrynameee="AMERICA";
	cout<<"Select bank in which you want to transfer your amount:"<<endl;
	cout<<endl;

	
	cout<<"\t(A)BANK OF AMERICAN  \t(B) JPMORGAN CHASE BANK \t(C) CITIGROUP \t(D) U.S BANK \t(E) GOLDMAN SACHS ";
	
		while(true)
	{
	
	
	cout<<endl;
	
	cin>>select;
	if(select=="A" || select=="a"){
		banknamee="BANK OF AMERICAN";
		break;
	}
	else if(select=="B" || select=="b"){
		banknamee="JPMORGAN CHASE BANK";
		break;
	}
	else if(select=="C" || select=="c"){
		banknamee="CITIGROUP";
		break;
			
		}
	else if(select=="D" || select=="d"){
		banknamee="U.S BANK";
		break;
	}	
	else if(select=="E" || select=="e"){
		banknamee=" GOLDMAN SACHS";
		break;
	}
	else{
		cout<<"ERROR! Please select from the given options";
		continue;
	}
}
	while(true)
	{
	cout<<"ENTER PIN:  ";
	cin>>mpin;
	if(ahmadpin==mpin){
		ahmadI();
		break;
	}
	else if(huzpin==mpin){
		huzI();
		break;
	}
	else if(sleepin==mpin){
		sleeI();
		break;
	}
	else if(rehmpin==mpin){
		rehI();
		break;
	}
	else if(hafspin==mpin){
		hafI();
		break;
		
	}
	else{
		cout<<"You enetered a wrong PIN please try again :"<<endl;
		continue;
		
	}
}
}



int CANADA(){
	string countrynameee="CANADA";
	cout<<"Select bank in which you want to transfer your amount:"<<endl;
	cout<<endl;
	cout<<endl;
	
	cout<<"\t(A)ROYAL BANK OF CANADA  \t(B) TORONTO-DOMINION BANK \t(C) BANK OF MONTREAL \t(D) CANADIAN IMPERIAL BANK \t(E) NATIONAL BANK OF CANADA ";
	
		while(true)
	{
	
	
	cout<<endl;
	
	cin>>select;
	if(select=="A" || select=="a"){
		banknamee="ROYAL BANK OF CANADA";
		break;
	}
	else if(select=="B" || select=="b"){
		banknamee="TORONTO-DOMINION BANK";
		break;
	}
	else if(select=="C" || select=="c"){
		banknamee="BANK OF MONTREAL";
		break;
			
		}
	else if(select=="D" || select=="d"){
		banknamee="CANADIAN IMPERIAL BANK";
		break;
	}	
	else if(select=="E" || select=="e"){
		banknamee="NATIONAL BANK OF CANADA";
		break;
	}
	else{
		cout<<"ERROR! Please select from the given options";
		continue;
	}
}
	while(true)
	{
	cout<<"ENTER PIN:  ";
	cin>>mpin;
	if(ahmadpin==mpin){
		ahmadI();
		break;
	}
	else if(huzpin==mpin){
		huzI();
		break;
	}
	else if(sleepin==mpin){
		sleeI();
		break;
	}
	else if(rehmpin==mpin){
		rehI();
		break;
	}
	else if(hafspin==mpin){
		hafI();
		break;
		
	}
	else{
		cout<<"You enetered a wrong PIN please try again :"<<endl;
		continue;
		
	}
}
}

int UNITEDKINGDOM(){
	string countrynameee=" UNITED KINGDOM";
	cout<<"Select bank in which you want to transfer your amount:"<<endl;
	cout<<endl;
	cout<<endl;
	
	cout<<"\t(A)BARCLAYS BANK  \t(B) STANDARD CHARTERED \t(C) ROYAL BANK OF SCOTLAND \t(D) NATWEST BANK \t(E) LLOYDS BANK";
	
		while(true)
	{
	
	
	cout<<endl;
	
	cin>>select;
	if(select=="A" || select=="a"){
		banknamee="BARCLAYS BANK";
		break;
	}
	else if(select=="B" || select=="b"){
		banknamee="STANDARD CHARTERED";
		break;
	}
	else if(select=="C" || select=="c"){
		banknamee="ROYAL BANK OF SCOTLAND";
		break;
			
		}
	else if(select=="D" || select=="d"){
		banknamee="NATWEST BANK";
		break;
	}	
	else if(select=="E" || select=="e"){
		banknamee="LLOYDS BANK";
		break;
	}
	else{
		cout<<"ERROR! Please select from the given options";
		continue;
	}
}
	while(true)
	{
	cout<<"ENTER PIN:  ";
	cin>>mpin;
	if(ahmadpin==mpin){
		ahmadI();
		break;
	}
	else if(huzpin==mpin){
		huzI();
		break;
	}
	else if(sleepin==mpin){
		sleeI();
		break;
	}
	else if(rehmpin==mpin){
		rehI();
		break;
	}
	else if(hafspin==mpin){
		hafI();
		break;
		
	}
	else{
		cout<<"You enetered a wrong PIN please try again :"<<endl;
		continue;
		
	}
}
	
}
int AUSTRALIA(){
	string countrynameee=" AUSTRALIA";
	cout<<"Select bank in which you want to transfer your amount:"<<endl;
	cout<<endl;
	cout<<endl;
	
	cout<<"\t(A)NATIONAL AUSTRALIA BANK  \t(B) BANK OF QUEENSLAND \t(C) BENDIGO BANK \t(D) BANKWEST \t(E) HSBC BANK AUSTRALIA";
	
		while(true)
	{
	
	
	cout<<endl;
	
	cin>>select;
	if(select=="A" || select=="a"){
		banknamee="NATIONAL AUSTRALIA BANK";
		break;
	}
	else if(select=="B" || select=="b"){
		banknamee="BANK OF QUEENSLAND";
		break;
	}
	else if(select=="C" || select=="c"){
		banknamee="BENDIGO BANK";
		break;
			
		}
	else if(select=="D" || select=="d"){
		banknamee="BANKWEST";
		break;
	}	
	else if(select=="E" || select=="e"){
		banknamee="HSBC BANK AUSTRALIA";
		break;
	}
	else{
		cout<<"ERROR! Please select from the given options";
		continue;
	}
}
	while(true)
	{
	cout<<"ENTER PIN:  ";
	cin>>mpin;
	if(ahmadpin==mpin){
		ahmadI();
		break;
	}
	else if(huzpin==mpin){
		huzI();
		break;
	}
	else if(sleepin==mpin){
		sleeI();
		break;
	}
	else if(rehmpin==mpin){
		rehI();
		break;
	}
	else if(hafspin==mpin){
		hafI();
		break;
		
	}
	else{
		cout<<"You enetered a wrong PIN please try again :"<<endl;
		continue;
		
	}
}
}
int GERMANY(){
	string countrynameee="GERMANY";
	cout<<"Select bank in which you want to transfer your amount:"<<endl;
	cout<<endl;
	cout<<endl;
	
	cout<<"\t(A) GERMANY NATIONAL BANK \t(B) COMMERZ BANK \t(C) DZ BANK \t(D)  HELABA BANK\t(E) DEUTSCHE BANK ";
	
		while(true)
	{
	
	
	cout<<endl;
	
	cin>>select;
	if(select=="A" || select=="a"){
		banknamee="GERMANY NATIONAL BANK";
		break;
	}
	else if(select=="B" || select=="b"){
		banknamee="COMMERZ BANK";
		break;
	}
	else if(select=="C" || select=="c"){
		banknamee="DZ BANK";
		break;
			
		}
	else if(select=="D" || select=="d"){
		banknamee="HELABA BANK";
		break;
	}	
	else if(select=="E" || select=="e"){
		banknamee="DEUTSCHE BANK";
		break;
	}
	else{
		cout<<"ERROR! Please select from the given options";
		continue;
	}
}
	while(true)
	{
	cout<<"ENTER PIN:  ";
	cin>>mpin;
	if(ahmadpin==mpin){
		ahmadI();
		break;
	}
	else if(huzpin==mpin){
		huzI();
		break;
	}
	else if(sleepin==mpin){
		sleeI();
		break;
	}
	else if(rehmpin==mpin){
		rehI();
		break;
	}
	else if(hafspin==mpin){
		hafI();
		break;
		
	}
	else{
		cout<<"You enetered a wrong PIN please try again :"<<endl;
		continue;
		
	}
}
}


///////Country Function End////

////////////////////start ahmad///////
ahmadI(){
	string name="CHAUDHARY Ahmad" ,accountnum,bankname;
	
	double money,availablebalance;
	cout<<endl;
	cout<<"User Name:CHAUDHARY AHMAD. "<<endl;
	cout<<endl;
	cout<<endl;
	


    cout<<endl;
    
    //////////////////
	bool flag3 = true;
	do{
		cout<<"Enter account number in which you want to transfer money: "<<":";
		getline(cin,accountnum);
		if(accountnum.length() == 15){
			for(int i = 0; i<15;i++){
				char no = accountnum[i];
				if(no == '0' || no == '1' || no == '2'  || no == '3' || no == '4' ||no == '5' || no == '6' || no == '7' || no == '8' ||no == '9'){
					flag3 = true;
					continue;
				}
				else{
					cout<<"ERROR! You eneterd a wrong account number please enter again: "<<endl;
					flag3 = false;
					break;
				}
			}
		}
		else{
			cout<<"Error in length :"<<endl;
			flag3 = false;
			continue;
		}
		if(flag3 == 1){
			cout<<"Correct"<<endl;
			break;
		}
	}while(true);
  //////////////
    cout<<endl;
  
	cout<<"Enter Amount : ";
	while(true){
	
	cin>>money;
	
    if(money>ahmadmoney){
		cout<<"You dont have enough balance to transfer please enter again: ";
		continue;
	}
	else{
	
		break;
	}
	
}
availablebalance=ahmadmoney-money;
cout<<"Your amount transfer successfuly:";
    cout<<endl;
    cout<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<setw(80)<<"ROYAL BANK OF PAKISTAN"<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;    
    cout<<"\t\t\t\t\t\t "<<endl;
    
    cout<<"\t\t\t\t\t\t "<<"\tBanking type         |"<<" "<<"INTERNATIONAL Banking"<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tName                 |"<<" "<<name<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tCountry Name         |"<<" "<<countrynameee<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tBank name            |"<<" "<<banknamee<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tSender Acc. Number   |"<<" "<<"558520526514569"<<endl;
	
    cout<<"\t\t\t\t\t\t "<<"\tReceiver Acc. Number |"<<" "<<accountnum<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tTransfering amount   |"<<" "<<money<<endl;
    
    cout<<"\t\t\t\t\t\t "<<"\tAvailable Balance    |"<<" "<<availablebalance<<endl;
   
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t\t     R-B-P"<<endl;
    cout<<"\t\t\t\t\t\t____________________________________________________________"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\tThanks for using our Service."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t [Designed by HUGS FOR BUGS]"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"For more information:"<<endl;
    cout<<"Call  :555-252-5156"<<endl;
    cout<<"Visit :www.HugsForBugs.com"<<endl;
    cout<<"All copyrights reserved to HUGS FOR BUGS."<<endl;
}
//////////////end ahmad//////////////////////




//////////////Start Huzafa//////////////////////

int huzI(){
	string name="Syed Huzafa" ,accountnum,bankname;
	
	double money,availablebalance;
	cout<<endl;
	cout<<"User Name:Syed Huzafa. "<<endl;
	cout<<endl;

    cout<<endl;
		bool flag4 = true;
	do{
		cout<<"Enter account number in which you want to transfer money: "<<":";
		getline(cin,accountnum);
		if(accountnum.length() == 15){
			for(int i = 0; i<15;i++){
				char no = accountnum[i];
				if(no == '0' || no == '1' || no == '2'  || no == '3' || no == '4' ||no == '5' || no == '6' || no == '7' || no == '8' ||no == '9'){
					flag4 = true;
					continue;
				}
				else{
					cout<<"ERROR! You eneterd a wrong account number please enter again: "<<endl;
					flag4 = false;
					break;
				}
			}
		}
		else{
			cout<<"Error in length :"<<endl;
			flag4 = false;
			continue;
		}
		if( flag4 == 1){
			cout<<"Correct"<<endl;
			break;
		}
	}while(true);
    cout<<endl;
	cout<<"Enter Amount : ";
	while(true){
	
	cin>>money;
	
    if(money>huzmoney){
		cout<<"You dont have enough balance to transfer please enter again: ";
		continue;
	}
	else{
	
		break;
	}
	
}
availablebalance=huzmoney-money;
    cout<<endl;
    cout<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<setw(80)<<"ROYAL BANK OF PAKISTAN"<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;    
    cout<<"\t\t\t\t\t\t "<<endl;
    
    cout<<"\t\t\t\t\t\t "<<"\tBanking type         |"<<" "<<"INTERNATIONAL Banking"<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tName                 |"<<" "<<name<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tCountry Name         |"<<" "<<countrynameee<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tBank name            |"<<" "<<banknamee<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tSender Acc. Number   |"<<" "<<"558520526514569"<<endl;
	
    cout<<"\t\t\t\t\t\t "<<"\tReceiver Acc. Number |"<<" "<<accountnum<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tTransfering amount   |"<<" "<<money<<endl;
    
    cout<<"\t\t\t\t\t\t "<<"\tAvailable Balance    |"<<" "<<availablebalance<<endl;
    
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t\t     R-B-P"<<endl;
    cout<<"\t\t\t\t\t\t____________________________________________________________"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\tThanks for using our Service."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t [Designed by HUGS FOR BUGS]"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"For more information:"<<endl;
    cout<<"Call  :555-252-5156"<<endl;
    cout<<"Visit :www.HugsForBugs.com"<<endl;
    cout<<"All copyrights reserved to HUGS FOR BUGS."<<endl;
}
//////////////end Huzafa//////////////////////

//////////////Start Saleeha//////////////////////

int sleeI(){
	string name="Saleeha Rani" ,accountnum,bankname;
	
	double money,availablebalance;
	cout<<endl;
	cout<<"User Name:Saleeha Rani. "<<endl;
	cout<<endl;
	
    cout<<endl;
	bool flag5 = true;
	do{
		cout<<"Enter account number in which you want to transfer money: "<<":";
		cin>>accountnum;
		if(accountnum.length() == 15){
			for(int i = 0; i<15;i++){
				char no = accountnum[i];
				if(no == '0' || no == '1' || no == '2'  || no == '3' || no == '4' ||no == '5' || no == '6' || no == '7' || no == '8' ||no == '9'){
					flag5 = true;
					continue;
				}
				else{
					cout<<"ERROR! You eneterd a wrong account number please enter again: "<<endl;
				flag5 = false;
					break;
				}
			}
		}
		else{
			cout<<"Error in length :"<<endl;
			flag5 = false;
			continue;
		}
		if(flag5 == 1){
			cout<<"Correct"<<endl;
			break;
		}
	}while(true);
    cout<<endl;
	cout<<"Enter Amount : ";
	while(true){
	
	cin>>money;
	
    if(money>saleemoney){
		cout<<"You dont have enough balance to transfer please enter again: ";
		continue;
	}
	else{
	
		break;
	}
	
}
availablebalance=saleemoney-money;
cout<<"Your amount transfer Successfuly:";
    cout<<endl;
    cout<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<setw(80)<<"ROYAL BANK OF PAKISTAN"<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;    
    cout<<"\t\t\t\t\t\t "<<endl;
    
    cout<<"\t\t\t\t\t\t "<<"\tBanking type         |"<<" "<<"INTERNATIONAL Banking"<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tName                 |"<<" "<<name<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tCountry Name         |"<<" "<<countrynameee<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tBank name            |"<<" "<<banknamee<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tSender Acc. Number   |"<<" "<<"558520526514569"<<endl;
	
    cout<<"\t\t\t\t\t\t "<<"\tReceiver Acc. Number |"<<" "<<accountnum<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tTransfering amount   |"<<" "<<money<<endl;
    
    cout<<"\t\t\t\t\t\t "<<"\tAvailable Balance    |"<<" "<<availablebalance<<endl;
    
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t\t     R-B-P"<<endl;
    cout<<"\t\t\t\t\t\t____________________________________________________________"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\tThanks for using our Service."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t [Designed by HUGS FOR BUGS]"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"For more information:"<<endl;
    cout<<"Call  :555-252-5156"<<endl;
    cout<<"Visit :www.HugsForBugs.com"<<endl;
    cout<<"All copyrights reserved to HUGS FOR BUGS."<<endl;
}

//////////////////End saleeha//////////////

////////////////Start Rehman/////////////
int rehI(){
	string name="A.B Rehman" ,accountnum,bankname;
	
	double money,availablebalance;
	cout<<endl;
	cout<<"User Name:A.B Rehman. "<<endl;
	cout<<endl;
	
    cout<<endl;
	bool flag6 = true;
	do{
		cout<<"Enter account number in which you want to transfer money: "<<":";
		cin>>accountnum;
		if(accountnum.length() == 15){
			for(int i = 0; i<15;i++){
				char no = accountnum[i];
				if(no == '0' || no == '1' || no == '2'  || no == '3' || no == '4' ||no == '5' || no == '6' || no == '7' || no == '8' ||no == '9'){
					flag6 = true;
					continue;
				}
				else{
					cout<<"ERROR! You eneterd a wrong account number please enter again: "<<endl;
					flag6 = false;
					break;
				}
			}
		}
		else{
			cout<<"Error in length :"<<endl;
			flag6 = false;
			continue;
		}
		if(flag6 == 1){
			cout<<"Correct"<<endl;
			break;
		}
	}while(true);
    cout<<endl;
	cout<<"Enter Amount : ";
	while(true){
	
	cin>>money;
	
    if(money>rehmoney){
		cout<<"You dont have enough balance to transfer please enter again: ";
		continue;
	}
	else{
	
		break;
	}
	
}
availablebalance=rehmoney-money;
cout<<"Your amount transfer Successfuly:";
    cout<<endl;
    cout<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<setw(80)<<"ROYAL BANK OF PAKISTAN"<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;    
    cout<<"\t\t\t\t\t\t "<<endl;
    
    cout<<"\t\t\t\t\t\t "<<"\tBanking type         |"<<" "<<"INTERNATIONAL Banking"<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tName                 |"<<" "<<name<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tCountry Name         |"<<" "<<countrynameee<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tBank name            |"<<" "<<banknamee<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tSender Acc. Number   |"<<" "<<"558520526514569"<<endl;
	
    cout<<"\t\t\t\t\t\t "<<"\tReceiver Acc. Number |"<<" "<<accountnum<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tTransfering amount   |"<<" "<<money<<endl;
    
    cout<<"\t\t\t\t\t\t "<<"\tAvailable Balance    |"<<" "<<availablebalance<<endl;
    
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t\t     R-B-P"<<endl;
    cout<<"\t\t\t\t\t\t____________________________________________________________"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\tThanks for using our Service."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t [Designed by HUGS FOR BUGS]"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"For more information:"<<endl;
    cout<<"Call  :555-252-5156"<<endl;
    cout<<"Visit :www.HugsForBugs.com"<<endl;
    cout<<"All copyrights reserved to HUGS FOR BUGS."<<endl;
}

///////////////////End Rehman/////////////

///////////////////Start Hafsa/////////////
int hafI(){
		string name="Hafsa Gondal" ,accountnum,bankname;
	
	double money,availablebalance;
	cout<<endl;
	cout<<"User Name:Hafsa Gondal. "<<endl;
	cout<<endl;

    cout<<endl;
	bool flag7 = true;
	do{
		cout<<"Enter account number in which you want to transfer money: "<<":";
		cin>>accountnum;
		if(accountnum.length() == 15){
			for(int i = 0; i<15;i++){
				char no = accountnum[i];
				if(no == '0' || no == '1' || no == '2'  || no == '3' || no == '4' ||no == '5' || no == '6' || no == '7' || no == '8' ||no == '9'){
					flag7 = true;
					continue;
				}
				else{
					cout<<"ERROR! You eneterd a wrong account number please enter again: "<<endl;
					flag7 = false;
					break;
				}
			}
		}
		else{
			cout<<"Error in length :"<<endl;
			flag7 = false;
			continue;
		}
		if(flag7 == 1){
			cout<<"Correct"<<endl;
			break;
		}
	}while(true);
    cout<<endl;
	cout<<"Enter Amount : ";
	while(true){
	
	cin>>money;
	
    if(money>hafsamoney){
		cout<<"You dont have enough balance to transfer please enter again: ";
		continue;
	}
	else{
	
		break;
	}
	
}
availablebalance=hafsamoney-money;
cout<<"Your amount transfered Successfuly:";
    cout<<endl;
    cout<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<setw(80)<<"ROYAL BANK OF PAKISTAN"<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;    
    cout<<"\t\t\t\t\t\t "<<endl;
    
    cout<<"\t\t\t\t\t\t "<<"\tBanking type         |"<<" "<<"INTERNATIONAL Banking"<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tName                 |"<<" "<<name<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tCountry Name         |"<<" "<<countrynameee<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tBank name            |"<<" "<<banknamee<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tSender Acc. Number   |"<<" "<<"558520526514569"<<endl;
	
    cout<<"\t\t\t\t\t\t "<<"\tReceiver Acc. Number |"<<" "<<accountnum<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tTransfering amount   |"<<" "<<money<<endl;
    
    cout<<"\t\t\t\t\t\t "<<"\tAvailable Balance    |"<<" "<<availablebalance<<endl;
    
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t\t     R-B-P"<<endl;
    cout<<"\t\t\t\t\t\t____________________________________________________________"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\tThanks for using our Service."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t [Designed by HUGS FOR BUGS]"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"For more information:"<<endl;
    cout<<"Call  :555-252-5156"<<endl;
    cout<<"Visit :www.HugsForBugs.com"<<endl;
    cout<<"All copyrights reserved to HUGS FOR BUGS."<<endl;
}
//////////////////////end Hafsa/////////////

//////////////////////////// END INTERNATIONAL BANKING //////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////// Start NATIONAL BANKING //////////////////////////////
int nationalBank(){
	
	string ahmadpin="5588",huzpin="5200",sleepin="5266",rehmpin="5144",hafspin="5699",mpin;
	
	cout<<endl;
	cout<<endl;
	
	while(true)
	{
	cout<<"ENTER PIN:  ";
	cin>>mpin;
	if(ahmadpin==mpin){
		ahmadB();
		break;
	}
	else if(huzpin==mpin){
		huzB();
		break;
	}
	else if(sleepin==mpin){
		sleeB();
		break;
	}
	else if(rehmpin==mpin){
		rehB();
		break;
	}
	else if(hafspin==mpin){
		hafB();
		break;
		
	}
	else{
		cout<<"You enetered a wrong PIN please try again :"<<endl;
		continue;
		
	}
}
}

////////////////////start ahmad////////////////
ahmadB(){
	string name="CHAUDHARY Ahmad" ,accountnum,bankname;
	
	double money,availablebalance;
	cout<<endl;
	cout<<"User Name:CHAUDHARY AHMAD. "<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"Please select Bank :"<<endl;
	cout<<endl;
	cout<<"\t\t (A) HBL Bank \t (B) Alfala Bank \t (C) United Bank \t (D) MCB Bank \t (E) BOP Bank"<<endl;
	while(true){
    cin>>bankname;
    if(bankname=="A" || bankname=="a"){
    	banknamee="HBL Bank";
    	break;
	}
	else if(bankname=="B"|| bankname=="b"){
		banknamee="Alfala Bank";
    	break;
	}
	else if(bankname=="C"|| bankname=="c"){
	banknamee="United Bank";
   	break;
	}
	else if(bankname=="D"|| bankname=="d"){
	banknamee="MCB Bank";
	break;
	}
	else if(bankname=="E"|| bankname=="e"){
	banknamee="BOP Bank";
	break;
	}
	else{
		cout<<"Please select from given option:";
		continue;
	}
}
    cout<<endl;
		bool flag8 = true;
	do{
		cout<<"Enter account number in which you want to transfer money: "<<":";
		cin>>accountnum;
		if(accountnum.length() == 15){
			for(int i = 0; i<15;i++){
				char no = accountnum[i];
				if(no == '0' || no == '1' || no == '2'  || no == '3' || no == '4' ||no == '5' || no == '6' || no == '7' || no == '8' ||no == '9'){
					flag8 = true;
					continue;
				}
				else{
					cout<<"ERROR! You eneterd a wrong account number please enter again: "<<endl;
					flag8 = false;
					break;
				}
			}
		}
		else{
			cout<<"Error in length :"<<endl;
			flag8 = false;
			continue;
		}
		if(flag8 == 1){
			cout<<"Correct"<<endl;
			break;
		}
	}while(true);
    cout<<endl;
	cout<<"Enter Amount : ";
	while(true){
	
	cin>>money;
	
    if(money>ahmadmoney){
		cout<<"You dont have enough balance to transfer please enter again: ";
		continue;
	}
	else{
	
		break;
	}
	
}
availablebalance=ahmadmoney-money;
cout<<"Your amount transfer successfuly:";
    cout<<endl;
    cout<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<setw(80)<<"ROYAL BANK OF PAKISTAN"<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;    
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tBanking type         |"<<" "<<"National Bank"<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tName                 |"<<" "<<name<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tSender Acc. Number   |"<<" "<<"558520526514569"<<endl;	
    cout<<"\t\t\t\t\t\t "<<"\tReceiver Acc. Number |"<<" "<<accountnum<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tTransfering amount   |"<<" "<<money<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tBranch Name          |"<<" "<<banknamee<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tAvailable Balance    |"<<" "<<availablebalance<<endl;
   
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t\t     R-B-P"<<endl;
    cout<<"\t\t\t\t\t\t____________________________________________________________"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\tThanks for using our Service."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t [Designed by HUGS FOR BUGS]"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"For more information:"<<endl;
    cout<<"Call  :555-252-5156"<<endl;
    cout<<"Visit :www.HugsForBugs.com"<<endl;
    cout<<"All copyrights reserved to HUGS FOR BUGS."<<endl;
}
//////////////end ahmad//////////////////////




//////////////Start Huzafa//////////////////////

int huzB(){
	string name="Syed Huzafa" ,accountnum,bankname;
	
	double money,availablebalance;
	cout<<endl;
	cout<<"User Name:Syed Huzafa. "<<endl;
	cout<<endl;
	cout<<"Please select Bank:"<<endl;
	cout<<"\t\t (A) HBL Bank \t (B) Alfala Bank \t (C) United Bank \t (D) MCB Bank \t (E) BOP Bank"<<endl;
	while(true){
    cin>>bankname;
    if(bankname=="A" || bankname=="a"){
    	banknamee="HBL Bank";
    	break;
	}
	else if(bankname=="B"|| bankname=="b"){
		banknamee="Alfala Bank";
    	break;
	}
	else if(bankname=="C"|| bankname=="c"){
	banknamee="United Bank";
   	break;
	}
	else if(bankname=="D"|| bankname=="d"){
	banknamee="MCB Bank";
	break;
	}
	else if(bankname=="E"|| bankname=="e"){
	banknamee="BOP Bank";
	break;
	}
	else{
		cout<<"Please select from given option:";
		continue;
	}
}
    cout<<endl;
	bool flag9 = true;
	do{
		cout<<"Enter account number in which you want to transfer money: "<<":";
		cin>>accountnum;
		if(accountnum.length() == 15){
			for(int i = 0; i<15;i++){
				char no = accountnum[i];
				if(no == '0' || no == '1' || no == '2'  || no == '3' || no == '4' ||no == '5' || no == '6' || no == '7' || no == '8' ||no == '9'){
					flag9 = true;
					continue;
				}
				else{
					cout<<"ERROR! You eneterd a wrong account number please enter again: "<<endl;
					flag9 = false;
					break;
				}
			}
		}
		else{
			cout<<"Error in length :"<<endl;
			flag9 = false;
			continue;
		}
		if(flag9 == 1){
			cout<<"Correct"<<endl;
			break;
		}
	}while(true);
    cout<<endl;
	cout<<"Enter Amount : ";
	while(true){
	
	cin>>money;
	
    if(money>huzmoney){
		cout<<"You dont have enough balance to transfer please enter again: ";
		continue;
	}
	else{
	
		break;
	}
	
}
availablebalance=huzmoney-money;
    cout<<endl;
    cout<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<setw(80)<<"ROYAL BANK OF PAKISTAN"<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;    
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tBanking type         |"<<" "<<"National Bank"<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tName                 |"<<" "<<name<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tSender Acc. Number   |"<<" "<<"965415625025855"<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tReceiver Acc. Number |"<<" "<<accountnum<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tTransfering amount   |"<<" "<<money<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tBranch Name          |"<<" "<<banknamee<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tAvailable Balance    |"<<" "<<availablebalance<<endl;
    
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t\t     R-B-P"<<endl;
    cout<<"\t\t\t\t\t\t____________________________________________________________"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\tThanks for using our Service."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t [Designed by HUGS FOR BUGS]"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"For more information:"<<endl;
    cout<<"Call  :555-252-5156"<<endl;
    cout<<"Visit :www.HugsForBugs.com"<<endl;
    cout<<"All copyrights reserved to HUGS FOR BUGS."<<endl;
}
//////////////end Huzafa//////////////////////

//////////////Start Saleeha//////////////////////

int sleeB(){
	string name="Saleeha Rani" ,accountnum,bankname;
	
	double money,availablebalance;
	cout<<endl;
	cout<<"User Name:Saleeha Rani. "<<endl;
	cout<<endl;
	cout<<"Please select Bank:"<<endl;
	cout<<"\t\t (A) HBL Bank \t (B) Alfala Bank \t (C) United Bank \t (D) MCB Bank \t (E) BOP Bank"<<endl;
	while(true){
    cin>>bankname;
    if(bankname=="A" || bankname=="a"){
    	banknamee="HBL Bank";
    	break;
	}
	else if(bankname=="B"|| bankname=="b"){
		banknamee="Alfala Bank";
    	break;
	}
	else if(bankname=="C"|| bankname=="c"){
	banknamee="United Bank";
   	break;
	}
	else if(bankname=="D"|| bankname=="d"){
	banknamee="MCB Bank";
	break;
	}
	else if(bankname=="E"|| bankname=="e"){
	banknamee="BOP Bank";
	break;
	}
	else{
		cout<<"Please select from given option:";
		continue;
	}
}
    cout<<endl;
		bool flag11 = true;
	do{
		cout<<"Enter account number in which you want to transfer money: "<<":";
		cin>>accountnum;
		if(accountnum.length() == 15){
			for(int i = 0; i<15;i++){
				char no = accountnum[i];
				if(no == '0' || no == '1' || no == '2'  || no == '3' || no == '4' ||no == '5' || no == '6' || no == '7' || no == '8' ||no == '9'){
					flag11 = true;
					continue;
				}
				else{
					cout<<"ERROR! You eneterd a wrong account number please enter again: "<<endl;
					flag11 = false;
					break;
				}
			}
		}
		else{
			cout<<"Error in length :"<<endl;
			flag11 = false;
			continue;
		}
		if(flag11 == 1){
			cout<<"Correct"<<endl;
			break;
		}
	}while(true);
    cout<<endl;
	cout<<"Enter Amount : ";
	while(true){
	
	cin>>money;
	
    if(money>saleemoney){
		cout<<"You dont have enough balance to transfer please enter again: ";
		continue;
	}
	else{
	
		break;
	}
	
}
availablebalance=saleemoney-money;
cout<<"Your amount transfer Successfuly:";
    cout<<endl;
    cout<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<setw(80)<<"ROYAL BANK OF PAKISTAN"<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;    
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tBanking type         |"<<" "<<"National Bank"<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tName                 |"<<" "<<name<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tSender Acc. Number   |"<<" "<<"563769239998654"<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tReceiver Acc. Number |"<<" "<<accountnum<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tTransfering amount   |"<<" "<<money<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tBranch Name          |"<<" "<<banknamee<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tAvailable Balance    |"<<" "<<availablebalance<<endl;
    
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t\t     R-B-P"<<endl;
    cout<<"\t\t\t\t\t\t____________________________________________________________"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\tThanks for using our Service."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t [Designed by HUGS FOR BUGS]"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"For more information:"<<endl;
    cout<<"Call  :555-252-5156"<<endl;
    cout<<"Visit :www.HugsForBugs.com"<<endl;
    cout<<"All copyrights reserved to HUGS FOR BUGS."<<endl;
}

//////////////////End saleeha//////////////

////////////////Start Rehman/////////////
int rehB(){
	string name="A.B Rehman" ,accountnum,bankname;
	
	double money,availablebalance;
	cout<<endl;
	cout<<"User Name:A.B Rehman. "<<endl;
	cout<<endl;
	cout<<"Please select Bank:"<<endl;
	cout<<"\t\t (A) HBL Bank \t (B) Alfala Bank \t (C) United Bank \t (D) MCB Bank \t (E) BOP Bank"<<endl;
	while(true){
    cin>>bankname;
    if(bankname=="A" || bankname=="a"){
    	banknamee="HBL Bank";
    	break;
	}
	else if(bankname=="B"|| bankname=="b"){
		banknamee="Alfala Bank";
    	break;
	}
	else if(bankname=="C"|| bankname=="c"){
	banknamee="United Bank";
   	break;
	}
	else if(bankname=="D"|| bankname=="d"){
	banknamee="MCB Bank";
	break;
	}
	else if(bankname=="E"|| bankname=="e"){
	banknamee="BOP Bank";
	break;
	}
	else{
		cout<<"Please select from given option:";
		continue;
	}
}
    cout<<endl;
	bool flag12 = true;
	do{
		cout<<"Enter account number in which you want to transfer money: "<<":";
		cin>>accountnum;
		if(accountnum.length() == 15){
			for(int i = 0; i<15;i++){
				char no = accountnum[i];
				if(no == '0' || no == '1' || no == '2'  || no == '3' || no == '4' ||no == '5' || no == '6' || no == '7' || no == '8' ||no == '9'){
					flag12 = true;
					continue;
				}
				else{
					cout<<"ERROR! You eneterd a wrong account number please enter again: "<<endl;
					flag12 = false;
					break;
				}
			}
		}
		else{
			cout<<"Error in length :"<<endl;
			flag12 = false;
			continue;
		}
		if(flag12 == 1){
			cout<<"Correct"<<endl;
			break;
		}
	}while(true);
    cout<<endl;
	cout<<"Enter Amount : ";
	while(true){
	
	cin>>money;
	
    if(money>rehmoney){
		cout<<"You dont have enough balance to transfer please enter again: ";
		continue;
	}
	else{
	
		break;
	}
	
}
availablebalance=rehmoney-money;
cout<<"Your amount transfer Successfuly:";
    cout<<endl;
    cout<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<setw(80)<<"ROYAL BANK OF PAKISTAN"<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;    
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tBanking type         |"<<" "<<"National Bank"<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tName                 |"<<" "<<name<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tSender Acc. Number   |"<<" "<<"235559993333123"<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tReceiver Acc. Number |"<<" "<<accountnum<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tTransfering amount   |"<<" "<<money<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tBranch Name          |"<<" "<<banknamee<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tAvailable Balance    |"<<" "<<availablebalance<<endl;
    
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t\t     R-B-P"<<endl;
    cout<<"\t\t\t\t\t\t____________________________________________________________"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\tThanks for using our Service."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t [Designed by HUGS FOR BUGS]"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"For more information:"<<endl;
    cout<<"Call  :555-252-5156"<<endl;
    cout<<"Visit :www.HugsForBugs.com"<<endl;
    cout<<"All copyrights reserved to HUGS FOR BUGS."<<endl;
}

///////////////////End Rehman/////////////

///////////////////Start Hafsa/////////////
int hafB(){
		string name="Hafsa Gondal" ,accountnum,bankname;
	
	double money,availablebalance;
	cout<<endl;
	cout<<"User Name:Hafsa Gondal. "<<endl;
	cout<<endl;
	cout<<"Please select Bank:"<<endl;
	cout<<"\t\t (A) HBL Bank \t (B) Alfala Bank \t (C) United Bank \t (D) MCB Bank \t (E) BOP Bank"<<endl;
	while(true){
    cin>>bankname;
    if(bankname=="A" || bankname=="a"){
    	banknamee="HBL Bank";
    	break;
	}
	else if(bankname=="B"|| bankname=="b"){
		banknamee="Alfala Bank";
    	break;
	}
	else if(bankname=="C"|| bankname=="c"){
	banknamee="United Bank";
   	break;
	}
	else if(bankname=="D"|| bankname=="d"){
	banknamee="MCB Bank";
	break;
	}
	else if(bankname=="E"|| bankname=="e"){
	banknamee="BOP Bank";
	break;
	}
	else{
		cout<<"Please select from given option:";
		continue;
	}
}
    cout<<endl;
	bool flag13 = true;
	do{
		cout<<"Enter account number in which you want to transfer money: "<<":";
		cin>>accountnum;
		if(accountnum.length() == 15){
			for(int i = 0; i<15;i++){
				char no = accountnum[i];
				if(no == '0' || no == '1' || no == '2'  || no == '3' || no == '4' ||no == '5' || no == '6' || no == '7' || no == '8' ||no == '9'){
					flag13 = true;
					continue;
				}
				else{
					cout<<"ERROR! You eneterd a wrong account number please enter again: "<<endl;
					flag13 = false;
					break;
				}
			}
		}
		else{
			cout<<"Error in length :"<<endl;
			flag13 = false;
			continue;
		}
		if(flag13 == 1){
			cout<<"Correct"<<endl;
			break;
		}
	}while(true);
    cout<<endl;
	cout<<"Enter Amount : ";
	while(true){
	
	cin>>money;
	
    if(money>hafsamoney){
		cout<<"You dont have enough balance to transfer please enter again: ";
		continue;
	}
	else{
	
		break;
	}
	
}
availablebalance=hafsamoney-money;
cout<<"Your amount transfered Successfuly:";
    cout<<endl;
    cout<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<setw(80)<<"ROYAL BANK OF PAKISTAN"<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;    
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tBanking type         |"<<" "<<"National Bank"<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tName                 |"<<" "<<name<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tSender Acc. Number   |"<<" "<<"3214326475864532"<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tReceiver Acc. Number |"<<" "<<accountnum<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tTransfering amount   |"<<" "<<money<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tBank Name            |"<<" "<<banknamee<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tAvailable Balance    |"<<" "<<availablebalance<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t\t     R-B-P"<<endl;
    cout<<"\t\t\t\t\t\t____________________________________________________________"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\tThanks for using our Service."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t [Designed by HUGS FOR BUGS]"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"For more information:"<<endl;
    cout<<"Call  :555-252-5156"<<endl;
    cout<<"Visit :www.HugsForBugs.com"<<endl;
    cout<<"All copyrights reserved to HUGS FOR BUGS."<<endl;
}
//////////////////////end Hafsa/////////////
//////////////////////////// END NATIONAL BANKING //////////////////////////////

/////////////////////END SEND MONEY////////////////////////////////////////////////////////////////////////////////////////////////


//////////////////Start Tax Pay/////////////////////////
int taxPay(){
	cout<<"\t\t\t ____________________________________________________ TAX PAY __________________________________________  "<<endl;
	cout<<endl;
	cout<<"Please select tax type you want to pay:"<<endl;
	cout<<endl;
	cout<<"(A) 	Bank tax \t (B) Residential tax"<<endl;
	while(true){
	
    getline(cin,select);
	cout<<endl;
	if(select=="A" || select=="a"){
		salaryTax();
		break;
	}
	else if(select=="B"||select=="b"){
		homeTax();
		break;
	}
	else{
		cout<<"You entered a wrong option please select again: ";
		continue;
	}
	}
	
}
//////////////////Start salary tex//////
int salaryTax(){
	cout<<endl;
    cout<<"TAX TYPE::"<<"Bank tax"<<endl;
    cout<<endl;
		while(true)
	{
	cout<<"ENTER PIN:  ";
	cin>>mpin;
	if(ahmadpin==mpin){
		ahmadTaxs();
		break;
	}
	else if(huzpin==mpin){
		huzTaxs();
		break;
	}
	else if(sleepin==mpin){
		saleeTaxs();
		break;
	}
	else if(rehmpin==mpin){
		rehTaxs();
		break;
	}
	else if(hafspin==mpin){
		hafTaxs();
		break;
		
	}
	else{
		cout<<"You enetered a wrong PIN please try again :"<<endl;
		continue;
		
	}
}
}
int ahmadTaxs(){
	if(ahmadmoney>=500000){
		persent="7%";
		totalmoney=ahmadmoney*0.07;
		withdrawmoneyy=ahmadmoney-totalmoney;
	}
	else if(ahmadmoney>=400000 && ahmadmoney<500000){
		persent="5%";
		totalmoney=ahmadmoney*0.05;
		withdrawmoneyy=ahmadmoney-totalmoney;
	}
	else if(ahmadmoney>=300000 && ahmadmoney<400000){
		persent="4%";
		totalmoney=ahmadmoney*0.04;
		withdrawmoneyy=ahmadmoney-totalmoney;
	}
	else if(ahmadmoney>=200000 && ahmadmoney<300000){
		persent="3%";
		totalmoney=ahmadmoney*0.03;
		withdrawmoneyy=ahmadmoney-totalmoney;
	}
	else if(ahmadmoney>=100000 && ahmadmoney<200000){
		persent="2%";
		totalmoney=ahmadmoney*0.02;
		withdrawmoneyy=ahmadmoney-totalmoney;
	}
	else{
		withdrawmoneyy=ahmadmoney;
		persent="no deduction";
	}
	cout<<endl;
    cout<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<setw(80)<<"ROYAL BANK OF PAKISTAN"<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;    
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tUser Name         |"<<" "<<"CHAUDHARY AHMAD"<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tAccount Number    |"<<" "<<"9654******25855"<<endl;
	cout<<"\t\t\t\t\t\t "<<"\tTax deduction     |"<<" "<<persent<<"="<<totalmoney<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tAvailable Balance |"<<" "<<withdrawmoneyy<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t\t     R-B-P"<<endl;
    cout<<"\t\t\t\t\t\t___________________________________________________"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\tThanks for using our Service."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t [Designed by HUGS FOR BUGS]"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"For more information:"<<endl;
    cout<<"Call  :555-252-5156"<<endl;
    cout<<"Visit :www.HugsForBugs.com"<<endl;
    cout<<"All copyrights reserved to HUGS FOR BUGS."<<endl;
}
int huzTaxs(){
	
	if(huzmoney>500000){
		persent="7%";
		totalmoney=huzmoney*0.07;
		withdrawmoneyy=huzmoney-totalmoney;
	}
	else if(huzmoney>=400000 && huzmoney<500000){
		persent="5%";
		totalmoney=huzmoney*0.05;
		withdrawmoneyy=huzmoney-totalmoney;
	}
	else if(huzmoney>=300000 && huzmoney<400000){
		persent="4%";
		totalmoney=huzmoney*0.04;
		withdrawmoneyy=huzmoney-totalmoney;
	}
	else if(huzmoney>=200000 && huzmoney<300000){
		persent="3%";
		totalmoney=huzmoney*0.03;
		withdrawmoneyy=huzmoney-totalmoney;
	}
	else if(huzmoney>=100000 && huzmoney<200000){
		persent="2%";
		totalmoney=huzmoney*0.02;
		withdrawmoneyy=huzmoney-totalmoney;
	}
	else{
		withdrawmoneyy=huzmoney;
		persent="no deduction";
	}
	cout<<endl;
    cout<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<setw(80)<<"ROYAL BANK OF PAKISTAN"<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;    
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tUser Name         |"<<" "<<"SYED HUZAFA"<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tAccount Number    |"<<" "<<"9654******25855"<<endl;
	cout<<"\t\t\t\t\t\t "<<"\tTax deduction     |"<<" "<<persent<<"="<<totalmoney<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tAvailable Balance |"<<" "<<withdrawmoneyy<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t\t     R-B-P"<<endl;
    cout<<"\t\t\t\t\t\t___________________________________________________"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\tThanks for using our Service."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t [Designed by HUGS FOR BUGS]"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"For more information:"<<endl;
    cout<<"Call  :555-252-5156"<<endl;
    cout<<"Visit :www.HugsForBugs.com"<<endl;
    cout<<"All copyrights reserved to HUGS FOR BUGS."<<endl;
}
int saleeTaxs(){
	
	if(saleemoney>=500000){
		persent="7%";
		totalmoney=saleemoney*0.07;
		withdrawmoneyy=saleemoney-totalmoney;
	}
	else if(saleemoney>=400000 && saleemoney<500000){
		persent="5%";
		totalmoney=saleemoney*0.05;
		withdrawmoneyy=saleemoney-totalmoney;
	}
	else if(saleemoney>=300000 && saleemoney<400000){
		persent="4%";
		totalmoney=saleemoney*0.04;
		withdrawmoneyy=saleemoney-totalmoney;
	}
	else if(saleemoney>=200000 && saleemoney<300000){
		persent="3%";
		totalmoney=saleemoney*0.03;
		withdrawmoneyy=saleemoney-totalmoney;
	}
	else if(saleemoney>=100000 && saleemoney<200000){
		persent="2%";
		totalmoney=saleemoney*0.02;
		withdrawmoneyy=saleemoney-totalmoney;
	}
	else{
		withdrawmoneyy=saleemoney;
		persent="no deduction";
	}
	cout<<endl;
    cout<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<setw(80)<<"ROYAL BANK OF PAKISTAN"<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;    
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tUser Name         |"<<" "<<"SALEEHA RANI"<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tAccount Number    |"<<" "<<"9654******25855"<<endl;
	cout<<"\t\t\t\t\t\t "<<"\tTax deduction     |"<<" "<<persent<<"="<<totalmoney<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tAvailable Balance |"<<" "<<withdrawmoneyy<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t\t     R-B-P"<<endl;
    cout<<"\t\t\t\t\t\t___________________________________________________"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\tThanks for using our Service."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t [Designed by HUGS FOR BUGS]"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"For more information:"<<endl;
    cout<<"Call  :555-252-5156"<<endl;
    cout<<"Visit :www.HugsForBugs.com"<<endl;
    cout<<"All copyrights reserved to HUGS FOR BUGS."<<endl;
}
int rehTaxs(){
	
	if(rehmoney>=500000){
		persent="7%";
		totalmoney=rehmoney*0.07;
		withdrawmoneyy=rehmoney-totalmoney;
	}
	else if(rehmoney>=400000 && rehmoney<500000){
		persent="5%";
		totalmoney=rehmoney*0.05;
		withdrawmoneyy=rehmoney-totalmoney;
	}
	else if(rehmoney>=300000 && rehmoney<400000){
		persent="4%";
		totalmoney=rehmoney*0.04;
		withdrawmoneyy=rehmoney-totalmoney;
	}
	else if(rehmoney>=200000 && rehmoney<300000){
		persent="3%";
		totalmoney=rehmoney*0.03;
		withdrawmoneyy=rehmoney-totalmoney;
	}
	else if(rehmoney>=100000 && rehmoney<200000){
		persent="2%";
		totalmoney=rehmoney*0.02;
		withdrawmoneyy=rehmoney-totalmoney;
	}
	else{
		withdrawmoneyy=rehmoney;
		persent="no deduction";
	}
	cout<<endl;
    cout<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<setw(80)<<"ROYAL BANK OF PAKISTAN"<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;    
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tUser Name         |"<<" "<<"A.B REHMAN"<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tAccount Number    |"<<" "<<"9654******25855"<<endl;
	cout<<"\t\t\t\t\t\t "<<"\tTax deduction     |"<<" "<<persent<<"="<<totalmoney<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tAvailable Balance |"<<" "<<withdrawmoneyy<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t\t     R-B-P"<<endl;
    cout<<"\t\t\t\t\t\t___________________________________________________"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\tThanks for using our Service."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t [Designed by HUGS FOR BUGS]"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"For more information:"<<endl;
    cout<<"Call  :555-252-5156"<<endl;
    cout<<"Visit :www.HugsForBugs.com"<<endl;
    cout<<"All copyrights reserved to HUGS FOR BUGS."<<endl;
}
int hafTaxs(){
	
	if(hafsamoney>=500000){
		persent="7%";
		totalmoney=hafsamoney*0.07;
		withdrawmoneyy=hafsamoney-totalmoney;
	}
	else if(hafsamoney>=400000 && hafsamoney<500000){
		persent="5%";
		totalmoney=hafsamoney*0.05;
		withdrawmoneyy=hafsamoney-totalmoney;
	}
	else if(hafsamoney>=300000 && hafsamoney<400000){
		persent="4%";
		totalmoney=hafsamoney*0.04;
		withdrawmoneyy=hafsamoney-totalmoney;
	}
	else if(hafsamoney>=200000 && hafsamoney<300000){
		persent="3%";
		totalmoney=hafsamoney*0.03;
		withdrawmoneyy=hafsamoney-totalmoney;
	}
	else if(hafsamoney>=100000 && hafsamoney<200000){
		persent="2%";
		totalmoney=hafsamoney*0.02;
		withdrawmoneyy=hafsamoney-totalmoney;
	}
	else{
		persent="no deduction";
		withdrawmoneyy=hafsamoney;
	}
	cout<<endl;
    cout<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<setw(80)<<"ROYAL BANK OF PAKISTAN"<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;    
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tUser Name         |"<<" "<<"HAFSA GONDAL"<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tAccount Number    |"<<" "<<"9654******25855"<<endl;
	cout<<"\t\t\t\t\t\t "<<"\tTax deduction     |"<<" "<<persent<<"="<<totalmoney<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tAvailable Balance |"<<" "<<withdrawmoneyy<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t\t     R-B-P"<<endl;
    cout<<"\t\t\t\t\t\t___________________________________________________"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\tThanks for using our Service."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t [Designed by HUGS FOR BUGS]"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"For more information:"<<endl;
    cout<<"Call  :555-252-5156"<<endl;
    cout<<"Visit :www.HugsForBugs.com"<<endl;
    cout<<"All copyrights reserved to HUGS FOR BUGS."<<endl;
}


////////////End salary tex/////
////////////Start home tax//////////
int homeTax(){
	cout<<endl;
    cout<<"TAX TYPE::"<<"RESIDENTIAL TAX"<<endl;
    cout<<endl;
		while(true)
	{
	cout<<"ENTER PIN:  ";
	cin>>mpin;
	if(ahmadpin==mpin){
		ahmadTaxh();
		break;
	}
	else if(huzpin==mpin){
		huzTaxh();
		break;
	}
	else if(sleepin==mpin){
		saleeTaxh();
		break;
	}
	else if(rehmpin==mpin){
		rehTaxh();
		break;
	}
	else if(hafspin==mpin){
		hafTaxh();
		break;
		
	}
	else{
		cout<<"You enetered a wrong PIN please try again :"<<endl;
		continue;
		
	}
}
}
int ahmadTaxh(){
		if(ahmadhouse>=5){
		persent="7%";
		totalmoney=ahmadmoney*0.07;
		withdrawmoneyy=ahmadmoney-totalmoney;
	}
	else if(ahmadhouse>=4 && ahmadhouse<5){
		persent="5%";
		totalmoney=ahmadmoney*0.05;
		withdrawmoneyy=ahmadmoney-totalmoney;
	}
	else if(ahmadhouse>=3 && ahmadhouse<4){
		persent="4%";
		totalmoney=ahmadmoney*0.04;
		withdrawmoneyy=ahmadmoney-totalmoney;
	}
	else if(ahmadhouse>=2 && ahmadhouse<3){
		persent="3%";
		totalmoney=ahmadmoney*0.03;
		withdrawmoneyy=ahmadmoney-totalmoney;
	}
	else if(ahmadhouse>=1 && ahmadhouse<2){
		persent="2%";
		totalmoney=ahmadmoney*0.02;
		withdrawmoneyy=ahmadmoney-totalmoney;
	}
	else{
		withdrawmoneyy=ahmadmoney;
		persent="no deduction";
	}
	cout<<endl;
    cout<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<setw(80)<<"ROYAL BANK OF PAKISTAN"<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;    
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tUser Name         |"<<" "<<"CHAUDHARY AHMAD"<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tAccount Number    |"<<" "<<"558520******569"<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tResidential Area  |"<<" "<<ahmadhouse<<" Kanal"<<endl;
	cout<<"\t\t\t\t\t\t "<<"\tTax deduction     |"<<" "<<persent<<"="<<totalmoney<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tAvailable Balance |"<<" "<<withdrawmoneyy<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t\t     R-B-P"<<endl;
    cout<<"\t\t\t\t\t\t___________________________________________________"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\tThanks for using our Service."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t [Designed by HUGS FOR BUGS]"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"For more information:"<<endl;
    cout<<"Call  :555-252-5156"<<endl;
    cout<<"Visit :www.HugsForBugs.com"<<endl;
    cout<<"All copyrights reserved to HUGS FOR BUGS."<<endl;

}
int huzTaxh(){
	
		if(huzhouse>=5){
		persent="7%";
		totalmoney=huzmoney*0.07;
		withdrawmoneyy=huzmoney-totalmoney;
	}
	else if(huzhouse>=4 && huzhouse<5){
		persent="5%";
		totalmoney=huzmoney*0.05;
		withdrawmoneyy=huzmoney-totalmoney;
	}
	else if(huzhouse>=3 && huzhouse<4){
		persent="4%";
		totalmoney=huzmoney*0.04;
		withdrawmoneyy=huzmoney-totalmoney;
	}
	else if(huzhouse>=2 && huzhouse<3){
		persent="3%";
		totalmoney=huzmoney*0.03;
		withdrawmoneyy=huzmoney-totalmoney;
	}
	else if(huzhouse>=1 && huzhouse<2){
		persent="2%";
		totalmoney=huzmoney*0.02;
		withdrawmoneyy=huzmoney-totalmoney;
	}
	else{
		withdrawmoneyy=huzmoney;
		persent="no deduction";
	}
	cout<<endl;
    cout<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<setw(80)<<"ROYAL BANK OF PAKISTAN"<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;    
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tUser Name         |"<<" "<<"SYED HUZAFA"<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tAccount Number    |"<<" "<<"236474******569"<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tResidential Area  |"<<" "<<huzhouse<<" Kanal"<<endl;
	cout<<"\t\t\t\t\t\t "<<"\tTax deduction     |"<<" "<<persent<<"="<<totalmoney<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tAvailable Balance |"<<" "<<withdrawmoneyy<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t\t     R-B-P"<<endl;
    cout<<"\t\t\t\t\t\t___________________________________________________"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\tThanks for using our Service."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t [Designed by HUGS FOR BUGS]"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"For more information:"<<endl;
    cout<<"Call  :555-252-5156"<<endl;
    cout<<"Visit :www.HugsForBugs.com"<<endl;
    cout<<"All copyrights reserved to HUGS FOR BUGS."<<endl;

}
int saleeTaxh(){
		
		if(saleehouse>=5){
		persent="7%";
		totalmoney=saleemoney*0.07;
		withdrawmoneyy=saleemoney-totalmoney;
	}
	else if(saleehouse>=4 && saleehouse<5){
		persent="5%";
		totalmoney=saleemoney*0.05;
		withdrawmoneyy=saleemoney-totalmoney;
	}
	else if(saleehouse>=3 && saleehouse<4){
		persent="4%";
		totalmoney=saleemoney*0.04;
		withdrawmoneyy=saleemoney-totalmoney;
	}
	else if(saleehouse>=2 && saleehouse<3){
		persent="3%";
		totalmoney=saleemoney*0.03;
		withdrawmoneyy=saleemoney-totalmoney;
	}
	else if(saleehouse>=1 && saleehouse<2){
		persent="2%";
		totalmoney=saleemoney*0.02;
		withdrawmoneyy=saleemoney-totalmoney;
	}
	else{
		withdrawmoneyy=saleemoney;
		persent="no deduction";
	}
	cout<<endl;
    cout<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<setw(80)<<"ROYAL BANK OF PAKISTAN"<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;    
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tUser Name         |"<<" "<<"SALEEHA RANI"<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tAccount Number    |"<<" "<<"456345******345"<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tResidential Area  |"<<" "<<saleehouse<<" Kanal"<<endl;
	cout<<"\t\t\t\t\t\t "<<"\tTax deduction     |"<<" "<<persent<<"="<<totalmoney<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tAvailable Balance |"<<" "<<withdrawmoneyy<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t\t     R-B-P"<<endl;
    cout<<"\t\t\t\t\t\t___________________________________________________"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\tThanks for using our Service."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t [Designed by HUGS FOR BUGS]"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"For more information:"<<endl;
    cout<<"Call  :555-252-5156"<<endl;
    cout<<"Visit :www.HugsForBugs.com"<<endl;
    cout<<"All copyrights reserved to HUGS FOR BUGS."<<endl;
	
}
int rehTaxh(){
			
		if(rehhouse>=5){
		persent="7%";
		totalmoney=rehmoney*0.07;
		withdrawmoneyy=rehmoney-totalmoney;
	}
	else if(rehhouse>=4 && rehhouse<5){
		persent="5%";
		totalmoney=rehmoney*0.05;
		withdrawmoneyy=rehmoney-totalmoney;
	}
	else if(rehhouse>=3 && rehhouse<4){
		persent="4%";
		totalmoney=rehmoney*0.04;
		withdrawmoneyy=rehmoney-totalmoney;
	}
	else if(rehhouse>=2 && rehhouse<3){
		persent="3%";
		totalmoney=rehmoney*0.03;
		withdrawmoneyy=rehmoney-totalmoney;
	}
	else if(rehhouse>=1 && rehhouse<2){
		persent="2%";
		totalmoney=rehmoney*0.02;
		withdrawmoneyy=rehmoney-totalmoney;
	}
	else{
		withdrawmoneyy=rehmoney;
		persent="no deduction";
	}
	cout<<endl;
    cout<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<setw(80)<<"ROYAL BANK OF PAKISTAN"<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;    
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tUser Name         |"<<" "<<"A.B REHMAN"<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tAccount Number    |"<<" "<<"236474******569"<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tResidential Area  |"<<" "<<rehhouse<<" Kanal"<<endl;
	cout<<"\t\t\t\t\t\t "<<"\tTax deduction     |"<<" "<<persent<<"="<<totalmoney<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tAvailable Balance |"<<" "<<withdrawmoneyy<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t\t     R-B-P"<<endl;
    cout<<"\t\t\t\t\t\t___________________________________________________"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\tThanks for using our Service."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t [Designed by HUGS FOR BUGS]"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"For more information:"<<endl;
    cout<<"Call  :555-252-5156"<<endl;
    cout<<"Visit :www.HugsForBugs.com"<<endl;
    cout<<"All copyrights reserved to HUGS FOR BUGS."<<endl;

}
int hafTaxh(){
				
		if(hafsahouse>=5){
		persent="7%";
		totalmoney=hafsamoney*0.07;
		withdrawmoneyy=hafsamoney-totalmoney;
	}
	else if(hafsahouse>=4 && hafsahouse<5){
		persent="5%";
		totalmoney=hafsamoney*0.05;
		withdrawmoneyy=hafsamoney-totalmoney;
	}
	else if(hafsahouse>=3 && hafsahouse<4){
		persent="4%";
		totalmoney=hafsamoney*0.04;
		withdrawmoneyy=hafsamoney-totalmoney;
	}
	else if(hafsahouse>=2 && hafsahouse<3){
		persent="3%";
		totalmoney=hafsamoney*0.03;
		withdrawmoneyy=hafsamoney-totalmoney;
	}
	else if(hafsahouse>=1 && hafsahouse<2){
		persent="2%";
		totalmoney=hafsamoney*0.02;
		withdrawmoneyy=hafsamoney-totalmoney;
	}
	else{
		withdrawmoneyy=hafsamoney;
		persent="no deduction";
	}
    cout<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<setw(80)<<"ROYAL BANK OF PAKISTAN"<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;    
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tUser Name         |"<<" "<<"HAFSA GONDAL"<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tAccount Number    |"<<" "<<"653748******569"<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tResidential Area  |"<<" "<<hafsahouse<<" Kanal"<<endl;
	cout<<"\t\t\t\t\t\t "<<"\tTax deduction     |"<<" "<<persent<<"="<<totalmoney<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tAvailable Balance |"<<" "<<withdrawmoneyy<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t\t     R-B-P"<<endl;
    cout<<"\t\t\t\t\t\t___________________________________________________"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\tThanks for using our Service."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t [Designed by HUGS FOR BUGS]"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"For more information:"<<endl;
    cout<<"Call  :555-252-5156"<<endl;
    cout<<"Visit :www.HugsForBugs.com"<<endl;
    cout<<"All copyrights reserved to HUGS FOR BUGS."<<endl;

}
/////////////////End home tax

//////////////////////////////END TAX PAY///////////////////

////////////////Start withdraw function//////

int withDraw(){
		cout<<"\t\t\t ____________________________________________________ WITHDRAW MONEY __________________________________________  "<<endl;
    cout<<endl;
    	while(true)
	{
	cout<<"ENTER PIN:  ";
	cin>>mpin;
	if(ahmadpin==mpin){
	    ahmadDraw();
		break;
	}
	else if(huzpin==mpin){
	    huzaifaDraw();
		break;
	}
	else if(sleepin==mpin){
		saleehaDraw();
		break;
	}
	else if(rehmpin==mpin){
		abDraw();
		break;
	}
	else if(hafspin==mpin){
		hafsaDraw();
		break;
		
	}
	else{
		cout<<"You enetered a wrong PIN please try again :"<<endl;
		continue;
		
	}
}
}
int ahmadDraw(){
	string name="CHAUDHARY Ahmad",withdrawmoney;
	cout<<endl;
	cout<<"User Name:CHAUDHARY AHMAD. "<<endl;
	cout<<endl;
	cout<<endl;
	
	cout<<"Please select amount you want to withdraw :"<<endl;
	cout<<endl;
	cout<<"\t\t (A) 2000 \t (B) 5000 \t (C) 10000 \t (D) 20000 \t (E) OTHER AMOUNT"<<endl;

	while(true){
   	cin>>withdrawmoney;
    if(withdrawmoney=="A" || withdrawmoney=="a"){
    	withdrawmoneyy=2000;
    	break;
	}
	else if(withdrawmoney=="B"|| withdrawmoney=="b"){
		withdrawmoneyy=5000;
    	break;
	}
	else if(withdrawmoney=="C"|| withdrawmoney=="c"){
	withdrawmoneyy=10000;
   	break;
	}
	else if(withdrawmoney=="D"|| withdrawmoney=="d"){
	withdrawmoneyy=20000;
	break;
	}
	else if(withdrawmoney=="E"|| withdrawmoney=="e"){
    otherAmount(withdrawmoneyy);
	break;
	}
	else{
		cout<<"Please select from given option:";
		continue;
	}
}
	while(true){
    if(ahmadmoney>=withdrawmoneyy){
    	break;
	}
	else{
		cout<<"You dont have enough amount Please try again";
		continue;
	}
}
totalmoney=ahmadmoney-withdrawmoneyy;
	time_t curr_time;
	curr_time = time(NULL);
	tm *tm_local = localtime(&curr_time);
	time_t now = time(0);
    tm *ltm = localtime(&now);
	cout<<endl;
    cout<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<setw(80)<<"ROYAL BANK OF PAKISTAN"<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;    
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tUser Name         |"<<" "<<"CHAUDHARY Ahmad"<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tAccount Number    |"<<" "<<"558520******569"<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tWithdraw Amount   |"<<" "<<withdrawmoneyy<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tAvalaible Balance |"<<" "<<totalmoney<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tCurrent local time|"<<" "<<tm_local->tm_hour << ":" << tm_local->tm_min << ":" << tm_local->tm_sec<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tDate              |"<<ltm->tm_mday<<"/"<<1+ltm->tm_mon<<"/"<<1900+ltm->tm_year;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t\t     R-B-P"<<endl;
    cout<<"\t\t\t\t\t\t____________________________________________"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\tThanks for using our Service."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t [Designed by HUGS FOR BUGS]"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"For more information:"<<endl;
    cout<<"Call  :555-252-5156"<<endl;
    cout<<"Visit :www.HugsForBugs.com"<<endl;
    cout<<"All copyrights reserved to HUGS FOR BUGS."<<endl;


}
int huzaifaDraw(){
			int withdrawmoneyy;
	
	string name="Syed Huzafa",withdrawmoney;
	cout<<endl;
	cout<<"User Name:Syed Huzafa. "<<endl;
	cout<<endl;
	cout<<endl;
	
	cout<<"Please select amount you want to withdraw :"<<endl;
	cout<<endl;
	cout<<"\t\t (A) 2000 \t (B) 5000 \t (C) 10000 \t (D) 20000 \t (E) OTHER AMOUNT"<<endl;

	while(true){
   	cin>>withdrawmoney;
    if(withdrawmoney=="A" || withdrawmoney=="a"){
    	withdrawmoneyy=2000;
    	break;
	}
	else if(withdrawmoney=="B"|| withdrawmoney=="b"){
		withdrawmoneyy=5000;
    	break;
	}
	else if(withdrawmoney=="C"|| withdrawmoney=="c"){
	withdrawmoneyy=10000;
   	break;
	}
	else if(withdrawmoney=="D"|| withdrawmoney=="d"){
	withdrawmoneyy=20000;
	break;
	}
	else if(withdrawmoney=="E"|| withdrawmoney=="e"){
    otherAmount(withdrawmoneyy);
	break;
	}
	else{
		cout<<"Please select from given option:";
		continue;
	}
}


totalmoney=huzmoney-withdrawmoneyy;
	time_t curr_time;
	curr_time = time(NULL);
	tm *tm_local = localtime(&curr_time);
	time_t now = time(0);
    tm *ltm = localtime(&now);
	cout<<endl;
    cout<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<setw(80)<<"ROYAL BANK OF PAKISTAN"<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;    
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tUser Name         |"<<" "<<name<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tAccount Number    |"<<" "<<"236474******569"<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tWithdraw Amount   |"<<" "<<withdrawmoneyy<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tAvalaible Balance |"<<" "<<totalmoney<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tCurrent local time|"<<" "<<tm_local->tm_hour << ":" << tm_local->tm_min << ":" << tm_local->tm_sec<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tDate              |"<<ltm->tm_mday<<"/"<<1+ltm->tm_mon<<"/"<<1900+ltm->tm_year;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t\t     R-B-P"<<endl;
    cout<<"\t\t\t\t\t\t____________________________________________"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\tThanks for using our Service."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t [Designed by HUGS FOR BUGS]"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"For more information:"<<endl;
    cout<<"Call  :555-252-5156"<<endl;
    cout<<"Visit :www.HugsForBugs.com"<<endl;
    cout<<"All copyrights reserved to HUGS FOR BUGS."<<endl;
}
int saleehaDraw(){
	int withdrawmoneyy;
	
	string name="Saleeha Rani",withdrawmoney;
	cout<<endl;
	cout<<"User Name:Saleeha Rani. "<<endl;
	cout<<endl;
	cout<<endl;
	
	cout<<"Please select amount you want to withdraw :"<<endl;
	cout<<endl;
	cout<<"\t\t (A) 2000 \t (B) 5000 \t (C) 10000 \t (D) 20000 \t (E) OTHER AMOUNT"<<endl;

	while(true){
   	cin>>withdrawmoney;
    if(withdrawmoney=="A" || withdrawmoney=="a"){
    	withdrawmoneyy=2000;
    	break;
	}
	else if(withdrawmoney=="B"|| withdrawmoney=="b"){
		withdrawmoneyy=5000;
    	break;
	}
	else if(withdrawmoney=="C"|| withdrawmoney=="c"){
	withdrawmoneyy=10000;
   	break;
	}
	else if(withdrawmoney=="D"|| withdrawmoney=="d"){
	withdrawmoneyy=20000;
	break;
	}
	else if(withdrawmoney=="E"|| withdrawmoney=="e"){
    otherAmount(withdrawmoneyy);
	break;
	}
	else{
		cout<<"Please select from given option:";
		continue;
	}
}


totalmoney=saleemoney-withdrawmoneyy;
	time_t curr_time;
	curr_time = time(NULL);
	tm *tm_local = localtime(&curr_time);
	time_t now = time(0);
    tm *ltm = localtime(&now);
	cout<<endl;
    cout<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<setw(80)<<"ROYAL BANK OF PAKISTAN"<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;    
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tUser Name         |"<<" "<<name<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tAccount Number    |"<<" "<<"456345******345"<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tWithdraw Amount   |"<<" "<<withdrawmoneyy<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tAvalaible Balance |"<<" "<<totalmoney<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tCurrent local time|"<<" "<<tm_local->tm_hour << ":" << tm_local->tm_min << ":" << tm_local->tm_sec<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tDate              |"<<ltm->tm_mday<<"/"<<1+ltm->tm_mon<<"/"<<1900+ltm->tm_year;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t\t     R-B-P"<<endl;
    cout<<"\t\t\t\t\t\t____________________________________________"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\tThanks for using our Service."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t [Designed by HUGS FOR BUGS]"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"For more information:"<<endl;
    cout<<"Call  :555-252-5156"<<endl;
    cout<<"Visit :www.HugsForBugs.com"<<endl;
    cout<<"All copyrights reserved to HUGS FOR BUGS."<<endl;
}
int abDraw(){

	string name="A.B Rehman",withdrawmoney;
	cout<<endl;
	cout<<"User Name:A.B Rehman. "<<endl;
	cout<<endl;
	cout<<endl;
	
	cout<<"Please select amount you want to withdraw :"<<endl;
	cout<<endl;
	cout<<"\t\t (A) 2000 \t (B) 5000 \t (C) 10000 \t (D) 20000 \t (E) OTHER AMOUNT"<<endl;

	while(true){
   	cin>>withdrawmoney;
    if(withdrawmoney=="A" || withdrawmoney=="a"){
    	withdrawmoneyy=2000;
    	break;
	}
	else if(withdrawmoney=="B"|| withdrawmoney=="b"){
		withdrawmoneyy=5000;
    	break;
	}
	else if(withdrawmoney=="C"|| withdrawmoney=="c"){
	withdrawmoneyy=10000;
   	break;
	}
	else if(withdrawmoney=="D"|| withdrawmoney=="d"){
	withdrawmoneyy=20000;
	break;
	}
	else if(withdrawmoney=="E"|| withdrawmoney=="e"){
    otherAmount(withdrawmoneyy);
	break;
	}
	else{
		cout<<"Please select from given option:";
		continue;
	}
}


totalmoney=rehmoney-withdrawmoneyy;
	time_t curr_time;
	curr_time = time(NULL);
	tm *tm_local = localtime(&curr_time);
	time_t now = time(0);
    tm *ltm = localtime(&now);
	cout<<endl;
    cout<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<setw(80)<<"ROYAL BANK OF PAKISTAN"<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;    
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tUser Name         |"<<" "<<name<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tAccount Number    |"<<" "<<"236474******569"<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tWithdraw Amount   |"<<" "<<withdrawmoneyy<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tAvalaible Balance |"<<" "<<totalmoney<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tCurrent local time|"<<" "<<tm_local->tm_hour << ":" << tm_local->tm_min << ":" << tm_local->tm_sec<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tDate              |"<<ltm->tm_mday<<"/"<<1+ltm->tm_mon<<"/"<<1900+ltm->tm_year;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t\t     R-B-P"<<endl;
    cout<<"\t\t\t\t\t\t____________________________________________"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\tThanks for using our Service."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t [Designed by HUGS FOR BUGS]"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"For more information:"<<endl;
    cout<<"Call  :555-252-5156"<<endl;
    cout<<"Visit :www.HugsForBugs.com"<<endl;
    cout<<"All copyrights reserved to HUGS FOR BUGS."<<endl;
}
int hafsaDraw(){
	int withdrawmoneyy;
	
	string name="Hafsa Gondal",withdrawmoney;
	cout<<endl;
	cout<<"User Name:Hafsa Gondal. "<<endl;
	cout<<endl;
	cout<<endl;
	
	cout<<"Please select amount you want to withdraw :"<<endl;
	cout<<endl;
	cout<<"\t\t (A) 2000 \t (B) 5000 \t (C) 10000 \t (D) 20000 \t (E) OTHER AMOUNT"<<endl;

	while(true){
   	cin>>withdrawmoney;
    if(withdrawmoney=="A" || withdrawmoney=="a"){
    	withdrawmoneyy=2000;
    	break;
	}
	else if(withdrawmoney=="B"|| withdrawmoney=="b"){
		withdrawmoneyy=5000;
    	break;
	}
	else if(withdrawmoney=="C"|| withdrawmoney=="c"){
	withdrawmoneyy=10000;
   	break;
	}
	else if(withdrawmoney=="D"|| withdrawmoney=="d"){
	withdrawmoneyy=20000;
	break;
	}
	else if(withdrawmoney=="E"|| withdrawmoney=="e"){
    otherAmount(withdrawmoneyy);
    cout<<withdrawmoneyy;
	break;
	}
	else{
		cout<<"Please select from given option:";
		continue;
	}
}


totalmoney=hafsamoney-withdrawmoneyy;
	time_t curr_time;
	curr_time = time(NULL);
	tm *tm_local = localtime(&curr_time);
	time_t now = time(0);
    tm *ltm = localtime(&now);
	cout<<endl;
    cout<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<setw(80)<<"ROYAL BANK OF PAKISTAN"<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;    
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tUser Name         |"<<" "<<name<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tAccount Number    |"<<" "<<"653748******569"<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tWithdraw Amount   |"<<" "<<withdrawmoneyy<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tAvalaible Balance |"<<" "<<totalmoney<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tCurrent local time|"<<" "<<tm_local->tm_hour << ":" << tm_local->tm_min << ":" << tm_local->tm_sec<<endl;
    cout<<"\t\t\t\t\t\t "<<"\tDate              |"<<ltm->tm_mday<<"/"<<1+ltm->tm_mon<<"/"<<1900+ltm->tm_year;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t\t     R-B-P"<<endl;
    cout<<"\t\t\t\t\t\t____________________________________________"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\tThanks for using our Service."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t [Designed by HUGS FOR BUGS]"<<endl;
	cout<<endl;
    cout<<endl;
    cout<<"For more information:"<<endl;
    cout<<"Call  :555-252-5156"<<endl;
    cout<<"Visit :www.HugsForBugs.com"<<endl;
    cout<<"All copyrights reserved to HUGS FOR BUGS."<<endl;
}
int otherAmount(int &a){
  	cout<<"Please enter Amount: ";
  	while(true){
  	cin>>a;
  	if(a>50000){
  		cout<<"You can only withdraw money upto 50000:";
  		continue;
	  }
	  else{
	  	break;
	  }
	}
	return a;
}
////////End withdraw function////
////////Start Bill topup////////
int billTopup(){
	cout<<"Select option:"<<endl;
	cout<<"(A) Electricity Bill"<<endl;
	while(true){
	cin>>select;
	;
	cout<<endl;
	if(select=="A" || select=="a"){
		
		electricityBill();
		break;
	}
	else{
		cout<<"You entered a wrong option please select again: ";
		continue;
	}
	}
	
}
int electricityBill(){
	cout<<"Select your Electricity distribution company"<<endl;
	cout<<endl;
	cout<<"(A) LESCO \t(B)GEPCO \t(C)PESCO"<<endl;
	while(true){
	cin>>select;
	cout<<endl;
	if(select=="A" || select=="a"){
		LESCO();
		break;
	}
	else if(select=="B"||select=="b"){
		GEPCO();
		break;
	}
	else if(select=="C"||select=="c"){
		PESCO();
		break;
	}
	else{
		cout<<"You entered a wrong option please select again: ";
		continue;
	}
	}
	
}
int LESCO(){
	cout<<endl;
	cout<<"Provider Selected: LESCO"<<endl;
	cout<<endl;
	cout<<"Enter your pin: ";
	cin>>mpin;
	if(mpin==huzpin){
		huzBill();
	}
	else{
		cout<<"Ple select your current service provider";
		electricityBill();
	}
}
int GEPCO(){
	
	cout<<endl;
	cout<<"Provider Selected: GEPCO"<<endl;
	cout<<endl;
	cout<<"Enter your pin: ";
	cin>>mpin;
	if(mpin==ahmadpin){
		ahmadBill();
	}
	else if(mpin==sleepin){
		saleeBill();
	}
	else if(mpin==hafspin){
		hafsaBill();
	}
	else{
		cout<<"Please select your current service provider:";
		electricityBill();
	}
}
int PESCO(){
	cout<<endl;
	cout<<"Provider Selected: PESCO"<<endl;
	cout<<endl;
	cout<<"Enter your pin: ";
	cin>>mpin;
	if(mpin==rehmpin){
		rehmanBill();
	}
	else{
		cout<<"Please select your current service provider:";
		electricityBill();
	}
}
int ahmadBill(){
    cout<<setw(72)<<"Electricity Bill"<<endl;
    cout<<"\t\t\t___________________________________________________________________________________________________________"<<endl;    
    cout<<"\t\t\t\t\t "<<"\tUser Name       |"<<"CHAUDHARY AHMAD "<<endl;
    cout<<"\t\t\t\t\t "<<"\tUser Address    |"<<"Phase 2 Garden twon Gujranwala"<<endl;
    cout<<"\t\t\t\t\t "<<"\tCustomer ID     |"<<"5585585580"<<endl;	
    cout<<"\t\t\t\t\t "<<"\tMeter No        |"<<"3838"<<endl;
    cout<<"\t\t\t\t\t--------------------------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t "<<"\tGST             |"<<"700"<<endl;
    cout<<"\t\t\t\t\t "<<"\tExtra Tax       |"<<"500"<<endl;
    cout<<"\t\t\t\t\t "<<"\tUnit Consumed   |"<<"300 Units"<<endl;	
    cout<<"\t\t\t\t\t "<<"\tConsumed price  |"<<"10000 rs"<<endl;
   	cout<<"\t\t\t\t\t--------------------------------------------------------------"<<endl;
   	cout<<"\t\t\t\t\t "<<"\tTotal Amount    |"<<"11500 rs"<<endl;
    cout<<"\t\t\t\t\t "<<"\tDue Date        |"<<"10/03/2023"<<endl;
	cout<<"\t\t\t\t\t "<<"\twithin due date |"<<"11500 rs"<<endl;	
    cout<<"\t\t\t\t\t "<<"\tAfter due date  |"<<"13500 rs"<<endl;
    cout<<"\t\t\t___________________________________________________________________________________________________________"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\tYour electricity bill amount is deducted from your Account"<<endl;
    cout<<endl;
    cout<<setw(75)<<"Your remaining balance is"<<":: "<<ahmadmoney-11500<<" "<<"Rs"<<endl;
    cout<<endl;
    cout<<endl;
	cout<<"\t\t\t\t\t\t "<<"\t\t     R-B-P"<<endl;
	cout<<endl;
    cout<<"\t\t\t\t\t\t\tThanks for using our Service."<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t [Designed by HUGS FOR BUGS]"<<endl;	
    cout<<endl;
    cout<<endl;
    cout<<"For more information:"<<endl;
    cout<<"Call  :555-252-5156"<<endl;
    cout<<"Visit :www.HugsForBugs.com"<<endl;
    cout<<"All copyrights reserved to HUGS FOR BUGS."<<endl;
}
int saleeBill(){
	cout<<setw(72)<<"Electricity Bill"<<endl;
    cout<<"\t\t\t___________________________________________________________________________________________________________"<<endl;    
    cout<<"\t\t\t\t\t "<<"\tUser Name       |"<<"SALEEHA RANI "<<endl;
    cout<<"\t\t\t\t\t "<<"\tUser Address    |"<<"Narowal"<<endl;
    cout<<"\t\t\t\t\t "<<"\tCustomer ID     |"<<"5265265260"<<endl;	
    cout<<"\t\t\t\t\t "<<"\tMeter No        |"<<"2626"<<endl;
    cout<<"\t\t\t\t\t--------------------------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t "<<"\tGST             |"<<"700"<<endl;
    cout<<"\t\t\t\t\t "<<"\tExtra Tax       |"<<"500"<<endl;
    cout<<"\t\t\t\t\t "<<"\tUnit Consumed   |"<<"250 Units"<<endl;	
    cout<<"\t\t\t\t\t "<<"\tConsumed price  |"<<"9500 rs"<<endl;
   	cout<<"\t\t\t\t\t--------------------------------------------------------------"<<endl;
   	cout<<"\t\t\t\t\t "<<"\tTotal Amount    |"<<"10700 rs"<<endl;
    cout<<"\t\t\t\t\t "<<"\tDue Date        |"<<"10/03/2023"<<endl;
	cout<<"\t\t\t\t\t "<<"\twithin due date |"<<"10950 rs"<<endl;	
    cout<<"\t\t\t\t\t "<<"\tAfter due date  |"<<"12700 rs"<<endl;
    cout<<"\t\t\t___________________________________________________________________________________________________________"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\tYour electricity bill amount is deducted from your Account"<<endl;
    cout<<endl;
    cout<<setw(75)<<"Your remaining balance is"<<":: "<<saleemoney-10950<<" "<<"Rs"<<endl;
    cout<<endl;
    cout<<endl;
	cout<<"\t\t\t\t\t\t "<<"\t\t     R-B-P"<<endl;
	cout<<endl;
    cout<<"\t\t\t\t\t\t\tThanks for using our Service."<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t [Designed by HUGS FOR BUGS]"<<endl;	
    cout<<endl;
    cout<<endl;
    cout<<"For more information:"<<endl;
    cout<<"Call  :555-252-5156"<<endl;
    cout<<"Visit :www.HugsForBugs.com"<<endl;
    cout<<"All copyrights reserved to HUGS FOR BUGS."<<endl;

}
int hafsaBill(){
	cout<<setw(72)<<"Electricity Bill"<<endl;
    cout<<"\t\t\t___________________________________________________________________________________________________________"<<endl;    
    cout<<"\t\t\t\t\t "<<"\tUser Name       |"<<"HAFSA GONDAL "<<endl;
    cout<<"\t\t\t\t\t "<<"\tUser Address    |"<<"Narowal"<<endl;
    cout<<"\t\t\t\t\t "<<"\tCustomer ID     |"<<"5695695690"<<endl;	
    cout<<"\t\t\t\t\t "<<"\tMeter No        |"<<"6969"<<endl;
    cout<<"\t\t\t\t\t--------------------------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t "<<"\tGST             |"<<"700"<<endl;
    cout<<"\t\t\t\t\t "<<"\tExtra Tax       |"<<"500"<<endl;
    cout<<"\t\t\t\t\t "<<"\tUnit Consumed   |"<<"350 Units"<<endl;	
    cout<<"\t\t\t\t\t "<<"\tConsumed price  |"<<"12000 rs"<<endl;
   	cout<<"\t\t\t\t\t--------------------------------------------------------------"<<endl;
   	cout<<"\t\t\t\t\t "<<"\tTotal Amount    |"<<"13200 rs"<<endl;
    cout<<"\t\t\t\t\t "<<"\tDue Date        |"<<"10/03/2023"<<endl;
	cout<<"\t\t\t\t\t "<<"\twithin due date |"<<"13200 rs"<<endl;	
    cout<<"\t\t\t\t\t "<<"\tAfter due date  |"<<"15200 rs"<<endl;
    cout<<"\t\t\t___________________________________________________________________________________________________________"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\tYour electricity bill amount is deducted from your Account"<<endl;
    cout<<endl;
    cout<<setw(75)<<"Your remaining balance is"<<":: "<<hafsamoney-13200<<" "<<"Rs"<<endl;
    cout<<endl;
    cout<<endl;
	cout<<"\t\t\t\t\t\t "<<"\t\t     R-B-P"<<endl;
	cout<<endl;
    cout<<"\t\t\t\t\t\t\tThanks for using our Service."<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t [Designed by HUGS FOR BUGS]"<<endl;	
    cout<<endl;
    cout<<endl;
    cout<<"For more information:"<<endl;
    cout<<"Call  :555-252-5156"<<endl;
    cout<<"Visit :www.HugsForBugs.com"<<endl;
    cout<<"All copyrights reserved to HUGS FOR BUGS."<<endl;

}
int huzBill(){
	cout<<setw(72)<<"Electricity Bill"<<endl;
    cout<<"\t\t\t___________________________________________________________________________________________________________"<<endl;    
    cout<<"\t\t\t\t\t "<<"\tUser Name       |"<<"SYED HUZAFA "<<endl;
    cout<<"\t\t\t\t\t "<<"\tUser Address    |"<<"LDA Phase 2 Lahore"<<endl;
    cout<<"\t\t\t\t\t "<<"\tCustomer ID     |"<<"5205205200"<<endl;	
    cout<<"\t\t\t\t\t "<<"\tMeter No        |"<<"2020"<<endl;
    cout<<"\t\t\t\t\t--------------------------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t "<<"\tGST             |"<<"700"<<endl;
    cout<<"\t\t\t\t\t "<<"\tExtra Tax       |"<<"500"<<endl;
    cout<<"\t\t\t\t\t "<<"\tUnit Consumed   |"<<"240 Units"<<endl;	
    cout<<"\t\t\t\t\t "<<"\tConsumed price  |"<<"8500 rs"<<endl;
   	cout<<"\t\t\t\t\t--------------------------------------------------------------"<<endl;
   	cout<<"\t\t\t\t\t "<<"\tTotal Amount    |"<<"9700 rs"<<endl;
    cout<<"\t\t\t\t\t "<<"\tDue Date        |"<<"10/03/2023"<<endl;
	cout<<"\t\t\t\t\t "<<"\twithin due date |"<<"9700 rs"<<endl;	
    cout<<"\t\t\t\t\t "<<"\tAfter due date  |"<<"11700 rs"<<endl;
    cout<<"\t\t\t___________________________________________________________________________________________________________"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\tYour electricity bill amount is deducted from your Account"<<endl;
    cout<<endl;
    cout<<setw(75)<<"Your remaining balance is"<<":: "<<huzmoney-9700<<" "<<"Rs"<<endl;
    cout<<endl;
    cout<<endl;
	cout<<"\t\t\t\t\t\t "<<"\t\t     R-B-P"<<endl;
	cout<<endl;
    cout<<"\t\t\t\t\t\t\tThanks for using our Service."<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t [Designed by HUGS FOR BUGS]"<<endl;	
    cout<<endl;
    cout<<endl;
    cout<<"For more information:"<<endl;
    cout<<"Call  :555-252-5156"<<endl;
    cout<<"Visit :www.HugsForBugs.com"<<endl;
    cout<<"All copyrights reserved to HUGS FOR BUGS."<<endl;


}
int rehmanBill(){
	cout<<setw(72)<<"Electricity Bill"<<endl;
    cout<<"\t\t\t___________________________________________________________________________________________________________"<<endl;    
    cout<<"\t\t\t\t\t "<<"\tUser Name       |"<<"A.B REHMAN "<<endl;
    cout<<"\t\t\t\t\t "<<"\tUser Address    |"<<"Peshawer"<<endl;
    cout<<"\t\t\t\t\t "<<"\tCustomer ID     |"<<"5265265260"<<endl;	
    cout<<"\t\t\t\t\t "<<"\tMeter No        |"<<"2626"<<endl;
    cout<<"\t\t\t\t\t--------------------------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t "<<"\tGST             |"<<"700"<<endl;
    cout<<"\t\t\t\t\t "<<"\tExtra Tax       |"<<"500"<<endl;
    cout<<"\t\t\t\t\t "<<"\tUnit Consumed   |"<<"400 Units"<<endl;	
    cout<<"\t\t\t\t\t "<<"\tConsumed price  |"<<"14000 rs"<<endl;
   	cout<<"\t\t\t\t\t--------------------------------------------------------------"<<endl;
   	cout<<"\t\t\t\t\t "<<"\tTotal Amount    |"<<"15200 rs"<<endl;
    cout<<"\t\t\t\t\t "<<"\tDue Date        |"<<"10/03/2023"<<endl;
	cout<<"\t\t\t\t\t "<<"\twithin due date |"<<"15200 rs"<<endl;	
    cout<<"\t\t\t\t\t "<<"\tAfter due date  |"<<"17200 rs"<<endl;
    cout<<"\t\t\t___________________________________________________________________________________________________________"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\tYour electricity bill amount is deducted from your Account"<<endl;
    cout<<endl;
    cout<<setw(75)<<"Your remaining balance is"<<":: "<<rehmoney-15200<<" "<<"Rs"<<endl;
    cout<<endl;
    cout<<endl;
	cout<<"\t\t\t\t\t\t "<<"\t\t     R-B-P"<<endl;
	cout<<endl;
    cout<<"\t\t\t\t\t\t\tThanks for using our Service."<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t [Designed by HUGS FOR BUGS]"<<endl;	
    cout<<endl;
    cout<<endl;
    cout<<"For more information:"<<endl;
    cout<<"Call  :555-252-5156"<<endl;
    cout<<"Visit :www.HugsForBugs.com"<<endl;
    cout<<"All copyrights reserved to HUGS FOR BUGS."<<endl;

}
//////////////////end electric bill//////



////////////////////////////////////////////start currency exchanger//////////////////////////////////////
int currencyExchange(){
	
cout<<endl;
	cout<<endl;
	cout<<"\t\t _______________________________________________ CURRENCY EXCHANGE __________________________________________  "<<endl;
	cout<<endl;
	cout<<":NOTE:"<<endl;
	cout<<"This program is designed on 5th of March 2023 so the currency exchage calculator will work according to that current currencies rate internationaly."<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"Please select your current Currency:"<<endl;
	cout<<endl;
	cout<<"\t\t (A) PAK RUPEES \t (B) US DOLLAR \t (C)  EURO \t (D) POUND STERLING \t (E) SAUDI RIYAL"<<endl;
	while(true){
	getline(cin,select);  
	if(select=="A" || select=="a"){
		pakCurrency();
		break;
	}
	else if(select=="B" || select=="b"){
		usDollar();
		break;
	}
	else if(select=="C" || select=="c"){
		europeanEuro();
		break;
	}
	else if(select=="D" || select=="d"){
		britishPound();
		break;
	}
	else if(select=="E" || select=="e"){
		saudiRayal();
		break;
	}
	else{
		cout<<"Please select from the given options :"<<" ";
		continue;
	}
}
}
//////////////////////////////simple functions start///////////////

////pk////////
int pakCurrency(){
	string select;
	cout<<endl;
	cout<<"Enter amount you want to change:";
	cin>>amount;
	cout<<endl;
	cout<<"Enter currency in which you want to change your PAK RUPEES."<<endl;
	cout<<endl;
	cout<<"\t\t (A) PAK RUPEES \t (B) US DOLLAR \t (C)  EURO \t (D)  POUND STERLING \t (E) SAUDI RIYAL"<<endl;;
	while(true){
	cin>>select;
	if(select=="A" || select=="a"){
		pakCurrencyExchangepk();
		break;
	}
	else if(select=="B" || select=="b"){
		usDollarExchangepk();
		break;
	}
	else if(select=="C" || select=="c"){
		europeanEuroExchangepk();
		break;
	}
	else if(select=="D" || select=="d"){
		britishPoundExchangepk();
		break;
	}
	else if(select=="E" || select=="e"){
		saudiRayalExchangepk();
		break;
	}
	else{
		continue;
	}
}
}
/////////$/////////////
int usDollar(){
    string select;
	cout<<endl;
	cout<<"Enter amount you want to change:";
	cin>>amount;
	cout<<endl;
	cout<<"Enter currency in which you want to change your US DOLLAR."<<endl;
	cout<<endl;
	cout<<"\t\t (A) PAK RUPEES \t (B) US DOLLAR \t (C)  EURO \t (D)  POUND STERLING \t (E) SAUDI RIYAL"<<endl;;
	while(true){
	cin>>select;
	if(select=="A" || select=="a"){
		pakCurrencyExchangeus();
		break;
	}
	else if(select=="B" || select=="b"){
		usDollarExchangeus();
		break;
	}
	else if(select=="C" || select=="c"){
		europeanEuroExchangeus();
		break;
	}
	else if(select=="D" || select=="d"){
		britishPoundExchangeus();
		break;
	}
	else if(select=="E" || select=="e"){
		saudiRayalExchangeus();
		break;
	}
	else{
		continue;
	}
}	
}
///////////euro///////////
int europeanEuro(){
	string select;
	cout<<endl;
	cout<<"Enter amount you want to change:";
	cin>>amount;
	cout<<endl;
	cout<<"Enter currency in which you want to change your EURO."<<endl;
	cout<<endl;
	cout<<"\t\t (A) PAK RUPEES \t (B) US DOLLAR \t (C)  EURO \t (D)  POUND STERLING \t (E) SAUDI RIYAL"<<endl;;
	while(true){
	cin>>select;
	if(select=="A" || select=="a"){
		pakCurrencyExchangeuro();
		break;
	}
	else if(select=="B" || select=="b"){
		usDollarExchangeuro();
		break;
	}
	else if(select=="C" || select=="c"){
		europeanEuroExchangeuro();
		break;
	}
	else if(select=="D" || select=="d"){
		britishPoundExchangeuro();
		break;
	}
	else if(select=="E" || select=="e"){
		saudiRayalExchangeuro();
		break;
	}
	else{
		continue;
	}
}	
}
//////pound/////////
int britishPound(){
	string select;
	cout<<endl;
	cout<<"Enter amount you want to change:";
	cin>>amount;
	cout<<endl;
	cout<<"Enter currency in which you want to change your POUND STERLING."<<endl;
	cout<<endl;
	cout<<"\t\t (A) PAK RUPEES \t (B) US DOLLAR \t (C)  EURO \t (D)  POUND STERLING \t (E) SAUDI RIYAL"<<endl;;
	while(true){
	cin>>select;
	if(select=="A" || select=="a"){
		pakCurrencyExchangeps();
		break;
	}
	else if(select=="B" || select=="b"){
		usDollarExchangeps();
		break;
	}
	else if(select=="C" || select=="c"){
		europeanEuroExchangeps();
		break;
	}
	else if(select=="D" || select=="d"){
		britishPoundExchangeps();
		break;
	}
	else if(select=="E" || select=="e"){
		saudiRayalExchangeps();
		break;
	}
	else{
		continue;
	}
}	
	
}
////ryal///////////
int saudiRayal(){
	string select;
	cout<<endl;
	cout<<"Enter amount you want to change:";
	cin>>amount;
	cout<<endl;
	cout<<"Enter currency in which you want to change your SAUDI RIYAL."<<endl;
	cout<<endl;
	cout<<"\t\t (A) PAK RUPEES \t (B) US DOLLAR \t (C)  EURO \t (D)  POUND STERLING \t (E) SAUDI RIYAL"<<endl;;
	while(true){
	cin>>select;
	if(select=="A" || select=="a"){
		pakCurrencyExchangesr();
		break;
	}
	else if(select=="B" || select=="b"){
		usDollarExchangesr();
		break;
	}
	else if(select=="C" || select=="c"){
		europeanEuroExchangesr();
		break;
	}
	else if(select=="D" || select=="d"){
		britishPoundExchangesr();
		break;
	}
	else if(select=="E" || select=="e"){
		saudiRayalExchangesr();
		break;
	}
	else{
		continue;
	}
}	
}
///////////////////////////////simple functions end///////////////



/////////////////////////////start calculated functions////////////

//////pk t0 pk////////////
int pakCurrencyExchangepk(){
	totalmoney=amount*1;
	cout<<"Exchanged Amount ="<<totalmoney<<" "<<"Rs"<<endl;
	cout<<endl;
    cout<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<setw(80)<<"ROYAL BANK OF PAKISTAN"<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;    
    cout<<"\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t "<<"\tCurrency you have             |"<<"PAK RUPEES "<<endl;
    cout<<"\t\t\t\t\t "<<"\tCurrency in which you changed |"<<"PAK RUPEES "<<endl;
    cout<<"\t\t\t\t\t "<<"\tWithout exchanged amount      |"<<amount<<" "<<"Rs"<<endl;	
    cout<<"\t\t\t\t\t "<<"\tExchanged amount              |"<<totalmoney<<" "<<"Rs"<<endl;
    
   
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t\t     R-B-P"<<endl;
    cout<<"\t\t\t\t_________________________________________________________________________________"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\tThanks for using our Service."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t [Designed by HUGS FOR BUGS]"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"For more information:"<<endl;
    cout<<"Call  :555-252-5156"<<endl;
    cout<<"Visit :www.HugsForBugs.com"<<endl;
    cout<<"All copyrights reserved to HUGS FOR BUGS."<<endl;
}
/////////////pk to dollar//////////////
int usDollarExchangepk(){
	totalmoney=amount*0.0036;
	cout<<"Exchanged Amount ="<<totalmoney<<" "<<"$"<<endl;
	cout<<endl;
    cout<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<setw(80)<<"ROYAL BANK OF PAKISTAN"<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;    
    cout<<"\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t "<<"\tCurrency you have             |"<<"PAK RUPEES "<<endl;
    cout<<"\t\t\t\t\t "<<"\tCurrency in which you changed |"<<"US DOLLAR "<<endl;
    cout<<"\t\t\t\t\t "<<"\tWithout exchanged amount      |"<<amount<<" "<<"Rs"<<endl;	
    cout<<"\t\t\t\t\t "<<"\tExchanged amount              |"<<totalmoney<<" "<<"$"<<endl;
    
   
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t\t     R-B-P"<<endl;
    cout<<"\t\t\t\t_________________________________________________________________________________"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\tThanks for using our Service."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t [Designed by HUGS FOR BUGS]"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"For more information:"<<endl;
    cout<<"Call  :555-252-5156"<<endl;
    cout<<"Visit :www.HugsForBugs.com"<<endl;
    cout<<"All copyrights reserved to HUGS FOR BUGS."<<endl;

}
//////pk to eurox//////////////
int europeanEuroExchangepk(){
    totalmoney=amount*0.0034;
	cout<<"Exchanged Amount ="<<totalmoney<<" "<<"€"<<endl;
	cout<<endl;
    cout<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<setw(80)<<"ROYAL BANK OF PAKISTAN"<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;    
    cout<<"\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t "<<"\tCurrency you have             |"<<"PAK RUPEES "<<endl;
    cout<<"\t\t\t\t\t "<<"\tCurrency in which you changed |"<<"EURO "<<endl;
    cout<<"\t\t\t\t\t "<<"\tWithout exchanged amount      |"<<amount<<" "<<"Rs"<<endl;	
    cout<<"\t\t\t\t\t "<<"\tExchanged amount              |"<<totalmoney<<" "<<"€"<<endl;
    
   
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t\t     R-B-P"<<endl;
    cout<<"\t\t\t\t_________________________________________________________________________________"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\tThanks for using our Service."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t [Designed by HUGS FOR BUGS]"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"For more information:"<<endl;
    cout<<"Call  :555-252-5156"<<endl;
    cout<<"Visit :www.HugsForBugs.com"<<endl;
    cout<<"All copyrights reserved to HUGS FOR BUGS."<<endl;

}
/////////////pk to poundx////////////////
int britishPoundExchangepk(){
	totalmoney=amount*0.0030;
	cout<<"Exchanged Amount ="<<totalmoney<<" "<<"£"<<endl;
	cout<<endl;
    cout<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<setw(80)<<"ROYAL BANK OF PAKISTAN"<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;    
    cout<<"\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t "<<"\tCurrency you have             |"<<"PAK RUPEES "<<endl;
    cout<<"\t\t\t\t\t "<<"\tCurrency in which you changed |"<<"POUND STERLING "<<endl;
    cout<<"\t\t\t\t\t "<<"\tWithout exchanged amount      |"<<amount<<" "<<"Rs"<<endl;	
    cout<<"\t\t\t\t\t "<<"\tExchanged amount              |"<<totalmoney<<" "<<"£"<<endl;
    
   
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t\t     R-B-P"<<endl;
    cout<<"\t\t\t\t_________________________________________________________________________________"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\tThanks for using our Service."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t [Designed by HUGS FOR BUGS]"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"For more information:"<<endl;
    cout<<"Call  :555-252-5156"<<endl;
    cout<<"Visit :www.HugsForBugs.com"<<endl;
    cout<<"All copyrights reserved to HUGS FOR BUGS."<<endl;
}
////////////pk to ryalx///////////
int saudiRayalExchangepk(){
    totalmoney=amount*0.013;
	cout<<"Exchanged Amount ="<<totalmoney<<" "<<"SR"<<endl;
	cout<<endl;
    cout<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<setw(80)<<"ROYAL BANK OF PAKISTAN"<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;    
    cout<<"\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t "<<"\tCurrency you have             |"<<"PAK RUPEES "<<endl;
    cout<<"\t\t\t\t\t "<<"\tCurrency in which you changed |"<<"SAUDI RIYAL "<<endl;
    cout<<"\t\t\t\t\t "<<"\tWithout exchanged amount      |"<<amount<<" "<<"Rs"<<endl;	
    cout<<"\t\t\t\t\t "<<"\tExchanged amount              |"<<totalmoney<<" "<<"SR"<<endl;
    
   
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t\t     R-B-P"<<endl;
    cout<<"\t\t\t\t_________________________________________________________________________________"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\tThanks for using our Service."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t [Designed by HUGS FOR BUGS]"<<endl;
	cout<<endl;
    cout<<endl;
    cout<<"For more information:"<<endl;
    cout<<"Call  :555-252-5156"<<endl;
    cout<<"Visit :www.HugsForBugs.com"<<endl;
    cout<<"All copyrights reserved to HUGS FOR BUGS."<<endl;	
}
///////////////////////////////////////////////////////////END   currency exchange programs if user current currency is pakistan rupees////////////////////////



////////////////////////////////start currency exchange programs if user current currency is US DOLLAR////////////////


//////////////US TO PK//////////
int pakCurrencyExchangeus(){
	totalmoney=amount*278.90;
	cout<<"Exchanged Amount ="<<totalmoney<<" "<<"Rs"<<endl;
	cout<<endl;
    cout<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<setw(80)<<"ROYAL BANK OF PAKISTAN"<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;    
    cout<<"\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t "<<"\tCurrency you have             |"<<"US DOLLAR "<<endl;
    cout<<"\t\t\t\t\t "<<"\tCurrency in which you changed |"<<"PAK RUPEES "<<endl;
    cout<<"\t\t\t\t\t "<<"\tWithout exchanged amount      |"<<amount<<" "<<"$"<<endl;	
    cout<<"\t\t\t\t\t "<<"\tExchanged amount              |"<<totalmoney<<" "<<"Rs"<<endl;
    
   
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t\t     R-B-P"<<endl;
    cout<<"\t\t\t\t_________________________________________________________________________________"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\tThanks for using our Service."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t [Designed by HUGS FOR BUGS]"<<endl;
	cout<<endl;
    cout<<endl;
    cout<<"For more information:"<<endl;
    cout<<"Call  :555-252-5156"<<endl;
    cout<<"Visit :www.HugsForBugs.com"<<endl;
    cout<<"All copyrights reserved to HUGS FOR BUGS."<<endl;	
}

//////////////US TO EURO///////////

int europeanEuroExchangeus(){
	totalmoney=amount*0.94;
	cout<<"Exchanged Amount ="<<totalmoney<<" "<<"€"<<endl;
	cout<<endl;
    cout<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<setw(80)<<"ROYAL BANK OF PAKISTAN"<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;    
    cout<<"\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t "<<"\tCurrency you have             |"<<"US DOLLAR "<<endl;
    cout<<"\t\t\t\t\t "<<"\tCurrency in which you changed |"<<"EURO "<<endl;
    cout<<"\t\t\t\t\t "<<"\tWithout exchanged amount      |"<<amount<<" "<<"$"<<endl;	
    cout<<"\t\t\t\t\t "<<"\tExchanged amount              |"<<totalmoney<<" "<<"€"<<endl;
    
   
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t\t     R-B-P"<<endl;
    cout<<"\t\t\t\t_________________________________________________________________________________"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\tThanks for using our Service."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t [Designed by HUGS FOR BUGS]"<<endl;
	cout<<endl;
    cout<<endl;
    cout<<"For more information:"<<endl;
    cout<<"Call  :555-252-5156"<<endl;
    cout<<"Visit :www.HugsForBugs.com"<<endl;
    cout<<"All copyrights reserved to HUGS FOR BUGS."<<endl;	
}
///////////US TO POUND//////////////////
int britishPoundExchangeus(){
	totalmoney=amount*0.83;
	cout<<"Exchanged Amount ="<<totalmoney<<" "<<"£"<<endl;
	cout<<endl;
    cout<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<setw(80)<<"ROYAL BANK OF PAKISTAN"<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;    
    cout<<"\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t "<<"\tCurrency you have             |"<<"US DOLLAR "<<endl;
    cout<<"\t\t\t\t\t "<<"\tCurrency in which you changed |"<<"POUND STERLING "<<endl;
    cout<<"\t\t\t\t\t "<<"\tWithout exchanged amount      |"<<amount<<" "<<"$"<<endl;	
    cout<<"\t\t\t\t\t "<<"\tExchanged amount              |"<<totalmoney<<" "<<"£"<<endl;
    
   
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t\t     R-B-P"<<endl;
    cout<<"\t\t\t\t_________________________________________________________________________________"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\tThanks for using our Service."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t [Designed by HUGS FOR BUGS]"<<endl;
	cout<<endl;
    cout<<endl;
    cout<<"For more information:"<<endl;
    cout<<"Call  :555-252-5156"<<endl;
    cout<<"Visit :www.HugsForBugs.com"<<endl;
    cout<<"All copyrights reserved to HUGS FOR BUGS."<<endl;	
}
////////US TO RIYAL////////////////
int saudiRayalExchangeus(){
    totalmoney=amount*3.75;
	cout<<"Exchanged Amount ="<<totalmoney<<" "<<"SR"<<endl;
	cout<<endl;
    cout<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<setw(80)<<"ROYAL BANK OF PAKISTAN"<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;    
    cout<<"\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t "<<"\tCurrency you have             |"<<"US DOLLAR "<<endl;
    cout<<"\t\t\t\t\t "<<"\tCurrency in which you changed |"<<"SAUDI RIYAL "<<endl;
    cout<<"\t\t\t\t\t "<<"\tWithout exchanged amount      |"<<amount<<" "<<"$"<<endl;	
    cout<<"\t\t\t\t\t "<<"\tExchanged amount              |"<<totalmoney<<" "<<"SR"<<endl;
    
   
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t\t     R-B-P"<<endl;
    cout<<"\t\t\t\t_________________________________________________________________________________"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\tThanks for using our Service."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t [Designed by HUGS FOR BUGS]"<<endl;
	cout<<endl;
    cout<<endl;
    cout<<"For more information:"<<endl;
    cout<<"Call  :555-252-5156"<<endl;
    cout<<"Visit :www.HugsForBugs.com"<<endl;
    cout<<"All copyrights reserved to HUGS FOR BUGS."<<endl;	
}
/////////US  TO DOLLAR/////////////
int usDollarExchangeus(){
	totalmoney=amount*1;
	cout<<"Exchanged Amount ="<<totalmoney<<" "<<"$"<<endl;
	cout<<endl;
    cout<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<setw(80)<<"ROYAL BANK OF PAKISTAN"<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;    
    cout<<"\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t "<<"\tCurrency you have             |"<<"US DOLLAR "<<endl;
    cout<<"\t\t\t\t\t "<<"\tCurrency in which you changed |"<<"US DOLLAR "<<endl;
    cout<<"\t\t\t\t\t "<<"\tWithout exchanged amount      |"<<amount<<" "<<"$"<<endl;	
    cout<<"\t\t\t\t\t "<<"\tExchanged amount              |"<<totalmoney<<" "<<"$"<<endl;
    
   
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t\t     R-B-P"<<endl;
    cout<<"\t\t\t\t_________________________________________________________________________________"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\tThanks for using our Service."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t [Designed by HUGS FOR BUGS]"<<endl;
	cout<<endl;
    cout<<endl;
    cout<<"For more information:"<<endl;
    cout<<"Call  :555-252-5156"<<endl;
    cout<<"Visit :www.HugsForBugs.com"<<endl;
    cout<<"All copyrights reserved to HUGS FOR BUGS."<<endl;	
}
/////////////////////////END    currency exchange programs if user current currency is US DOLLAR/////////////////////

//////////////////START CURRECY excgange program if user current currency is EURO////////////////////

/////////euro to pk/////////////
int pakCurrencyExchangeuro(){
	totalmoney=amount*297.04;
	cout<<"Exchanged Amount ="<<totalmoney<<" "<<"Rs"<<endl;
	cout<<endl;
    cout<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<setw(80)<<"ROYAL BANK OF PAKISTAN"<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;    
    cout<<"\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t "<<"\tCurrency you have             |"<<"EURO "<<endl;
    cout<<"\t\t\t\t\t "<<"\tCurrency in which you changed |"<<"PAK RUPEES "<<endl;
    cout<<"\t\t\t\t\t "<<"\tWithout exchanged amount      |"<<amount<<" "<<"€"<<endl;	
    cout<<"\t\t\t\t\t "<<"\tExchanged amount              |"<<totalmoney<<" "<<"Rs"<<endl;
    
   
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t\t     R-B-P"<<endl;
    cout<<"\t\t\t\t_________________________________________________________________________________"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\tThanks for using our Service."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t [Designed by HUGS FOR BUGS]"<<endl;
	cout<<endl;
    cout<<endl;
    cout<<"For more information:"<<endl;
    cout<<"Call  :555-252-5156"<<endl;
    cout<<"Visit :www.HugsForBugs.com"<<endl;
    cout<<"All copyrights reserved to HUGS FOR BUGS."<<endl;	
}
//////////euro to euro////////////////////
int europeanEuroExchangeuro(){
	totalmoney=amount*1;
	cout<<"Exchanged Amount ="<<totalmoney<<" "<<"€"<<endl;
	cout<<endl;
    cout<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<setw(80)<<"ROYAL BANK OF PAKISTAN"<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;    
    cout<<"\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t "<<"\tCurrency you have             |"<<"EURO "<<endl;
    cout<<"\t\t\t\t\t "<<"\tCurrency in which you changed |"<<"EURO "<<endl;
    cout<<"\t\t\t\t\t "<<"\tWithout exchanged amount      |"<<amount<<" "<<"€"<<endl;	
    cout<<"\t\t\t\t\t "<<"\tExchanged amount              |"<<totalmoney<<" "<<"€"<<endl;
    
   
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t\t     R-B-P"<<endl;
    cout<<"\t\t\t\t_________________________________________________________________________________"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\tThanks for using our Service."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t [Designed by HUGS FOR BUGS]"<<endl;
	cout<<endl;
    cout<<endl;
    cout<<"For more information:"<<endl;
    cout<<"Call  :555-252-5156"<<endl;
    cout<<"Visit :www.HugsForBugs.com"<<endl;
    cout<<"All copyrights reserved to HUGS FOR BUGS."<<endl;	
}
/////euro to pound////////////////////////
int britishPoundExchangeuro(){
	totalmoney=amount*0.88;
	cout<<"Exchanged Amount ="<<totalmoney<<" "<<"£"<<endl;
	cout<<endl;
    cout<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<setw(80)<<"ROYAL BANK OF PAKISTAN"<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;    
    cout<<"\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t "<<"\tCurrency you have             |"<<"EURO "<<endl;
    cout<<"\t\t\t\t\t "<<"\tCurrency in which you changed |"<<"POUND STERLING "<<endl;
    cout<<"\t\t\t\t\t "<<"\tWithout exchanged amount      |"<<amount<<" "<<"€"<<endl;	
    cout<<"\t\t\t\t\t "<<"\tExchanged amount              |"<<totalmoney<<" "<<"£"<<endl;
    
   
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t\t     R-B-P"<<endl;
    cout<<"\t\t\t\t_________________________________________________________________________________"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\tThanks for using our Service."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t [Designed by HUGS FOR BUGS]"<<endl;	
    cout<<endl;
    cout<<endl;
    cout<<"For more information:"<<endl;
    cout<<"Call  :555-252-5156"<<endl;
    cout<<"Visit :www.HugsForBugs.com"<<endl;
    cout<<"All copyrights reserved to HUGS FOR BUGS."<<endl;
}
///////////////euro to riyal///////////////
int saudiRayalExchangeuro(){
	totalmoney=amount*4.00;
	cout<<"Exchanged Amount ="<<totalmoney<<" "<<"SR"<<endl;
	cout<<endl;
    cout<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<setw(80)<<"ROYAL BANK OF PAKISTAN"<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;    
    cout<<"\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t "<<"\tCurrency you have             |"<<"EURO "<<endl;
    cout<<"\t\t\t\t\t "<<"\tCurrency in which you changed |"<<"SAUDI RIYAL "<<endl;
    cout<<"\t\t\t\t\t "<<"\tWithout exchanged amount      |"<<amount<<" "<<"€"<<endl;	
    cout<<"\t\t\t\t\t "<<"\tExchanged amount              |"<<totalmoney<<" "<<"SR"<<endl;
    
   
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t\t     R-B-P"<<endl;
    cout<<"\t\t\t\t_________________________________________________________________________________"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\tThanks for using our Service."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t [Designed by HUGS FOR BUGS]"<<endl;
	cout<<endl;
    cout<<endl;
    cout<<"For more information:"<<endl;
    cout<<"Call  :555-252-5156"<<endl;
    cout<<"Visit :www.HugsForBugs.com"<<endl;
    cout<<"All copyrights reserved to HUGS FOR BUGS."<<endl;	
}
///////////////euro to dollar/////////////
int usDollarExchangeuro(){
	totalmoney=amount*1.07;
	cout<<"Exchanged Amount ="<<totalmoney<<" "<<"$"<<endl;
	cout<<endl;
    cout<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<setw(80)<<"ROYAL BANK OF PAKISTAN"<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;    
    cout<<"\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t "<<"\tCurrency you have             |"<<"EURO "<<endl;
    cout<<"\t\t\t\t\t "<<"\tCurrency in which you changed |"<<"US DOLLAR "<<endl;
    cout<<"\t\t\t\t\t "<<"\tWithout exchanged amount      |"<<amount<<" "<<"€"<<endl;	
    cout<<"\t\t\t\t\t "<<"\tExchanged amount              |"<<totalmoney<<" "<<"$"<<endl;
    
   
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t\t     R-B-P"<<endl;
    cout<<"\t\t\t\t_________________________________________________________________________________"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\tThanks for using our Service."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t [Designed by HUGS FOR BUGS]"<<endl;
	cout<<endl;
    cout<<endl;
    cout<<"For more information:"<<endl;
    cout<<"Call  :555-252-5156"<<endl;
    cout<<"Visit :www.HugsForBugs.com"<<endl;
    cout<<"All copyrights reserved to HUGS FOR BUGS."<<endl;	
	
}
//////////////////END CURREnCY excgange program if user current currency is EURO////////////////////


/////////////////START CURREnCY excgange program if user current currency is POUND STERLING////////////////////


/////////////////ps to pk//////////////
int pakCurrencyExchangeps(){
	totalmoney=amount*335.66;
	cout<<"Exchanged Amount ="<<totalmoney<<" "<<"Rs"<<endl;
	cout<<endl;
    cout<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<setw(80)<<"ROYAL BANK OF PAKISTAN"<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;    
    cout<<"\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t "<<"\tCurrency you have             |"<<"POUND STERLING "<<endl;
    cout<<"\t\t\t\t\t "<<"\tCurrency in which you changed |"<<"PAK RUPEES"<<endl;
    cout<<"\t\t\t\t\t "<<"\tWithout exchanged amount      |"<<amount<<" "<<"£"<<endl;	
    cout<<"\t\t\t\t\t "<<"\tExchanged amount              |"<<totalmoney<<" "<<"Rs"<<endl;
    
   
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t\t     R-B-P"<<endl;
    cout<<"\t\t\t\t_________________________________________________________________________________"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\tThanks for using our Service."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t [Designed by HUGS FOR BUGS]"<<endl;
	cout<<endl;
    cout<<endl;
    cout<<"For more information:"<<endl;
    cout<<"Call  :555-252-5156"<<endl;
    cout<<"Visit :www.HugsForBugs.com"<<endl;
    cout<<"All copyrights reserved to HUGS FOR BUGS."<<endl;	
}
int europeanEuroExchangeps(){
	totalmoney=amount*1.13;
	cout<<"Exchanged Amount ="<<totalmoney<<" "<<"€"<<endl;
	cout<<endl;
    cout<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<setw(80)<<"ROYAL BANK OF PAKISTAN"<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;    
    cout<<"\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t "<<"\tCurrency you have             |"<<"POUND STERLING "<<endl;
    cout<<"\t\t\t\t\t "<<"\tCurrency in which you changed |"<<"EURO"<<endl;
    cout<<"\t\t\t\t\t "<<"\tWithout exchanged amount      |"<<amount<<" "<<"£"<<endl;	
    cout<<"\t\t\t\t\t "<<"\tExchanged amount              |"<<totalmoney<<" "<<"€"<<endl;
    
   
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t\t     R-B-P"<<endl;
    cout<<"\t\t\t\t_________________________________________________________________________________"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\tThanks for using our Service."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t [Designed by HUGS FOR BUGS]"<<endl;
	cout<<endl;
    cout<<endl;
    cout<<"For more information:"<<endl;
    cout<<"Call  :555-252-5156"<<endl;
    cout<<"Visit :www.HugsForBugs.com"<<endl;
    cout<<"All copyrights reserved to HUGS FOR BUGS."<<endl;	
}
int britishPoundExchangeps(){
	totalmoney=amount*1;
	cout<<"Exchanged Amount ="<<totalmoney<<" "<<"£"<<endl;
	cout<<endl;
    cout<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<setw(80)<<"ROYAL BANK OF PAKISTAN"<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;    
    cout<<"\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t "<<"\tCurrency you have             |"<<"POUND STERLING "<<endl;
    cout<<"\t\t\t\t\t "<<"\tCurrency in which you changed |"<<"POUND STERLING"<<endl;
    cout<<"\t\t\t\t\t "<<"\tWithout exchanged amount      |"<<amount<<" "<<"£"<<endl;	
    cout<<"\t\t\t\t\t "<<"\tExchanged amount              |"<<totalmoney<<" "<<"£"<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t\t     R-B-P"<<endl;
    cout<<"\t\t\t\t_________________________________________________________________________________"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\tThanks for using our Service."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t [Designed by HUGS FOR BUGS]"<<endl;
	cout<<endl;
    cout<<endl;
    cout<<"For more information:"<<endl;
    cout<<"Call  :555-252-5156"<<endl;
    cout<<"Visit :www.HugsForBugs.com"<<endl;
    cout<<"All copyrights reserved to HUGS FOR BUGS."<<endl;	
	
}
int saudiRayalExchangeps(){
	totalmoney=amount*4.52;
	cout<<"Exchanged Amount ="<<totalmoney<<" "<<"SR"<<endl;
	cout<<endl;
    cout<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<setw(80)<<"ROYAL BANK OF PAKISTAN"<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;    
    cout<<"\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t "<<"\tCurrency you have             |"<<"POUND STERLING "<<endl;
    cout<<"\t\t\t\t\t "<<"\tCurrency in which you changed |"<<"SAUDI RIYAL"<<endl;
    cout<<"\t\t\t\t\t "<<"\tWithout exchanged amount      |"<<amount<<" "<<"£"<<endl;	
    cout<<"\t\t\t\t\t "<<"\tExchanged amount              |"<<totalmoney<<" "<<"SR"<<endl;
    
   
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t\t     R-B-P"<<endl;
    cout<<"\t\t\t\t_________________________________________________________________________________"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\tThanks for using our Service."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t [Designed by HUGS FOR BUGS]"<<endl;
	cout<<endl;
    cout<<endl;
    cout<<"For more information:"<<endl;
    cout<<"Call  :555-252-5156"<<endl;
    cout<<"Visit :www.HugsForBugs.com"<<endl;
    cout<<"All copyrights reserved to HUGS FOR BUGS."<<endl;	
}
int usDollarExchangeps(){
    totalmoney=amount*1.20;
	cout<<"Exchanged Amount ="<<totalmoney<<" "<<"$"<<endl;
	cout<<endl;
    cout<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<setw(80)<<"ROYAL BANK OF PAKISTAN"<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;    
    cout<<"\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t "<<"\tCurrency you have             |"<<"POUND STERLING "<<endl;
    cout<<"\t\t\t\t\t "<<"\tCurrency in which you changed |"<<"US DOLLAR"<<endl;
    cout<<"\t\t\t\t\t "<<"\tWithout exchanged amount      |"<<amount<<" "<<"£"<<endl;	
    cout<<"\t\t\t\t\t "<<"\tExchanged amount              |"<<totalmoney<<" "<<"$"<<endl;
    
   
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t\t     R-B-P"<<endl;
    cout<<"\t\t\t\t_________________________________________________________________________________"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\tThanks for using our Service."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t [Designed by HUGS FOR BUGS]"<<endl;
	cout<<endl;
    cout<<endl;
    cout<<"For more information:"<<endl;
    cout<<"Call  :555-252-5156"<<endl;
    cout<<"Visit :www.HugsForBugs.com"<<endl;
    cout<<"All copyrights reserved to HUGS FOR BUGS."<<endl;	
}

/////////////////END CURREnCY excgange program if user current currency is POUND STERLING////////////////////

/////////////////START CURREnCY excgange program if user current currency is SAUDI RIYAL////////////////////


//////////SR TO PK/////////
int pakCurrencyExchangesr(){
	totalmoney=amount*74.32;
	cout<<"Exchanged Amount ="<<totalmoney<<" "<<"Rs"<<endl;
	cout<<endl;
    cout<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<setw(80)<<"ROYAL BANK OF PAKISTAN"<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;    
    cout<<"\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t "<<"\tCurrency you have             |"<<"SAUDI RIYAL "<<endl;
    cout<<"\t\t\t\t\t "<<"\tCurrency in which you changed |"<<"PAK RUPEES"<<endl;
    cout<<"\t\t\t\t\t "<<"\tWithout exchanged amount      |"<<amount<<" "<<"SR"<<endl;	
    cout<<"\t\t\t\t\t "<<"\tExchanged amount              |"<<totalmoney<<" "<<"Rs"<<endl;
    
   
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t\t     R-B-P"<<endl;
    cout<<"\t\t\t\t_________________________________________________________________________________"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\tThanks for using our Service."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t [Designed by HUGS FOR BUGS]"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"For more information:"<<endl;
    cout<<"Call  :555-252-5156"<<endl;
    cout<<"Visit :www.HugsForBugs.com"<<endl;
    cout<<"All copyrights reserved to HUGS FOR BUGS."<<endl;
}
///////////////SR TO EURO//////
int europeanEuroExchangesr(){
	totalmoney=amount*0.25;
	cout<<"Exchanged Amount ="<<totalmoney<<" "<<"€"<<endl;
	cout<<endl;
    cout<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<setw(80)<<"ROYAL BANK OF PAKISTAN"<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;    
    cout<<"\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t "<<"\tCurrency you have             |"<<"SAUDI RIYAL "<<endl;
    cout<<"\t\t\t\t\t "<<"\tCurrency in which you changed |"<<"EURO"<<endl;
    cout<<"\t\t\t\t\t "<<"\tWithout exchanged amount      |"<<amount<<" "<<"SR"<<endl;	
    cout<<"\t\t\t\t\t "<<"\tExchanged amount              |"<<totalmoney<<" "<<"€"<<endl;
    
   
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t\t     R-B-P"<<endl;
    cout<<"\t\t\t\t_________________________________________________________________________________"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\tThanks for using our Service."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t [Designed by HUGS FOR BUGS]"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"For more information:"<<endl;
    cout<<"Call  :555-252-5156"<<endl;
    cout<<"Visit :www.HugsForBugs.com"<<endl;
    cout<<"All copyrights reserved to HUGS FOR BUGS."<<endl;
}
///////SR TO PS/////////////
int britishPoundExchangesr(){
	totalmoney=amount*0.22;
	cout<<"Exchanged Amount ="<<totalmoney<<" "<<"£"<<endl;
	cout<<endl;
    cout<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<setw(80)<<"ROYAL BANK OF PAKISTAN"<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;    
    cout<<"\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t "<<"\tCurrency you have             |"<<"SAUDI RIYAL "<<endl;
    cout<<"\t\t\t\t\t "<<"\tCurrency in which you changed |"<<"POUND STERLING"<<endl;
    cout<<"\t\t\t\t\t "<<"\tWithout exchanged amount      |"<<amount<<" "<<"SR"<<endl;	
    cout<<"\t\t\t\t\t "<<"\tExchanged amount              |"<<totalmoney<<" "<<"£"<<endl;
    
   
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t\t     R-B-P"<<endl;
    cout<<"\t\t\t\t_________________________________________________________________________________"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\tThanks for using our Service."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t [Designed by HUGS FOR BUGS]"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"For more information:"<<endl;
    cout<<"Call  :555-252-5156"<<endl;
    cout<<"Visit :www.HugsForBugs.com"<<endl;
    cout<<"All copyrights reserved to HUGS FOR BUGS."<<endl;
}
///////////SR TO SR//////////////
int saudiRayalExchangesr(){
	totalmoney=amount*1;
	cout<<"Exchanged Amount ="<<totalmoney<<" "<<"SR"<<endl;
	cout<<endl;
    cout<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<setw(80)<<"ROYAL BANK OF PAKISTAN"<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;    
    cout<<"\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t "<<"\tCurrency you have             |"<<"SAUDI RIYAL "<<endl;
    cout<<"\t\t\t\t\t "<<"\tCurrency in which you changed |"<<"SAUDI RIYAL"<<endl;
    cout<<"\t\t\t\t\t "<<"\tWithout exchanged amount      |"<<amount<<" "<<"SR"<<endl;	
    cout<<"\t\t\t\t\t "<<"\tExchanged amount              |"<<totalmoney<<" "<<"SR"<<endl;
    
   
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t\t     R-B-P"<<endl;
    cout<<"\t\t\t\t_________________________________________________________________________________"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\tThanks for using our Service."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t [Designed by HUGS FOR BUGS]"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"For more information:"<<endl;
    cout<<"Call  :555-252-5156"<<endl;
    cout<<"Visit :www.HugsForBugs.com"<<endl;
    cout<<"All copyrights reserved to HUGS FOR BUGS."<<endl;
	
}
//////////////SR TO USD////////////
int usDollarExchangesr(){
	totalmoney=amount*0.27;
	cout<<"Exchanged Amount ="<<totalmoney<<" "<<"$"<<endl;
	cout<<endl;
    cout<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<setw(80)<<"ROYAL BANK OF PAKISTAN"<<endl;
    cout<<"____________________________________________________________________________________________________________________________________________________"<<endl;    
    cout<<"\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t "<<"\tCurrency you have             |"<<"SAUDI RIYAL "<<endl;
    cout<<"\t\t\t\t\t "<<"\tCurrency in which you changed |"<<"US DOLLAR "<<endl;
    cout<<"\t\t\t\t\t "<<"\tWithout exchanged amount      |"<<amount<<" "<<"SR"<<endl;	
    cout<<"\t\t\t\t\t "<<"\tExchanged amount              |"<<totalmoney<<" "<<"$"<<endl;
    
   
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t\t     R-B-P"<<endl;
    cout<<"\t\t\t\t_________________________________________________________________________________"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\tThanks for using our Service."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t "<<"\t [Designed by HUGS FOR BUGS]"<<endl;
	cout<<endl;
    cout<<endl;
    cout<<"For more information:"<<endl;
    cout<<"Call  :555-252-5156"<<endl;
    cout<<"Visit :www.HugsForBugs.com"<<endl;
    cout<<"All copyrights reserved to HUGS FOR BUGS."<<endl;	
}



////////////////END CURREnCY excgange program if user current currency is SAUDI RIYAL////////////////////	

//////////////////////////////////end currency exchanger/////////////////////////////////////
