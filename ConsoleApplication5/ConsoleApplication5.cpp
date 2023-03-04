#include <stdio.h>
#include <iostream>

int main()
{
    int d, m, y, y1;
    printf("What is your burth date? ");
    printf("Enter the day ");
    std::cin >> d;
    if (!std::cin)
    {
        std::cout << "Error1";

        return 0;
    }
    //if (typeid(d).name() != "int") //|| (typeid(m).name() != "int") || (typeid(y).name() != "int"))
    //{
    //    std::cout << "Error" << std::endl;
    //    return 0;
    //}
    printf("Enter the month ");
    std::cin >> m;
    printf("Enter the year ");
    std::cin >> y;
    //std::cout << typeid(d).name();
    //std::cout << typeid(m).name();
    //std::cout << typeid(y).name();
    
    if (((m == 1) || (m == 3) || (m == 5) || (m == 7) || (m == 8) || (m == 10) || (m == 12)) && ((d < 1) || (d > 31)))
    {
        printf("Error2");
    }
    else if (((m == 4) || (m == 6) || (m == 9) || (m == 11)) && ((d < 1) || (d > 30)))
    {
        printf("Error3");
    }
    else if ((m == 2) && ((d < 1) || (d > 29)))
    {
        printf("Error4");
    }
    else
    {

        if (y % 4 == 0)
        {
            printf("The year is leap ");
        }
        else if ((y % 4 == 1) || (y % 4 == 2) || (y % 4 == 3))
        {
            printf("The year is not leap ");
        }
        else
        {
            printf("Error5");
        }
        y1 = y % 12;
        switch (y1)
        {
        case 0:
        {
            printf("The Monkey year ");
        }
        break;
        case 1:
        {
            printf("The Cock year ");
        }
        break;
        case 2:
        {
            printf("The Dog year ");
        }
        break;
        case 3:
        {
            printf("The Pig year ");
        }
        break;
        case 4:
        {
            printf("The Rat year ");
        }
        break;
        case 5:
        {
            printf("The Bull year ");
        }
        break;
        case 6:
        {
            printf("The Tiger year ");
        }
        break;
        case 7:
        {
            printf("The Rabbit year ");
        }
        break;
        case 8:
        {
            printf("The Dragon year ");
        }
        break;
        case 9:
        {
            printf("The Snake year ");
        }
        break;
        case 10:
        {
            printf("The Horse year ");
        }
        break;
        case 11:
        {
            printf("The Sheep year ");
        }
        break;
        }
        if (((m == 12) && (d >= 22)) || ((m == 1) && (d <= 20)))
        {
            printf("Your zodiac sign is Capricorn");
        }
        else if (((m == 1) && (d >= 21)) || ((m == 2) && (d <= 18)))
        {
            printf("Your zodiac sign is Aquarius");
        }
        else if (((m == 2) && (d >= 19)) || ((m == 3) && (d <= 20)))
        {
            printf("Your zodiac sign is Pisces");
        }
        else if (((m == 3) && (d >= 21)) || ((m == 4) && (d <= 20)))
        {
            printf("Your zodiac sign is Aries");
        }
        else if (((m == 4) && (d >= 21)) || ((m == 5) && (d <= 20)))
        {
            printf("Your zodiac sign is Taurus");
        }
        else if (((m == 5) && (d >= 21)) || ((m == 6) && (d <= 21)))
        {
            printf("Your zodiac sign is Gemini");
        }
        else if (((m == 6) && (d >= 22)) || ((m == 7) && (d <= 22)))
        {
            printf("Your zodiac sign is Cancer");
        }
        else if (((m == 7) && (d >= 23)) || ((m == 8) && (d <= 23)))
        {
            printf("Your zodiac sign is Leo");
        }
        else if (((m == 8) && (d >= 24)) || ((m == 9) && (d <= 23)))
        {
            printf("Your zodiac sign is Virgo");
        }
        else if (((m == 9) && (d >= 24)) || ((m == 10) && (d <= 23)))
        {
            printf("Your zodiac sign is Libra");
        }
        else if (((m == 10) && (d >= 24)) || ((m == 11) && (d <= 22)))
        {
            printf("Your zodiac sign is Scorpio");
        }
        else if (((m == 11) && (d >= 23)) || ((m == 12) && (d <= 21)))
        {
            printf("Your zodiac sign is Sagittarius");
        }

        return 0;
    }

}

//https://github.com/4ndrlxrd/task5
