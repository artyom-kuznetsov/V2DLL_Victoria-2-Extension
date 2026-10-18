// FUN_006d2c80 @ 006d2c80 body=[[006d2c80, 006d2d46] [006d2d4a, 006d2d96] [006d2d9a, 006d2dcd]]


void FUN_006d2c80(void)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  int iVar3;
  uint local_58 [4];
  undefined4 local_48;
  uint local_44;
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  undefined4 local_20;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bad9e0;
  local_10 = ExceptionList;
  if (*(int *)(in_ECX + 0x2d4) == 3) {
    local_20 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
    iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
    piVar2 = *(int **)(iVar1 + 0x1590);
    iVar3 = 0;
    iVar1 = *(int *)(iVar1 + 0x1594) - (int)piVar2 >> 2;
    local_14 = 0;
    if (0 < iVar1) {
      do {
        if (*(int *)(*piVar2 + 0x28) != 0) {
          iVar3 = iVar3 + 1;
        }
        piVar2 = piVar2 + 1;
        iVar1 = iVar1 + -1;
        local_14 = iVar3;
      } while (iVar1 != 0);
    }
    local_28 = 0xf;
    local_2c = 0;
    local_3c[0] = local_3c[0] & 0xffffff00;
    ExceptionList = &local_10;
    local_18 = in_ECX;
    FUN_00409350("movements_window",0x10);
    local_8 = 0;
    piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x6c))(local_3c);
    local_8 = 0xffffffff;
    if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_3c[0]);
    }
    local_28 = 0xf;
    local_2c = 0;
    local_3c[0] = local_3c[0] & 0xffffff00;
    local_44 = 0xf;
    local_48 = 0;
    local_58[0] = local_58[0] & 0xffffff00;
    FUN_00409350("movements_listbox",0x11);
    local_8 = 1;
    piVar2 = (int *)(**(code **)(*piVar2 + 0x7c))(local_58);
    local_8 = 0xffffffff;
    if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_58[0]);
    }
    local_44 = 0xf;
    local_48 = 0;
    local_58[0] = local_58[0] & 0xffffff00;
    iVar1 = (**(code **)(*piVar2 + 0x2c))();
    if (local_14 != *(int *)(iVar1 + 8)) {
      FUN_006dd080(local_18);
    }
  }
  ExceptionList = local_10;
  return;
}

