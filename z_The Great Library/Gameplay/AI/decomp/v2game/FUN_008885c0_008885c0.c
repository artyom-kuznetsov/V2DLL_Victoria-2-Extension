// FUN_008885c0 @ 008885c0 body=[[008885c0, 00888760] [00888764, 00888770] [00888774, 00888794] [00888798, 008887ab]]


void FUN_008885c0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int local_38 [4];
  int *local_28;
  int *local_24;
  int *local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00bb8828;
  local_14 = ExceptionList;
  local_28 = (int *)0x0;
  local_24 = (int *)0x0;
  local_20 = (int *)0x0;
  local_c = 0;
  local_38[2] = in_ECX;
  if (*(char *)(in_ECX + 0x1c) == '\0') {
    if (*(char *)(in_ECX + 0x1d) == '\0') {
      local_38[0] = *(int *)(in_ECX + 0x20);
      iVar6 = *(int *)(in_ECX + 0x24);
      ExceptionList = &local_14;
    }
    else {
      local_38[0] = *(int *)(param_1 + 0x2c);
      iVar6 = *(int *)(param_1 + 0x30);
      ExceptionList = &local_14;
    }
  }
  else {
    ExceptionList = &local_14;
    FUN_008a8dc0();
    iVar6 = local_38[1];
  }
  piVar4 = (int *)0x0;
  piVar3 = local_28;
  piVar2 = local_24;
  for (piVar1 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + iVar6 * 4) + 0x9f8);
      local_24 = piVar4, piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    iVar6 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar1 * 4);
    piVar4 = local_24;
    if (*(int *)(iVar6 + 300) == *(int *)(param_1 + 0xc)) {
      iVar6 = *(int *)(iVar6 + 0x58);
      local_38[0] = iVar6;
      if ((local_38 < local_24) && (piVar3 <= local_38)) {
        iVar6 = (int)local_38 - (int)piVar3;
        if (local_24 == local_20) {
          local_24 = piVar2;
          FUN_007b94a0();
          piVar3 = local_28;
        }
        if (local_24 != (int *)0x0) {
          *local_24 = piVar3[iVar6 >> 2];
        }
      }
      else {
        if (local_24 == local_20) {
          local_24 = piVar2;
          FUN_007b94a0();
          piVar3 = local_28;
        }
        if (local_24 != (int *)0x0) {
          *local_24 = iVar6;
        }
      }
      piVar4 = local_24 + 1;
      piVar2 = piVar4;
    }
    local_24 = piVar2;
    piVar2 = local_24;
  }
  uVar5 = (int)local_24 - (int)piVar3;
  local_24 = piVar2;
  if ((uVar5 & 0xfffffffc) != 0) {
    if (*(char *)(local_38[2] + 0x1c) == '\0') {
      if (*(char *)(local_38[2] + 0x1d) == '\0') {
        iVar6 = *(int *)(local_38[2] + 0x20);
        local_38[1] = *(int *)(local_38[2] + 0x24);
      }
      else {
        iVar6 = *(int *)(param_1 + 0x2c);
        local_38[1] = *(int *)(param_1 + 0x30);
      }
    }
    else {
      FUN_008a8dc0();
      iVar6 = local_38[0];
    }
    local_38[2] = 0x2d2d2d;
    local_38[3] = 0;
    if (DAT_0125d50c == 0) {
      iVar6 = FUN_00aae9af(1);
      if (iVar6 != DAT_0125d50c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(DAT_0125d50c);
      }
      DAT_0125d50c = iVar6;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(0);
    }
    FUN_004ecb50(&local_28,0,local_38 + 2,iVar6,local_38[1]);
    piVar3 = local_28;
  }
  if (piVar3 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(piVar3);
  }
  ExceptionList = local_14;
  return;
}

