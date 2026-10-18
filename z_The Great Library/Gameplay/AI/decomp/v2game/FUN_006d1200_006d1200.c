// FUN_006d1200 @ 006d1200 body=[[006d1200, 006d12b3] [006d12b7, 006d12d6] [006d12da, 006d133e] [006d1342, 006d1361] [006d137a, 006d144d]]


bool FUN_006d1200(void)

{
  undefined1 uVar1;
  int iVar2;
  char *in_ECX;
  int iVar3;
  bool bVar4;
  undefined4 *puVar5;
  uint *puVar6;
  undefined4 local_80 [5];
  uint local_6c;
  undefined4 local_64 [5];
  uint local_50;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b8ad10;
  local_10 = ExceptionList;
  iVar3 = *(int *)(in_ECX + 4);
  if (iVar3 == 0) {
    if (*in_ECX == '\0') {
      ExceptionList = &local_10;
      iVar3 = FUN_006d06b0();
      iVar2 = FUN_006d06b0();
      bVar4 = *(uint *)(iVar2 + 0x28) < *(uint *)(iVar3 + 0x28);
    }
    else {
      ExceptionList = &local_10;
      iVar3 = FUN_006d06b0();
      iVar2 = FUN_006d06b0();
      bVar4 = *(uint *)(iVar3 + 0x28) < *(uint *)(iVar2 + 0x28);
    }
    ExceptionList = local_10;
    return bVar4;
  }
  if (iVar3 == 1) {
    if (*in_ECX == '\0') {
      ExceptionList = &local_10;
      iVar3 = FUN_006d06b0();
      iVar2 = FUN_006d06b0();
      if ((*(int *)(iVar2 + 0x24) <= *(int *)(iVar3 + 0x24)) &&
         ((*(int *)(iVar2 + 0x24) < *(int *)(iVar3 + 0x24) ||
          (*(uint *)(iVar2 + 0x20) < *(uint *)(iVar3 + 0x20))))) {
        ExceptionList = local_10;
        return true;
      }
    }
    else {
      ExceptionList = &local_10;
      iVar3 = FUN_006d06b0();
      iVar2 = FUN_006d06b0();
      if ((*(int *)(iVar3 + 0x24) <= *(int *)(iVar2 + 0x24)) &&
         ((*(int *)(iVar3 + 0x24) < *(int *)(iVar2 + 0x24) ||
          (*(uint *)(iVar3 + 0x20) < *(uint *)(iVar2 + 0x20))))) {
        ExceptionList = local_10;
        return true;
      }
    }
    ExceptionList = local_10;
    return false;
  }
  if (iVar3 != 2) {
    return false;
  }
  iVar3 = DAT_012588e8 + 0xb5c;
  if (*in_ECX == '\0') {
    puVar5 = local_80;
    ExceptionList = &local_10;
    iVar2 = iVar3;
    FUN_006d06b0(puVar5,iVar3);
    FUN_00471d20(puVar5,iVar2);
    puVar6 = local_48;
    local_8 = 2;
    FUN_006d06b0(puVar6,iVar3);
    FUN_00471d20(puVar6,iVar3);
    local_8 = CONCAT31(local_8._1_3_,3);
    uVar1 = FUN_0098ab20();
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_80[0]);
    }
  }
  else {
    puVar5 = local_64;
    ExceptionList = &local_10;
    iVar2 = iVar3;
    FUN_006d06b0(puVar5);
    FUN_00471d20(puVar5,iVar2);
    puVar6 = local_2c;
    local_8 = 0;
    FUN_006d06b0(puVar6,iVar3);
    FUN_00471d20(puVar6,iVar3);
    local_8 = CONCAT31(local_8._1_3_,1);
    uVar1 = FUN_0098ab20();
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_64[0]);
    }
  }
  ExceptionList = local_10;
  return (bool)uVar1;
}

