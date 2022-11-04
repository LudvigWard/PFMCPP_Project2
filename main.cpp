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
unsigned int
char
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    remember:
    Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

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
    int amount = 3;
    int price = 7;
    int time = 5;
    float celsius = 5.4f;
    float height = 18.0f;
    float miles = 2.1f;
    char a = 'a';
    char b = 'b';
    char c = 'c';
    double process = 20.5;
    double age = 57;
    double pi = 3.14;
    bool fact = true;
    bool myth = false;
    bool progress = true;
    unsigned int number1 = 27;
    unsigned int number2 = 500;
    unsigned int number3 = 40000;
    

    
    ignoreUnused(amount, price, time, celsius, height, miles, a, b, c, process, age, pi, fact, myth, progress, number1, number2, number3); //passing each variable declared to the ignoreUnused() function
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
int playMidiNote(int velocity = 0, int pitch = 35)
{
    ignoreUnused(velocity, pitch);
    return {};
}

/*
 2)
 */
float doAddition(float firstNumber, float secondNumber = 1)
{
    ignoreUnused(firstNumber, secondNumber);
    return {};
}

/*
 3)
 */
int getTimeOfDay(int hours, int minutes, int seconds)
{
    ignoreUnused(hours, minutes, seconds);
    return {};
}

/*
 4)
 */
int prepareDinner(int ingredients, int ingredientAmounts, int cookTimeInMinutes = 30)
{
    ignoreUnused(ingredients, ingredientAmounts, cookTimeInMinutes);
    return {};
}

/*
 5)
 */
float brewCoffee(float numberOfCups, float coffeeStrength, bool isEspresso = false)
{
    ignoreUnused(numberOfCups, coffeeStrength, isEspresso);
    return {};
}

/*
 6)
 */
int practiceASong(int hoursPracticed = 1, int songDifficulty = 10)
{
    ignoreUnused(hoursPracticed, songDifficulty);
    return {};
}

/*
 7)
 */
double watchNetflix(int show, bool useSurround = false, int volume = 5)
{
    ignoreUnused(show, useSurround, volume);
    return {};
}

/*
 8)
 */
bool doAKickflip(bool kick, bool flip)
{
    ignoreUnused(kick, flip);
    return {};
}

/*
 9)
 */
float eatAtRestaurant(int typeOfFood, int dish, bool vegan, int drink)
{
    ignoreUnused(typeOfFood, dish, vegan, drink);
    return {};
}

/*
 10)
 */
int rideBicycle(double milesPerHour = 10, int destination = 60)
{
    ignoreUnused(milesPerHour, destination);
    return {};
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
    auto midiNotePlayed = playMidiNote();
    //2)
    auto additionResult = doAddition(5);
    //3)
    auto timeOfDay = getTimeOfDay(5, 34, 12);
    //4)
    auto dinnerIsReady = prepareDinner(5, 6);
    //5)
    auto coffeeBrewed = brewCoffee(3, 10);
    //6)
    auto songPractice = practiceASong();
    //7)
    auto netflixEvening = watchNetflix(5, true);
    //8)
    auto skateboardTrick = doAKickflip(true, true);
    //9)
    auto diningOut = eatAtRestaurant(5, 7, true, 20);
    //10)
    auto bikeRide = rideBicycle();
    
    ignoreUnused(carRented, midiNotePlayed, additionResult, timeOfDay, dinnerIsReady, coffeeBrewed, songPractice, netflixEvening, skateboardTrick, diningOut, bikeRide);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
