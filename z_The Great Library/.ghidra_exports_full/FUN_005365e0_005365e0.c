// FUN_005365e0 @ 005365e0 body=[[005365e0, 005366e4]]


void FUN_005365e0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_0131acac == 0) {
    ExceptionList = &local_10;
    iVar3 = FUN_00aae9af(0x20);
    local_8 = 0;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_0090cca0();
    }
    local_8 = 0xffffffff;
    FUN_0090d9d0(uVar4);
  }
  iVar1 = DAT_0131acac;
  iVar3 = FUN_0090da40(param_3);
  if (iVar3 == 0) {
    iVar3 = **(int **)(iVar1 + 0xc);
  }
  if (*(char *)(iVar3 + 0x130) != '\0') {
    iVar1 = *(int *)(*(int *)(param_1 + 0xbe8) + *(int *)(param_2 + 4) * 4);
    piVar5 = *(int **)(iVar1 + 0x50);
    if (piVar5 != (int *)0x0) {
      while( true ) {
        puVar2 = (undefined4 *)*piVar5;
        piVar5 = (int *)piVar5[2];
        if (puVar2[9] == *(int *)(iVar3 + 8)) break;
        if (piVar5 == (int *)0x0) {
          ExceptionList = local_10;
          return;
        }
      }
      FUN_0092f0a0(iVar1,1);
      for (piVar5 = *(int **)(DAT_012588e8 + 0xa84);
          (piVar5 != (int *)0x0 && ((undefined4 *)*piVar5 != puVar2)); piVar5 = (int *)piVar5[2]) {
      }
      FUN_005f2ae0(piVar5);
      (**(code **)*puVar2)(1);
    }
  }
  ExceptionList = local_10;
  return;
}

