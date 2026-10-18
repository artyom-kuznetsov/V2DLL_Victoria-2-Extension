// FUN_00537800 @ 00537800 body=[[00537800, 005379d1]]


undefined1 * FUN_00537800(int param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b5ade9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  local_8 = 0;
  iVar1 = *(int *)(param_1 + 0xe64);
  iVar3 = *(int *)(param_1 + 0x14b0) - *(int *)(param_1 + 0x14ac);
  local_14 = (int *)(param_1 + 0x14ac);
  iVar2 = iVar3 >> 0x1f;
  if ((iVar3 / 0x1c + iVar2 == iVar2) &&
     (iVar3 = *(int *)(iVar1 + 0x74) - *(int *)(iVar1 + 0x70), local_14 = (int *)(iVar1 + 0x70),
     iVar2 = iVar3 >> 0x1f, iVar3 / 0x1c + iVar2 == iVar2)) {
    local_14 = (int *)(*(int *)(iVar1 + 0x50) + 0xb4);
  }
  iVar3 = *(int *)(param_1 + 0x14c0) - *(int *)(param_1 + 0x14bc);
  iVar2 = iVar3 >> 0x1f;
  if (iVar3 / 0x1c + iVar2 == iVar2) {
    iVar3 = *(int *)(iVar1 + 0x84) - *(int *)(iVar1 + 0x80);
    piVar4 = (int *)(iVar1 + 0x80);
    iVar2 = iVar3 >> 0x1f;
    if (iVar3 / 0x1c + iVar2 == iVar2) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x50) + 0xc4);
    }
  }
  else {
    piVar4 = (int *)(param_1 + 0x14bc);
  }
  if ((local_14 != (int *)0x0) && (iVar1 = (local_14[1] - *local_14) / 0x1c, 0 < iVar1)) {
    iVar2 = FUN_009b7950(0,0);
    FUN_00408ed0(*local_14 + (iVar2 % iVar1) * 0x1c,0,0xffffffff);
  }
  if ((piVar4 != (int *)0x0) && (0 < (piVar4[1] - *piVar4) / 0x1c)) {
    if (0 < *(int *)(param_2 + 0x10)) {
      FUN_00448740(&DAT_00ded950,1);
    }
    iVar1 = piVar4[1];
    iVar2 = *piVar4;
    iVar3 = FUN_009b7950(0,0);
    FUN_00448aa0(*piVar4 + (iVar3 % ((iVar1 - iVar2) / 0x1c)) * 0x1c,0,0xffffffff);
  }
  ExceptionList = local_10;
  return param_2;
}

