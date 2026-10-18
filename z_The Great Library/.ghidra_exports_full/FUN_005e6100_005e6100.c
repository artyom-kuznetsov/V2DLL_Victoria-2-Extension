// FUN_005e6100 @ 005e6100 body=[[005e6100, 005e61d0]]


int FUN_005e6100(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = (param_2 - param_1) * 0x66666667;
  iVar4 = (param_2 - param_1) / 0x28;
  iVar1 = (in_EAX - param_1) / 0x28;
  iVar6 = iVar1;
  iVar5 = iVar4;
  while (iVar2 = iVar6, iVar2 != 0) {
    iVar3 = iVar5 / iVar2;
    iVar6 = iVar5 % iVar2;
    iVar5 = iVar2;
  }
  if ((iVar5 < iVar4) && (0 < iVar5)) {
    iVar4 = param_1 + iVar5 * 0x28;
    do {
      iVar6 = iVar4 + iVar1 * 0x28;
      if (iVar6 == param_2) {
        iVar6 = param_1;
      }
      do {
        FUN_0073aa80();
        iVar3 = (param_2 - iVar6) / 0x28;
        if (iVar1 < iVar3) {
          iVar6 = iVar6 + iVar1 * 0x28;
        }
        else {
          iVar6 = iVar1 - iVar3;
          iVar3 = iVar6 * 5;
          iVar6 = param_1 + iVar6 * 0x28;
        }
      } while (iVar6 != iVar4);
      iVar4 = iVar4 + -0x28;
      iVar5 = iVar5 + -1;
    } while (0 < iVar5);
  }
  return iVar3;
}

