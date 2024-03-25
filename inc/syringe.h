/**
  ******************************************************************************
  * @file           : type.h
  * @author         : ZhongZepeng
  * @brief          : None
  * @attention      : None
  * @date           : 2024/3/25
  ******************************************************************************
  */

#ifndef _SYRINGE_H_
#define _SYRINGE_H_
#include <string>
using namespace std;
class syringe
{
 public:
  void opreate( int type,float dose,int number);
 private:
  int Type;//1 3 5
  float Injection_Dose;//注射剂量(实际药液容量/注射器容量) 0.8/1ml 2/3ml 3/3ml 4/5ml 5/5ml
  int Injections_Number;//注射次数10-18
  float Single_Injection_Dose;
};

#endif //_SYRINGE_H_
