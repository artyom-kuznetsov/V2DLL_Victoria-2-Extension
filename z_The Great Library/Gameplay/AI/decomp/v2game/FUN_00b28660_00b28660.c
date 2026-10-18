// FUN_00b28660 @ 00b28660 body=[[00b28660, 00b286c8]]


undefined4 FUN_00b28660(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00b29730(param_1,param_2,0);
  if (iVar1 == 0) {
    FUN_00b1f840(0);
    return 0;
  }
  if (param_3 != (int *)0x0) {
    iVar2 = FUN_00b295a0(iVar1);
    *param_3 = iVar2;
    if (iVar2 == 0) {
      (*DAT_013f3ab0)(iVar1);
      return 0;
    }
  }
  uVar3 = FUN_00b2a1b0(iVar1);
  (*DAT_013f3ab0)(iVar1);
  return uVar3;
}

