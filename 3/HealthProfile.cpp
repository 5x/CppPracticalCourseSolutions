#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string>
#include "ClassHealthProfile.h"

using namespace std;


int _tmain(int argc, _TCHAR* argv[]) {
    std::string Name_t, Gender_t, BirthDay_t, Height_t, Weight_t;

    std::cout << "Type First and Last name: ";
    std::getline(std::cin, Name_t);

    std::cout << "Select Gender of person (male or female): ";
    std::getline(std::cin, Gender_t);

    std::cout << "Date of his birthday: (DD MM YYYY)";
    std::getline(std::cin, BirthDay_t);

    std::cout << "Height of person (m):";
    std::getline(std::cin, Height_t);

    std::cout << "Weight(kg):";
    std::getline(std::cin, Weight_t);

    HealthProfile healthProfile(Name_t, Gender_t, BirthDay_t, Height_t, Weight_t);

    healthProfile.getData();
    healthProfile.DisplayData();

    std::cin.get();

    return 0;
}
