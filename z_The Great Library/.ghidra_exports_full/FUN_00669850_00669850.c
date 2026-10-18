// FUN_00669850 @ 00669850 body=[[00669850, 00669943] [0066994d, 00669962] [0066996c, 00669a1c] [00669a20, 00669a6f] [00669a73, 00669a82] [00669a86, 00669aa2] [00669aa8, 00669aea] [00669af4, 00669b03] [00669b32, 00669b5b]]


void FUN_00669850(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b59f21;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined1 *)(DAT_01258a80 + 0x239) = 1;
  if (*(int *)(in_ECX + 0x17e0) != 0) {
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x17e0) + 0x1c) + 0x38))();
    FUN_0099bd50(*(undefined4 *)(in_ECX + 0x17e4));
    *(undefined4 *)(in_ECX + 0x17e0) = 0;
  }
  if (*(int **)(in_ECX + 0x1614) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x1614) + 4))(1);
  }
  if (*(int **)(in_ECX + 0x1d08) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x1d08) + 4))(1);
  }
  *(undefined4 *)(in_ECX + 0x1d08) = 0;
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x1630) + 0x18) + 0x30))();
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x1638) + 4) + 0x30))();
  (**(code **)(**(int **)(in_ECX + 0x196c) + 0x30))();
  (**(code **)(**(int **)(in_ECX + 0x1970) + 0x30))();
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x1d24) + 0x18) + 0x30))();
  (**(code **)(**(int **)(in_ECX + 0x174) + 0x50))();
  iVar3 = *(int *)(in_ECX + 0xd24);
  if (iVar3 != 0) {
    FUN_0046ea10(iVar3);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar3);
  }
  iVar3 = *(int *)(in_ECX + 0xd20);
  if (iVar3 != 0) {
    FUN_0046e170(iVar3);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar3);
  }
  (**(code **)(**(int **)(in_ECX + 0x1540) + 0x30))();
  if (*(undefined4 **)(in_ECX + 0xb54) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_ECX + 0xb54))(1);
  }
  if (*(undefined4 **)(in_ECX + 0x1d18) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_ECX + 0x1d18))(1);
  }
  if (*(undefined4 **)(in_ECX + 0x1d28) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_ECX + 0x1d28))(1);
  }
  iVar3 = 0;
  if (0 < (int)(*(int *)(in_ECX + 0xd84) - *(int *)(in_ECX + 0xd80) & 0xfffffffcU)) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0xd80) + iVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(in_ECX + 0xd84) - *(int *)(in_ECX + 0xd80) >> 2);
  }
  iVar3 = *(int *)(in_ECX + 0x50);
  if (*(char *)(iVar3 + 200) != '\0') {
    (**(code **)(**(int **)(iVar3 + 0x58) + 0x38))();
  }
  *(undefined1 *)(iVar3 + 200) = 0;
  (**(code **)(**(int **)(in_ECX + 0x50) + 0x30))();
  for (piVar1 = *(int **)(in_ECX + 0x60); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar1)(1);
    }
  }
  iVar3 = *(int *)(in_ECX + 0x1d0c);
  if (iVar3 != 0) {
    local_8 = 1;
    (**(code **)(**(int **)(iVar3 + 0xc) + 0x5c))();
    (**(code **)(**(int **)(iVar3 + 0x24) + 0x50))();
    piVar1 = *(int **)(iVar3 + 0x48);
    if (piVar1 == (int *)0x0) {
      FUN_004097a0(iVar3 + 0x34);
      local_8 = 0xffffffff;
      *(undefined ***)(iVar3 + 0x10) = CTextBufferObserver::vftable;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iVar3);
    }
    if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*piVar1);
    }
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[2] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(piVar1);
  }
  if (*(undefined4 **)(in_ECX + 0x1d68) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_ECX + 0x1d68))(1);
  }
  iVar2 = DAT_01258a80;
  iVar3 = *(int *)(in_ECX + 0x1d74);
  if (iVar3 != 0) {
    piVar1 = (int *)(iVar3 + 4);
    local_8 = 2;
    FUN_00633510(piVar1);
    if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*piVar1);
    }
    *piVar1 = 0;
    *(undefined4 *)(iVar3 + 8) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar3);
  }
  *(undefined1 *)(DAT_012588e8 + 0xd1c) = 0;
  *(undefined1 *)(iVar2 + 0x239) = 0;
  ExceptionList = local_10;
  return;
}

