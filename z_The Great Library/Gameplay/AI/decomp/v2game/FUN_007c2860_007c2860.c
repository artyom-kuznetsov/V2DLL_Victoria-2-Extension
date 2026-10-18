// FUN_007c2860 @ 007c2860 body=[[007c2860, 007c28d4] [007c28d8, 007c2a18] [007c2a22, 007c2a35]]


/* WARNING: Removing unreachable block (ram,0x007c299a) */
/* WARNING: Removing unreachable block (ram,0x007c29a0) */
/* WARNING: Removing unreachable block (ram,0x007c29cc) */
/* WARNING: Removing unreachable block (ram,0x007c29bf) */
/* WARNING: Removing unreachable block (ram,0x007c29ce) */
/* WARNING: Removing unreachable block (ram,0x007c29e3) */
/* WARNING: Removing unreachable block (ram,0x007c2a0d) */

void FUN_007c2860(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_38;
  undefined1 local_34 [12];
  undefined4 uStack_28;
  uint local_24;
  void *local_20;
  undefined4 uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bb97a6;
  pvStack_14 = ExceptionList;
  local_20 = (void *)0xf;
  local_24 = 0;
  local_34[0] = 0;
  ExceptionList = &pvStack_14;
  FUN_00409350("pop_province_list",0x11);
  local_c = 0;
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x4c) + 0x7c))(local_34);
  puStack_10 = (undefined1 *)0xffffffff;
  if (local_24 < 0x10) {
    local_24 = 0xf;
    uStack_28 = 0;
    (**(code **)(*piVar2 + 0x5c))();
    iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
    iVar3 = FUN_00aae9af(0x1a8);
    puStack_10 = (undefined1 *)0x1;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_007bd500(iVar3,param_1);
    }
    puStack_10 = (undefined1 *)0xffffffff;
    (**(code **)(*piVar2 + 0x10))(uVar4,0);
    iVar1 = *(int *)(iVar1 + 0xe44);
    uStack_18 = 2;
    while (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 8);
      FUN_007c7e10(&stack0xffffffb0,&stack0xffffffa8);
    }
    (**(code **)(*piVar2 + 0x6c))();
    if (*(char *)(*(int *)(param_1 + 0x4c) + 0x67) != '\0') {
      (**(code **)(*(int *)(*(int *)(param_1 + 0x4c) + 0x18) + 0x34))();
    }
    ExceptionList = local_20;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(uStack_38);
}

