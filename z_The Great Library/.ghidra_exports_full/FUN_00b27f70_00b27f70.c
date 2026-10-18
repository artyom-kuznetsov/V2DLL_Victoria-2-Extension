// FUN_00b27f70 @ 00b27f70 body=[[00b27f70, 00b2804f]]


bool FUN_00b27f70(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_8;
  
  iVar1 = FUN_00b26dc0(param_2,&local_8);
  if ((local_8 != 0) || (uVar2 = 0, iVar1 != 0)) {
    uVar2 = 1;
  }
  *param_3 = uVar2;
  if (local_8 != 0) {
    return true;
  }
  if (iVar1 == 0) {
    FUN_00b1f840("File not found");
    return false;
  }
  if (*(int *)(iVar1 + 8) == 1) {
    iVar3 = FUN_00b2a1b0(*param_1);
    if (iVar3 == 0) goto LAB_00b28002;
    iVar4 = FUN_00b27360(iVar3,param_1,iVar1);
    FUN_00b2a4f0(iVar3);
    if (iVar4 == 0) {
      return false;
    }
  }
  if (*(int *)(iVar1 + 8) != 5) {
    if (*(undefined4 **)(iVar1 + 4) == (undefined4 *)0x0) {
      FUN_00b1f840("Not a directory");
      return false;
    }
    iVar1 = FUN_00b27c10(param_1,**(undefined4 **)(iVar1 + 4),1);
    return -1 < iVar1;
  }
LAB_00b28002:
  FUN_00b1f840(0);
  return false;
}

