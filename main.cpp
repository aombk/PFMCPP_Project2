#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 
 int
 float
 double
 bool
 char
 void
 

 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    int hours = 4;
    int minutes = 33;
    int gods = 12;

    float roentgen = 3.6f;
    float abrrPi = 3.142f;
    float abbrSqr2 = 1.414f;
    //that "f" at the end, i have seen it used before. but i dont really get it and tbh i find it a bit annoying.
    //now that i think of it, it could be regarded as a tiny deviation from the DRY principle, right?

    double sizeOfBed = 2.0;
    double whiskey = 3;
    double value = 0.11;

    bool bypassA = true;
    bool flatEarth = false;
    bool climateChange = true;

    char firstLetter ='A';
    char lastLetter = 'Z';
    char bestLetter = 'k';
    
    ignoreUnused(number, hours, minutes, gods, roentgen, abrrPi, abbrSqr2, sizeOfBed, whiskey, value, bypassA, flatEarth, climateChange, firstLetter, lastLetter, bestLetter); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
void returnNothing(float inputAnything, int somethingMore)
{
    ignoreUnused(inputAnything, somethingMore);
}
/*
 2)
 */
float goGetIceCream(bool cone, int iceCreamBalls, char Flavor = 'b')
{
    ignoreUnused(cone, iceCreamBalls, Flavor);
    return {};
}
/*
 3)
 */
int countEngineFailures(bool tellTheTruth = false, int giveUpLimit = 2)
{
    ignoreUnused(tellTheTruth, giveUpLimit);
    return {};
}
/*
 4)
 */
void walk(char routeShape)
{
    ignoreUnused(routeShape);
}
/*
 5)
 */
void stopTrain(bool beforeAccident = false)
{
    ignoreUnused(beforeAccident);
}
/*
 6)
 */
bool findKeys(float availableTime, bool extensiveSearch = false)
{
    ignoreUnused(availableTime, extensiveSearch);
    return {};
}
/*
 7)
 */
float divideNumbers(float numberA, float numberB= 1, float numberC = 2)
{
    ignoreUnused(numberA, numberB, numberC);
    return {};
}
/*
 8)
 */
int buyApples(int number = 10, char color = 'r', float size = 2.5f)
{
    ignoreUnused(number, color, size);
    return {};
}
/*
 9)
 */
void wait(float time = 1233123451.f)
{
    ignoreUnused(time);
}
/*
 10)
 */
void quit(bool saveBeforeQuitting = false)
{
    ignoreUnused(saveBeforeQuitting);
}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    returnNothing(4.3f, 12);
    //2)
    auto lick = goGetIceCream(true, 2);
    //3)
    auto bitterTruth = countEngineFailures();
    //4)
    walk('o');
    //5)
    stopTrain();
    //6)
    auto didYou = findKeys(600, true);
    //7)
    auto divisionResult = divideNumbers(15, 16, 12);
    //8)
    auto giveMe = buyApples(3);
    //9)
    wait(60.f);
    //10)
    quit(true);
    
    ignoreUnused(carRented, lick, bitterTruth, didYou, divisionResult, giveMe);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
