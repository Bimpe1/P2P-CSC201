#include <iostream>
#include <cmath>

using namespace std;
//void sayHi(string name,int age);

/*double cube(double num){
    double result = num* num*num;
    cout<<"Hello\n";
    return result;

int getMax(int num1,int num2,int num3){
int result;
if(num1>=num2 && num1>=num3){
    result = num1;
}else if(num2>=num1 &&num2>=num3){
    result= num2;
}

else{
    result = num3;
}
return result;
}
string getDayOfWeek(int dayNum){
    string dayName;
    switch(dayNum){
        case 0:
            dayName="Sunday";
        break;
        case 1:
            dayName="Monday";
        break;
        case 2:
            dayName="Tuesday";
        break;
        case 3:
            dayName="Wednesday";
        break;
        case 4:
            dayName="Thursday";
        break;
        case 5:
            dayName="Friday";
        break;
        case 6:
            dayName="Saturday";
        break;
default:
    dayName="Invalid Day Number";
   }
    return dayName;*/




int main()
{
/*  cout <<"   /|"<< endl;
    cout <<"  / |"<< endl;
    cout <<" /  |"<< endl;
    cout <<"/___|"<< endl;
    return 0;
string characterName = "Tom";
int characterAge;
characterAge = 70;
 cout <<"There once was a man named "<<characterName<< endl;
 cout <<"He was 70 years old" << endl;
 cout <<"He did not like the name George"<< endl;
 cout <<"But he did not like being 70"<< endl;

 char grade = 'A';
 string phrase ="Giraffe Academy";

 int age = 50;
 double gpa = 2.3;
 bool isMale= false;
  cout << grade<< endl;
    cout << "Hello\n";
    cout << "grade"<< endl;

    string phrase = "Giraffe Academy";
    string phrasesub;
    phrasesub = phrase.substr(9,4);
    cout<< phrasesub;
    return 0;
    cout<< fmin(3,10);
     string name;
     cout<< "Enter your name: ";
     getline(cin, name);
     cout<<"Hello "<< name;

    //BuILDING A CALCULATOR
    double num1, num2;
    cout<<"Enter first number";
    cin>>num1;
    cout<<"Enter second number";
    cin>>num2;
    cout<< num1+num2;

    //Building a Mad Libs
    string colour,pluralNoun,celebrity;
    cout<<"Enter a colour: ";
    getline(cin,colour);
    cout<<"Enter a pluralNoun: ";
    getline(cin,pluralNoun);
    cout<<"Enter a celebrity: ";
    getline(cin,celebrity);

    cout<<"Roses are "<<colour<<endl;
    cout<<pluralNoun<< " are blue"<<endl;
    cout<<"I love " <<celebrity<<endl;


    int luckyNums[20]={4,8,15,16,23,42};
    luckyNums[10]=100;
    cout<< luckyNums[10];

    //Functions
    //sayHi("Bimpe",17);

    //Return Keyword
    //double answer = cube(5.0);
    //cout<<cube(5.0);


//If Statements
    bool isMale = true;
    bool isTall = false;
    if(isMale && isTall){
        cout<<"You are a tall male";
    }else if(isMale && !isTall){
        cout<<"You are a short male";
    }else if(!isMale && isTall){
        cout<<"You are tall but not male";
    }else{
        cout<<"You are not male and not tall";
    }


//cout<<getMax(2,50,100);

//Building a better Calculator
int num1,num2;
char op;

cout<<"Enter first number: ";
cin>> num1;
cout<<"Enter operator: ";
cin>> op;
cout<<"Enter second number: ";
cin>> num2;
int result;
if(op == '+'){
        result= num1+num2;
}else if(op == '-'){
        result= num1-num2;
}else if(op == '/'){
        result= num1/num2;
}else if(op == '*'){
        result= num1*num2;
}else{
    cout<<"Invalid Operator";
}
cout<<result;


//Switch Statements
//cout<<getDayOfWeek(4);



//While Loops
int index =1;
while (index <= 5){
    cout<<index <<endl;
    index++;
}
int index =6;
while (index <= 5){
    cout<< index <<endl;
}*/

int index = 4;
do{
    index++;
}while(index <= 5);
    cout<<index;
    return 0;
}


/*void sayHi(string name,int age){
    cout<<"Hello "<<name<< " you are "<<age;*/


