// FUN_0069f5c0 @ 0069f5c0 body=[[0069f5c0, 0069f6d0] [0069f6d4, 0069f6e6]]


undefined4 FUN_0069f5c0(void)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  uint *puVar5;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b44dd4;
  local_10 = ExceptionList;
  local_14 = 0;
  if (*(int *)(in_ECX + 0x60) == 0) {
    ExceptionList = &local_10;
    iVar4 = FUN_00aae9af(0x28);
    local_8 = 0;
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      local_38 = 0xf;
      local_3c = 0;
      local_4c[0] = local_4c[0] & 0xffffff00;
      local_18 = iVar4;
      FUN_00409350("default_listbox_entry",0x15);
      local_8 = CONCAT31(local_8._1_3_,1);
      puVar5 = local_4c;
      local_14 = 1;
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x4c) + 0xb24) + 0x3c))(puVar5);
      uVar3 = FUN_006990f0(iVar4,puVar5);
      if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_4c[0]);
      }
    }
  }
  else {
    ExceptionList = &local_10;
    FUN_00816010();
    piVar1 = (int *)FUN_00705450();
    if ((int *)*piVar1 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)*piVar1;
    }
    uVar2 = (uint)piVar1[2] >> 2;
    if (*(uint *)(iVar4 + 8) <= uVar2) {
      uVar2 = uVar2 - *(uint *)(iVar4 + 8);
    }
    uVar3 = *(undefined4 *)(*(int *)(*(int *)(iVar4 + 4) + uVar2 * 4) + (piVar1[2] & 3U) * 4);
    if ((*(int *)(in_ECX + 0x60) != 0) &&
       (iVar4 = *(int *)(in_ECX + 0x60) + -1, *(int *)(in_ECX + 0x60) = iVar4, iVar4 == 0)) {
      *(undefined4 *)(in_ECX + 0x5c) = 0;
      ExceptionList = local_10;
      return uVar3;
    }
  }
  ExceptionList = local_10;
  return uVar3;
}

