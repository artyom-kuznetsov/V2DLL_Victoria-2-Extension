// __set_exp @ 00b3493f body=[[00b3493f, 00b3496b]]


/* Library Function - Single Match
    __set_exp
   
   Library: Visual Studio 2010 Release */

float10 __set_exp(undefined8 param_1,short param_2)

{
  undefined8 local_c;
  
  local_c = (double)CONCAT26((param_2 + 0x3fe) * 0x10 | param_1._6_2_ & 0x800f,(undefined6)param_1);
  return (float10)local_c;
}

