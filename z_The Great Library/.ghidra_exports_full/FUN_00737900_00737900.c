// FUN_00737900 @ 00737900 body=[[00737900, 00737a0b]]


undefined4 FUN_00737900(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4fccb;
  local_10 = ExceptionList;
  if (*(int *)(param_1 + 0xbc) != 0) {
    ExceptionList = &local_10;
    FUN_00816010();
    piVar3 = (int *)FUN_00705450();
    if ((int *)*piVar3 == (int *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)*piVar3;
    }
    uVar4 = (uint)piVar3[2] >> 2;
    if (*(uint *)(iVar1 + 8) <= uVar4) {
      uVar4 = uVar4 - *(uint *)(iVar1 + 8);
    }
    uVar2 = *(undefined4 *)(*(int *)(*(int *)(iVar1 + 4) + uVar4 * 4) + (piVar3[2] & 3U) * 4);
    if ((*(int *)(param_1 + 0xbc) != 0) &&
       (iVar1 = *(int *)(param_1 + 0xbc) + -1, *(int *)(param_1 + 0xbc) = iVar1, iVar1 == 0)) {
      *(undefined4 *)(param_1 + 0xb8) = 0;
    }
    FUN_00730290();
    ExceptionList = local_10;
    return uVar2;
  }
  ExceptionList = &local_10;
  iVar1 = FUN_00aae9af();
  local_8 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00730180(iVar1,param_3);
    ExceptionList = local_10;
    return uVar2;
  }
  ExceptionList = local_10;
  return 0;
}

