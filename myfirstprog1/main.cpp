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
    return dayName;

    int power(int baseNum ,int powNum){
    int result=1;
    for(int i=0;i<powNum;i++){
        result = result*baseNum;
    }



    return result;
}


class movie{
private:
    string rating;
public:
    string title;
    string director;


    movie(string aTitle,string aDirector, string aRating){
        title=aTitle;
        director=aDirector;
        setRating(aRating);

    }
    void setRating(string aRating){
        if(aRating=="G"||aRating=="PG"||aRating=="PG-13"||aRating=="R"||aRating=="NR"){
            rating=aRating;
        }else{
            rating ="NR";
        }

    }
    string getRating(){
    return rating;
    }
};*/
/*class Student{
public:
    string name;
    string major;
    double gpa;

    Student(string aName,string aMajor, double aGpa){
        name=aName;
        major=aMajor;
        gpa=aGpa;
    }
    bool hasHonours(){
        if (gpa>=3.5){
            return true;
        }
        return false;
    };
};*/


class Chef{
public:
    void makeChicken(){
    cout<<"The chef makes chicken"<<endl;
    }
    void makeSalad(){
    cout<<"The chef makes salad"<<endl;
    }
    void makeSpecialDish(){
    cout<<"The chef makes bbq ribs"<<endl;
    }
};
class ItalianChef:public Chef{
    public:
        void makePasta(){
            cout<<"The chef makes pasta"<<endl;
    }
     void makeSpecialDish(){
    cout<<"The chef makes chicken parm"<<endl;
    }
};

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
}*

int index = 4;
do{
    index++;
}while(index <= 5);
    cout<<index;
    return 0;


    //Building a guessing game

    int secretNum =7;
    int guess;
    int guessCount=0;
    int guessLimit = 3;
    bool outOfGuesses= false;

    while(secretNum != guess && !outOfGuesses){
    if(guessCount< guessLimit){
        cout<<"Enter guess: ";
        cin>>guess;
        guessCount++;
}else {
        outOfGuesses =true;
    }
    }
if(outOfGuesses){
        cout<<"You lose";
} else{
         cout<< "You win";
    }


    //For loop
    int index =1;
    while(index<=5){
        cout<<index<<endl;
        index++;
    }
    for(int i=1;i<=5;i++){
      cout<<i<<endl;
    }

int nums[]={1,2,5,7,3};
for(int i=0;i<5;i++){
      cout<<nums[i]<<endl;
}


//Exponential Function

cout<< power(4,3);


//2D arrays and nested for loops
int numberGrid[3][2]={
                     {1,2},
                     {3,4},
                     {5,6}
                     };
//cout<<numberGrid[2][0];
for(int i=0;i<3;i++){
    for (int j=0;j<2;j++){
        cout<<numberGrid[i][j];
    }
    cout<<endl;
}


//Comments


//Pointers
int age=19;
int *pAge=&age;
double gpa=2.7;
double *pGpa=&gpa;
string name="Mike";
string *pName=&name;
/*cout<<"Age: "<<&age<<endl;
cout<<"gpa: "<<&gpa<<endl;
cout<<"Name: "<<&name<<endl;

//cout<<pAge;
//cout<<*pAge;


//Classes and Objects
Book book1;
book1.title="Harry Potter";
book1.author="JK Rowling";
book1.pages=500;
cout<<book1.title<<endl;

Book book2;
book2.title="Lord of the Rings";
book2.author="Tolkein";
book2.pages=700;

cout<<book2.author;



//Constructor Functions
Book book1("Harry Potter","JK Rowling",500);
Book book2("Lord of the Rings","Tolkein",700);
cout<<book1.title;

//Object Functions
Student student1("Jim","Business",2.4);
Student student2("Pam","Art",3.6);
cout<<student2.hasHonours();


//Getters and Setters

    movie avengers("The Avengers","Joss","PG-13");
    avengers.setRating("Dog");
        cout<<avengers.getRating();*/


//Inheritance
Chef chef;
chef.makeSpecialDish();

ItalianChef italianChef;
italianChef.makeSpecialDish();
return 0;
}



/*void sayHi(string name,int age){
    cout<<"Hello "<<name<< " you are "<<age;*/


