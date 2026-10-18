// FUN_005370f0 @ 005370f0 body=[[005370f0, 00537136] [00537140, 005372b7]]


int FUN_005370f0(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_2c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  iVar4 = DAT_012588e8;
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b5b6e0;
  piVar1 = *(int **)(param_2 + 8);
  local_2c = 0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    iVar3 = *(int *)(*(int *)(iVar4 + 0xacc) + *piVar1 * 4);
    if (*(int *)(iVar3 + 300) == 0) {
      FUN_004b52e0(param_1 + 0x1c,iVar4 + 0xb0c,1,0);
      FUN_004b5730(iVar3,param_1 + 0x1c,iVar4 + 0xb0c,1);
      iVar2 = DAT_012586dc;
      *(undefined4 *)(iVar3 + 400) = param_3;
      iVar3 = *(int *)(*(int *)(iVar2 + 0x40) + 0x78);
      if (0 < iVar3) {
        iVar3 = __alldiv((longlong)(*(int *)(*(int *)(param_1 + 0xbcc) + 0x288) + 1000) *
                         (longlong)iVar3,1000,0);
      }
      *(int *)(param_1 + 0xea0) = *(int *)(param_1 + 0xea0) + iVar3;
      if (*(int *)(param_1 + 0xea0) < 0) {
        *(undefined4 *)(param_1 + 0xea0) = 0;
      }
      local_2c = local_2c + 1;
    }
  }
  FUN_004cb210();
  FUN_00521560(param_1,0);
  for (piVar1 = *(int **)(param_2 + 8); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    iVar3 = *(int *)(*(int *)(iVar4 + 0xacc) + *piVar1 * 4);
    if ((*(int *)(iVar3 + 0x188) != 0) &&
       (iVar2 = *(int *)(*(int *)(iVar3 + 0x188) + 0x84), *(int *)(iVar3 + 400) < iVar2)) {
      *(int *)(iVar3 + 400) = iVar2;
    }
  }
  param_2 = param_2 + 0x94;
  iVar4 = 4;
  do {
    if (*(int *)(param_2 + 4) != 0) {
      FUN_005372c0();
    }
    param_2 = param_2 + 0x1c;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  ExceptionList = local_14;
  return local_2c;
}

