// FUN_00849000 @ 00849000 body=[[00849000, 008490ab]]


void FUN_00849000(int param_1,int param_2,undefined4 param_3)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = (param_2 - in_EAX) / 100;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_00849720(iVar1 * 200 + in_EAX,param_3);
    FUN_00849720(iVar1 * 100 + param_1,param_3);
    FUN_00849720(param_2,param_3);
    FUN_00849720(param_2 + iVar1 * -100,param_3);
    return;
  }
  FUN_00849720(param_2,param_3);
  return;
}

