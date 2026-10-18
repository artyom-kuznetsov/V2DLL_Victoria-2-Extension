// FUN_006ae730 @ 006ae730 body=[[006ae730, 006ae802] [006ae806, 006ae893]]


void FUN_006ae730(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  undefined1 auStack_38 [12];
  undefined4 uStack_2c;
  uint uStack_28;
  undefined4 uStack_24;
  void *pvStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4c0b3;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  iVar1 = FUN_00aae9af(0x44);
  local_c = 0;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_005ddd50(iVar1,*(undefined4 *)(DAT_012588e8 + 0xb5c),
                         *(undefined4 *)(DAT_012588e8 + 0xb60));
  }
  local_c = 0xffffffff;
  iVar3 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
  (**(code **)(**(int **)(iVar3 + 0x38) + 0x18))(uVar2);
  uStack_24 = 0xf;
  uStack_28 = 0;
  auStack_38[0] = 0;
  FUN_00409350("auto_assign",0xb);
  puStack_10 = (undefined1 *)0x1;
  iVar3 = (**(code **)(**(int **)(in_ECX + 100) + 0x48))(auStack_38);
  pvStack_14 = (void *)0xffffffff;
  if (0xf < uStack_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  uStack_28 = 0xf;
  uStack_2c = 0;
  if (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4) + 0x658)
      == '\0') {
    if ((*(char *)(iVar3 + 0xe4) == '\0') || (*(char *)(iVar3 + 0x142) != '\0')) {
      *(undefined4 *)(iVar3 + 0x6c) = 0;
      *(undefined4 *)(iVar3 + 0x10c) = 0;
    }
    *(undefined4 *)(in_ECX + 0x290) = 0;
  }
  else {
    *(undefined4 *)(iVar3 + 0x6c) = 1;
    *(undefined4 *)(iVar3 + 0x10c) = 1;
    *(undefined4 *)(in_ECX + 0x290) = 1;
  }
  *(undefined1 *)(iVar3 + 0x142) = 0;
  FUN_009a8550(iVar3);
  ExceptionList = pvStack_1c;
  return;
}

