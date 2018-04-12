#include "exercise1.hpp"

//Print "Hello World" to the default system output
void task1() {    
    cout << "Hello World" << endl;
}
//Ask the user to enter their first name and print "Hello USERNAME"
void task2() {
    string firstname;
    cout << "Enter your first name" << endl;
    cin >> firstname;
    cout << "Hello " << firstname << endl;
}
// //Ask a user to enter their full name and print the initials (ie. John Doe should yield JD)
void task3() {
    string firstname, lastname;
    cout << "Enter your full name" << endl;
    cin >> firstname >> lastname;
    cout << "Your initials are " << firstname.at(0) << lastname.at(0) <<endl;
}
// //Ask a user to enter their age and print "Minor" (if age is less than 21) or "Major" (if age is 21+)
void task4() {
    int age;
    cout << "Enter age" << endl;
    cin >> age;
    if (age < 21) {
        cout << "Minor" << endl;
    }
    else {
        cout << "Major" << endl;
    }
}
// //Generate a random number, print it, and print whether it's odd or even
void task5() {
    long a = rand();
    cout << a << " is ";
    int rem = a % 2;

    if (rem == 0){
        cout << "even";
    } else {
        cout << "odd";
    }
    cout << endl;
}
//Print all numbers between 1 and 20 (inclusive).
void task6() {
    for(int i = 1; i <=20; i++){
        cout << i << " ";
    }
    cout << endl;
}
//Calculate and print sum of all numbers between 1 and 100 (inclusive).
void task7() {
    int sum = 0;
    for(int i = 1; i <=100; i++){
        sum += i;
    }
    cout << "Sum of all number between 1 and 100 is " << sum << endl;
}
//Calculate and print sum of all multiples of 253 between 1 and 2018 (inclusive).
void task8() {
    int sum = 0;
    for (int i = 1; i <= 2018; i++) {
        if (i % 253 == 0){
            sum += i;
        }
    }
   cout << "Sum of all multiples of 253 between 1 and 2018 is " << sum << endl;
}
//Calculate and print sum and product of all numbers between 1 and 20 (inclusive). Hint: use a proper data type to hold a very large value of the product. 
void task9() {
    long product = 1;
    for (int i = 1; i <= 20; i++) {
        product *= i;
    }
    cout << "Product of all numbers between 1 and 20 is " << product << endl;
}
//Print all numbers between 1 and 100 (inclusive) replacing all multiples of 3 with "fuzz", multiples of 5 with "buzz", multiples of 3 and 5 with "zzz".
void task10() {
    for (int i = 1; i <= 100; i++) {
        cout << setw(5);
        if(i % 3 == 0 && i % 5 ==0){
            cout << "zzz";
        }else if (i % 3 == 0){
            cout << "fuzz";
        }else if (i % 5 == 0){
            cout << "buzz";
        }else{
            cout << i;
        }
        if (i % 10 == 0){
            cout << endl;
        }
    }
}
