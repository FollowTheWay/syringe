/**
  ******************************************************************************
  * @file           : type.cpp
  * @author         : ZhongZepeng
  * @brief          : None
  * @attention      : None
  * @date           : 2024/3/25
  ******************************************************************************
  */
#include "syringe.h"
#include "iostream"
using namespace std;
void syringe::opreate (int type, float dose, int number)
{
    this->Type = type;
    this->Injection_Dose = dose;
    this->Injections_Number = number;
    this->Single_Injection_Dose = Injection_Dose / (float )Type / (float )Injections_Number;
    cout << type << "\t" << dose << "\t" << number << "\t" << Single_Injection_Dose << endl;
}