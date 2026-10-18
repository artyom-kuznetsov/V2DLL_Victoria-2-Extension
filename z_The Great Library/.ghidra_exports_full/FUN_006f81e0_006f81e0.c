// FUN_006f81e0 @ 006f81e0 body=[[006f81e0, 006f8276] [006f827a, 006f82fe] [006f8302, 006f83ac]]


void FUN_006f81e0(void)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b9dc60;
  local_10 = ExceptionList;
  iVar2 = (*(int *)(in_ECX + 0x60) - *(int *)(in_ECX + 0x5c)) / 0x14;
  ExceptionList = &local_10;
  if (0 < iVar2) {
    local_14 = 0;
    ExceptionList = &local_10;
    local_18 = iVar2;
    do {
      local_8 = 0xffffffff;
      iVar2 = *(int *)(in_ECX + 0x5c) + local_14;
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
      FUN_00409350("filter_enabled",0xe);
      local_8 = 0;
      piVar1 = (int *)(**(code **)(**(int **)(iVar2 + 4) + 0x44))(local_50);
      (**(code **)(*piVar1 + 0x48))(1);
      local_8 = 0xffffffff;
      if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_50[0]);
      }
      local_14 = local_14 + 0x14;
      local_18 = local_18 + -1;
      *(undefined1 *)(iVar2 + 0xc) = 0;
    } while (local_18 != 0);
  }
  iVar2 = (*(int *)(in_ECX + 0x70) - *(int *)(in_ECX + 0x6c)) / 0x14;
  if (0 < iVar2) {
    local_14 = 0;
    local_18 = iVar2;
    do {
      local_8 = 0xffffffff;
      iVar2 = *(int *)(in_ECX + 0x6c) + local_14;
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = local_34[0] & 0xffffff00;
      FUN_00409350("filter_enabled",0xe);
      local_8 = 1;
      piVar1 = (int *)(**(code **)(**(int **)(iVar2 + 4) + 0x44))(local_34);
      (**(code **)(*piVar1 + 0x48))(1);
      local_8 = 0xffffffff;
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_34[0]);
      }
      local_14 = local_14 + 0x14;
      local_18 = local_18 + -1;
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = local_34[0] & 0xffffff00;
      *(undefined1 *)(iVar2 + 0xc) = 0;
    } while (local_18 != 0);
  }
  local_8 = 0xffffffff;
  iVar2 = *(int *)(in_ECX + 0x1c8);
  if (iVar2 == 0) {
    FUN_006f3e70();
    ExceptionList = local_10;
    return;
  }
  if (iVar2 == 1) {
    FUN_006f7140(in_ECX);
    ExceptionList = local_10;
    return;
  }
  if (iVar2 == 2) {
    FUN_006f53a0(in_ECX,1);
    ExceptionList = local_10;
    return;
  }
  if (iVar2 == 4) {
    FUN_007046b0(in_ECX);
    ExceptionList = local_10;
    return;
  }
  if (iVar2 == 3) {
    FUN_00704be0(in_ECX);
  }
  ExceptionList = local_10;
  return;
}

