#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string>
#include "ClassHealthProfile.h"


HealthProfile::HealthProfile(std::string Name_t, std::string Gender_t, std::string BirthDay_t, std::string Height_t, std::string Weight_t) {
    setData(Name_t, Gender_t, BirthDay_t, Height_t, Weight_t);
}

void HealthProfile::setData(std::string Name_t, std::string Gender_t, std::string BirthDay_t, std::string Height_t, std::string Weight_t) {
    Name = Name_t;
    Gender = Gender_t;
    BirthDay = BirthDay_t;
    Height = Height_t;
    Weight = Weight_t;
}

std::string HealthProfile::getData() {
    return Name, Gender, BirthDay, Height, Weight;
}

int HealthProfile::Age(std::string BirthDay) {
    int mi = 0;
    char t = BirthDay[4];

    if (int(t) < 36) {
        mi = -1;
    }

    for (int i = 0; i < 4; i++) {
        BirthDay[i] = BirthDay[i + 6];
        BirthDay[4] = NULL;
    }

    return 2013 - std::atoi(BirthDay.c_str()) + mi;
}

void HealthProfile::DisplayData() {
    int Year = Age(BirthDay);
    int MaxRate = 220 - Year;

    double heartMinRate = MaxRate * 0.5;
    double heartMaxRate = MaxRate * 0.85;

    double weight = std::atof(Weight.c_str());
    double height = std::atof(Height.c_str());

    double bodyMassIndex = weight / (height * height);

    std::cout << std::endl << "Hello, " << Name << std::endl
        << "You Gender: " << Gender << std::endl
        << "Birthday: " << BirthDay << " (" << Year << ")" << std::endl
        << "Height: " << Height << ", Weight: " << Weight << std::endl
        << "Maximum heart rate: " << MaxRate << std::endl
        << "Target heart rate range: " << heartMinRate << "-" << heartMaxRate << std::endl
        << "Body mass index: " << bodyMassIndex << std::endl;
}
