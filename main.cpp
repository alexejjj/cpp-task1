#include <iostream>
#include<cmath>
#include <random>

// ex.1
void getTrapezoidArea() {
    int b1, b2, h;
    std::cout << "Enter b1: " << std::endl;
    std::cin >> b1;

    std::cout << "Enter b2: " << std::endl;
    std::cin >> b2;

    std::cout << "Enter h: " << std::endl;
    std::cin >> h;

    std::cout << "Trapezoid area is: " << ((b1 + b2) / 2) * h << std::endl;
}

// ex.2
void getCircleArea() {
    int r;
    double pi;
    std::cout << "Enter radius r: " << std::endl;
    std::cin >> r;
    pi = 3.14;
    if (r <= 0) {
        std::cout << "Invalid radius" << std::endl;
    } else {
        std::cout << "Circle area is " << (pi * pow(r, r)) << std::endl;
        std::cout << "Circle length is " << (2 * pi * r) << std::endl;
    }
}

// ex.3
void getTriangleArea() {
    int a, b, c;
    c = 2;
    std::cout << "Enter leg1(katet): " << std::endl;
    std::cin >> a;

    std::cout << "Enter leg2(katet): " << std::endl;
    std::cin >> b;

    std::cout << "Triangle area is: " << (a * b) / 2 << std::endl;
    std::cout << "Hypotenuse is: " << pow(pow(a, c) + pow(b, c), 0.5) << std::endl;
}

// ex.4
void getSum() {
    int n;
    std::cout << "Enter a four-digit number: " << std::endl;
    std::cin >> n;

    if (n < 1000 || n > 9999)
        std::cout << "This is not a four-digit number" << std::endl;

    else {
        int a, b, c, d;
        a = n % 10; // последняя цифра
        b = (n / 10) % 10;  // предпоследняя цифра
        c = (n / 100) % 10;    // вторая цифра
        d = n / 1000;   // первая цифра

        int ans;
        ans = a + b + c + d;

        std::cout << "Answer: " << ans << std::endl;
    }
}

// ex.5
void getPolarCoord() {
    double x, y;
    std::cout << "Enter x: " << std::endl;
    std::cin >> x;
    std::cout << "Enter y: " << std::endl;
    std::cin >> y;

    std::cout << "Polar coordinates are: fi is " << atan(y / x) << "\n" << "r is " << 0.5 * sqrt((x * x) + (y * y)) << std::endl;
}

// ex.6
void getCartCoord() {
    double fi, r;
    std::cout << "Enter fi: " << std::endl;
    std::cin >> fi;
    std::cout << "Enter r: " << std::endl;
    std::cin >> r;

    std::cout << "Cartesian coordinates are: x is " << r * cos(fi) << "\n" << "y is " << r * sin(fi) << std::endl;
}

// ex.7
void getRoot() {
    double a, b, c, d, x1, x2;
    std::cout << "Your quadratic equation of the form ax^2 + bx + c " << std::endl;
    std::cout << "Enter a: " << std::endl;
    std::cin >> a;
    std::cout << "Enter b: " << std::endl;
    std::cin >> b;
    std::cout << "Enter c: " << std::endl;
    std::cin >> c;

    d = b * b - 4 * a * c; // discriminant
    if (d > 0) {
        x1 = ((-b) + sqrt(d)) / (2 * a);
        x2 = ((-b) - sqrt(d)) / (2 * a);
        std::cout << "x1 = " << x1 << std::endl;
        std::cout << "x2 = " << x2 << std::endl;
    } else if (d == 0) {
        x1 = -(b / (2 * a));
        std::cout << "x1 = x2 = " << x1 << std::endl;
    } else if (d < 0)
        std::cout << "No roots, d < 0";
}

// ex.8
void getMedian() {
    double a, b, c, medA, medB, medC, finMed1, finMed2, finMed3;
    std::cout << "Enter sides of a triangle: " << std::endl;
    std::cout << "First: " << std::endl;
    std::cin >> a;
    std::cout << "Second: " << std::endl;
    std::cin >> b;
    std::cout << "Third: " << std::endl;
    std::cin >> c;

    medA = 0.5 * sqrt((2 * b * b) + (2 * c * c) - ( a * a));
    medB = 0.5 * sqrt((2 * a * a) + (2 * c * c) - (b * b));
    medC= 0.5 * sqrt((2 * a * a) + (2 * b * b) - (c * c));

    finMed1 = 0.5 * sqrt((2 * medB * medB) + (2 * medC * medC) - (medA * medA));
    finMed2 = 0.5 * sqrt((2 * medA * medA) + (2 * medB * medB) - (medB * medB));
    finMed3 = 0.5 * sqrt((2 * medA * medA) + (2 * medB * medB) - (medC * medC));
    std::cout << "Median's are: " << finMed1 << "\n" << finMed2 << "\n" << finMed3 << "\n" << std::endl;
}

