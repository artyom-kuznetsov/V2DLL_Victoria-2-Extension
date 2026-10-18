// FUN_00450960 @ 00450960 body=[[00450960, 00450a1d] [00450a21, 00450a8e] [00450a92, 00450af7]]


void FUN_00450960(void)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  int in_ECX;
  undefined4 uVar6;
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar1 = DAT_012588e8;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b96610;
  local_10 = ExceptionList;
  bVar2 = false;
  if ((*(int *)(in_ECX + 0x2d0) != *(int *)(DAT_012588e8 + 0xb60)) ||
     (ExceptionList = &local_10, *(char *)(in_ECX + 0x3bb) != '\0')) {
    ExceptionList = &local_10;
    FUN_00450280(in_ECX);
    bVar2 = true;
  }
  local_20 = *(undefined4 *)(iVar1 + 0xb5c);
  local_14 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar1 + 0xb60) * 4) + 100);
  if ((*(char *)(local_14 + 0x14) != '\0') || (bVar2)) {
    *(undefined1 *)(local_14 + 0x14) = 0;
    local_28 = 0xf;
    local_2c = 0;
    local_3c[0] = local_3c[0] & 0xffffff00;
    FUN_00409350("countries_listbox",0x11);
    local_8 = 0;
    piVar3 = (int *)(**(code **)(**(int **)(in_ECX + 8) + 0x7c))(local_3c);
    local_8 = 0xffffffff;
    if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_3c[0]);
    }
    local_28 = 0xf;
    local_2c = 0;
    local_3c[0] = local_3c[0] & 0xffffff00;
    puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x2c))();
    piVar3 = (int *)*puVar4;
    while (piVar3 != (int *)0x0) {
      iVar1 = *piVar3;
      piVar3 = (int *)piVar3[2];
      local_28 = 0xf;
      local_2c = 0;
      local_3c[0] = local_3c[0] & 0xffffff00;
      FUN_00409350("entry_bg",8);
      local_8 = 1;
      piVar5 = (int *)(**(code **)(**(int **)(iVar1 + 0x20) + 0x34))(local_3c);
      local_8 = 0xffffffff;
      if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_3c[0]);
      }
      local_28 = 0xf;
      local_2c = 0;
      local_3c[0] = local_3c[0] & 0xffffff00;
      local_18 = (**(code **)(*piVar5 + 0x80))();
      FUN_00445430(&local_18);
      if ((local_1c == *(int *)(local_14 + 8)) || (*(char *)(local_1c + 0x10) == '\0')) {
        uVar6 = 1;
      }
      else {
        uVar6 = 2;
      }
      (**(code **)(*piVar5 + 0x48))(uVar6);
    }
  }
  ExceptionList = local_10;
  return;
}

