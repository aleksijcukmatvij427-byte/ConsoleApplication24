#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Task 1
    cout << "Task 1. Rectangle or Square" << endl;
    double side1, side2;
    cout << "Enter side 1: ";
    cin >> side1;
    cout << "Enter side 2: ";
    cin >> side2;
    if (side1 == side2) {
        cout << "It is a square." << endl;
    }
    else {
        cout << "It is a rectangle, not a square." << endl;
    }

    // Task 2
    cout << "\nTask 2. Child's age and education" << endl;
    int age;
    cout << "Enter child's age: ";
    cin >> age;
    if (age < 0) {
        cout << "Invalid age." << endl;
    }
    else if (age < 3) {
        cout << "Too young for kindergarten." << endl;
    }
    else if (age <= 6) {
        cout << "Can attend kindergarten." << endl;
    }
    else if (age <= 17) {
        cout << "Can attend school." << endl;
    }
    else {
        cout << "Can attend university or work." << endl;
    }

    // Task 3
    cout << "\nTask 3. Exactly two negative numbers" << endl;
    double a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    int negCount = 0;
    if (a < 0) negCount++;
    if (b < 0) negCount++;
    if (c < 0) negCount++;
    if (negCount == 2) {
        cout << "Exactly two numbers are negative." << endl;
    }
    else {
        cout << "Not exactly two numbers are negative." << endl;
    }

    // Task 4
    cout << "\nTask 4. Belongs to segment" << endl;
    double num;
    cout << "Enter a number: ";
    cin >> num;
    if ((num >= 2 && num <= 5) || (num >= -1 && num <= 1)) {
        cout << "The number belongs to the segment." << endl;
    }
    else {
        cout << "The number does not belong to the segment." << endl;
    }

    // Task 5
    cout << "\nTask 5. Only two numbers are equal" << endl;
    double x, y, z;
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;
    bool onlyTwoEqual = (x == y && x != z) || (x == z && x != y) || (y == z && x != y);
    if (onlyTwoEqual) {
        cout << "Only two numbers are equal." << endl;
    }
    else {
        cout << "Condition is not met." << endl;
    }

    // Task 6
    cout << "\nTask 6. All numbers are odd" << endl;
    int n1, n2, n3;
    cout << "Enter three integer numbers: ";
    cin >> n1 >> n2 >> n3;
    if (n1 % 2 != 0 && n2 % 2 != 0 && n3 % 2 != 0) {
        cout << "All numbers are odd." << endl;
    }
    else {
        cout << "Not all numbers are odd." << endl;
    }

    // Task 7
    cout << "\nTask 7. Swap two different numbers" << endl;
    double p, q;
    cout << "Enter two numbers: ";
    cin >> p >> q;
    if (p != q) {
        swap(p, q);
        cout << "Numbers were swapped." << endl;
    }
    else {
        cout << "Numbers are equal, no swap needed." << endl;
    }
    cout << "Result: " << p << " " << q << endl;

    // Task 8
    cout << "\nTask 8. Three-digit number analysis" << endl;
    int threeDigit;
    cout << "Enter a natural number (100 < a < 999): ";
    cin >> threeDigit;
    if (threeDigit > 100 && threeDigit < 999) {
        int firstDigit = threeDigit / 100;
        int middleDigit = (threeDigit / 10) % 10;
        int lastDigit = threeDigit % 10;
        int sumDigits = firstDigit + middleDigit + lastDigit;
        cout << "3 numbers, sum = " << sumDigits << endl;
        cout << firstDigit << "  " << lastDigit << endl;
    }
    else {
        cout << "Number is out of range." << endl;
    }

    // Task 9
    cout << "\nTask 9. Valid time" << endl;
    int hours, minutes, seconds;
    cout << "Enter hours, minutes, seconds: ";
    cin >> hours >> minutes >> seconds;
    if (hours >= 0 && hours < 24 && minutes >= 0 && minutes < 60 && seconds >= 0 && seconds < 60) {
        cout << "Time is valid." << endl;
    }
    else {
        cout << "Time is invalid." << endl;
    }

    // Task 10
    cout << "\nTask 10. Greeting by hour" << endl;
    int hour;
    cout << "Enter hour (0-23): ";
    cin >> hour;
    if (hour >= 0 && hour <= 5) {
        cout << "good night" << endl;
    }
    else if (hour >= 6 && hour <= 11) {
        cout << "good morning" << endl;
    }
    else if (hour >= 12 && hour <= 17) {
        cout << "good day" << endl;
    }
    else if (hour >= 18 && hour <= 23) {
        cout << "good evening" << endl;
    }
    else {
        cout << "Invalid hour." << endl;
    }

    // Task 11
    cout << "\nTask 11. Minimum of three numbers" << endl;
    double m1, m2, m3;
    cout << "Enter three numbers: ";
    cin >> m1 >> m2 >> m3;
    double minimum = min(m1, min(m2, m3));
    cout << "Minimum: " << minimum << endl;

    return 0;
}