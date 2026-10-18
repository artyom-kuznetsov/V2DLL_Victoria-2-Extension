// FUN_009e81b0 @ 009e81b0 body=[[009e81b0, 009e820c]]


int FUN_009e81b0(char *param_1,uint param_2,char *param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    iVar1 = -0x7ff8ffa9;
  }
  if (-1 < iVar1) {
    param_2 = param_2 - 1;
    iVar1 = 0;
    uVar2 = __vsnprintf(param_1,param_2,param_3,&stack0x00000010);
    if (((int)uVar2 < 0) || (param_2 < uVar2)) {
      param_1[param_2] = '\0';
      iVar1 = -0x7ff8ff86;
    }
    else if (uVar2 == param_2) {
      param_1[param_2] = '\0';
      return 0;
    }
  }
  return iVar1;
}

