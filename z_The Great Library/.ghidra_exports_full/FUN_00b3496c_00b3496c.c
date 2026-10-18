// __sptype @ 00b3496c body=[[00b3496c, 00b349d1]]


/* Library Function - Single Match
    __sptype
   
   Library: Visual Studio 2010 Release */

undefined4 __sptype(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0x7ff00000) {
    if (param_1 == 0) {
      return 1;
    }
  }
  else if ((param_2 == 0xfff00000) && (param_1 == 0)) {
    return 2;
  }
  if ((param_2._2_2_ & 0x7ff8) == 0x7ff8) {
    uVar1 = 3;
  }
  else {
    if (((param_2._2_2_ & 0x7ff8) != 0x7ff0) || (((param_2 & 0x7ffff) == 0 && (param_1 == 0)))) {
      return 0;
    }
    uVar1 = 4;
  }
  return uVar1;
}