// ex.9
void getDayTime() {
    int a;
    std::cout << "Enter sec: " << std::endl;
    std::cin >> a;
    if (a > 86400 || a < 1) {
        std::cout << "Invalid number of sec" << std::endl;
    } else {
        int b, c;
        b = a / 60;
        c = (a / 60) / 60;
        std::cout << "Time passed " << b << " min or " << c << " hours" << std::endl;
    }
}

// ex.10
void isIsosceles() {
    int a, b, c;
    std::cout << "Enter a: " << std::endl;
    std::cin >> a;
    std::cout << "Enter b: " << std::endl;
    std::cin >> b;
    std::cout << "Enter c: " << std::endl;
    std::cin >> c;

    if (a < 1 || b < 1 || c < 1) {
        std::cout << "Invalid triangle" << std::endl;
    } else {
        if (a == b || a == c) {
            std::cout << "Triangle is isosceles" << std::endl;
        } else {
            std::cout << "Triangle is NOT isosceles" << std::endl;
        }
    }
}

// ex.11
void getSale () {
    int a;
    std::cout << "Enter purchase amount: " << std::endl;
    std::cin >> a;
    if (a > 1000) {
        std::cout << "Purchase amount with discount is: " << (a * 0.9) << std::endl;
    } else {
        std::cout << "You don't have a discount, purchase amount is " << a << std::endl;
    }
}

// ex.12
void getIdealWeight() {
    int a, b, dreamWeight;
    std::cout << "Enter your current height: " << std::endl;
    std::cin >> a;
    std::cout << "Enter your current weight: " << std::endl;
    std::cin >> b;
    dreamWeight = a - 100;
    if (b > dreamWeight) {
        std::cout << "You should cut your weight" << std::endl;
    } else {
        std::cout << "You should add on weight" << std::endl;
    }
}

// ex.13
void getRandomNum() {
    int res;
    std::random_device random_device;
    std::mt19937 generator(random_device());

    std::uniform_int_distribution<> distribution(1, 9); // [1, 9]

    int x = distribution(generator);
    int y = distribution(generator);
    std::cout << "Your numbers are " << x << " and " << y << '\n';
    std::cout << "Enter product of two num: " << std::endl;
    std::cin >> res;
    if (res == x * y) {
        std::cout << "correct" << std::endl;
    } else {
        std::cout << "uncorrect" << std::endl;
    }
}

// ex.14
void getNegotiationPrice() {
    int time, day;
    std::cout << "Price 100 rub per hour" << std::endl;
    std::cout << "Enter duration of your negotiation: " << std::endl;
    std::cin >> time;

    std::cout << "Enter the day of the week: " << std::endl;
    std::cin >> day;

    std::cout << "A price for you is: " << (time * 100) << std::endl;
    if (day == 6 || day == 7) {
        std::cout << "But there is a discount for you, the price is: " << ((time * 100) * 0.8) <<std::endl;
    } else {
        std::cout << "There is no discount for you" << std::endl;
    }
}

// ex.15
void getMonthInfo() {
    int a;
    std::cout << "Enter month number(1-12): " << std::endl;
    std::cin >> a;

    switch (a) {
        case 12:
            std::cout << "Dec, winter";
            break;
        case 1:
            std::cout << "Jan, winter";
            break;
        case 2:
            std::cout << "Feb, winter";
            break;
        case 3:
            std::cout << "Mar, spring";
            break;
        case 4:
            std::cout << "Apr, spring";
            break;
        case 5:
            std::cout << "May, spring";
            break;
        case 6:
            std::cout << "Jun, summer";
            break;
        case 7:
            std::cout << "Jul, summer";
            break;
        case 8:
            std::cout << "Aug, summer";
            break;
        case 9:
            std::cout << "Sep, autumn";
            break;
        case 10:
            std::cout << "Oct, autumn";
            break;
        case 11:
            std::cout << "Nov, autumn";
            break;
        default:
            std::cout << "Invalid month number" << std::endl;
    }
}

// ex.16
void findLuckyNum() {
    int num;
    std::cout << "Enter a six-digit number: " << std::endl;
    std::cin >> num;

    if (num < 100000 || num > 999999)
        std::cout << "This is not a six-digit number" << std::endl;
        // счастливым числом называется шестизначное число, в котором сумма первых трёх цифр равна сумме последних трёх цифр
    else {
        int num1, num2, num3, num4, num5, num6;
        num1 = num / 100000; // вычисление первой цифры числа и тд.
        num2 = (num / 10000) % 10;
        num3 = (num / 1000) % 10;
        num4 = (num % 1000) / 100;
        num5 = (num % 100) / 10;
        num6 = num % 10;

        if (num1 + num2 + num3 == num4 + num5 + num6)
            std::cout << "This number is LUCKY" << std::endl;
        else {
            std::cout << "This number is NOT lucky" << std::endl;
        }
    }
}

// ex.17
void writeCorrectly() {
    int num;
    std::cout << "Enter a number from 1 to 99: " << std::endl;
    std::cin >> num;
    if (num < 1 || num > 99) {
        std::cout << num << " is an invalid number" << std::endl; //proverka na interval
    } else if (num % 10 == 1) {
        std::cout << num << " kopeika" << std::endl;
    } else if (num % 10 == 2 || num % 10 == 3 || num % 10 == 4) {
        std::cout << num << " kopeiki" << std::endl;
    } else {
        std::cout << num << " kopeek" << std::endl;
    }
}

// ex.18
void isPalindrome() {
    int num;
    std::cout << "Enter a four-digit number: " << std::endl;
    std::cin >> num;
    if (num > 9999 || num < 1000) {
        std::cout << "This is an Invalid number" << std::endl;
    } else if (num / 1000 == num % 10 && num / 100 % 10 == num / 10 % 10) {
        std::cout << "This is a palindrome" << std::endl;
    } else {
        std::cout << "This is NOT a palindrome" << std::endl;
    }
}

// ex.19
void testThreeDigitNum() {
    int num;
    std::cout << "Enter a three-digit number: " << std::endl;
    std::cin >> num;
    if (num > 999 || num < 100) {
        std::cout << "This is an Invalid number" << std::endl;
    } else {
        int b, num1, num2, num3;
        std::cout << "Enter number b" << std::endl;
        std::cin >> b;
        num1 = num % 10; // последняя цифра
        num2 = (num / 10) % 10;  // предпоследняя цифра
        num3 = num / 100;    // вторая цифра

        if ((num1 * num2 * num3) < b) {
            std::cout << "Number multiply is less than b" << std::endl;
        } else {
            std::cout << "Number multiply is more than b" << std::endl;
        }

        if ((num1 + num2 + num3) % 7 == 0) {
            std::cout << "Number is divisible by 7" << std::endl;
        } else {
            std::cout << "Number is NOT divisible by 7" << std::endl;
        }

    }
}

// ex.20
void isPlaced () { // чтобы прямоугольник со сторонами ab вписался параллельно в cd, нужно чтобы стороны ab были меньше cd причем обе и сразу
    int a, b, c, d;
    std::cout << "Enter a: " << std::endl;
    std::cin >> a;
    std::cout << "Enter b: " << std::endl;
    std::cin >> b;
    std::cout << "Enter c: " << std::endl;
    std::cin >> c;
    std::cout << "Enter d: " << std::endl;
    std::cin >> d;

    if (a < c && b < d) {
        std::cout << "ab can be inscribed in parallel into cd: " << std::endl;
    } else {
        std::cout << "ab can NOT be inscribed in parallel into cd: " << std::endl;
    }
}

// ex.21
void getSize() {
    std::cout << sizeof(int) << std::endl;
    std::cout << sizeof(double) << std::endl;
    std::cout << sizeof(char) << std::endl;
    std::cout << sizeof(short) << std::endl;
    std::cout << sizeof(float) << std::endl;
}

int main() {
    getTrapezoidArea();

    //getCircleArea();

    //getTriangleArea();

    //getSum();

    //getPolarCoord();

    //getCartCoord();

    //getRoot();

    //getMedian();

    //getDayTime();

    //isIsosceles();

    //getSale();

    //getIdealWeight();

    //getRandomNum();

    //getNegotiationPrice();

    //getMonthInfo();

    //findLuckyNum();

    //writeCorrectly();

    //isPalindrome();

    //testThreeDigitNum();

    //isPlaced();

    //getSize();

    return 0;
}
