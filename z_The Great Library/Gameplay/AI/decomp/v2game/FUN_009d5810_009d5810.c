// FUN_009d5810 @ 009d5810 body=[[009d5810, 009d585c] [009d5860, 009d58f2] [009d58f6, 009d59d1]]


void FUN_009d5810(undefined4 *param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  int iVar2;
  undefined4 local_b4;
  int local_b0;
  undefined **local_ac;
  undefined4 *local_9c;
  undefined4 *local_98;
  undefined4 *local_8c;
  undefined4 *local_88;
  undefined4 *local_7c;
  undefined4 *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined **local_60 [19];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b49959;
  local_14 = ExceptionList;
  if (*(char *)(in_ECX + 0xc) == '\0') {
    puVar1 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar1 = (undefined4 *)*param_1;
    }
    ExceptionList = &local_14;
    FUN_009d7490(*(undefined4 *)(*(int *)(in_ECX + 0x30) + 4),puVar1,param_1[4] + (int)puVar1,
                 local_b4);
    *(int *)(in_ECX + 0x34) = *(int *)(in_ECX + 0x34) + param_1[4];
    ExceptionList = local_14;
    return;
  }
  ExceptionList = &local_14;
  FUN_009d6030(&local_b0);
  iVar2 = 0;
  local_c = 0;
  if (0 < (int)param_1[4]) {
    do {
      puVar1 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar1 = (undefined4 *)*param_1;
      }
      FUN_009d6b50(&local_b0,(short)*(char *)((int)puVar1 + iVar2));
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[4]);
  }
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  FUN_009d7490(*(undefined4 *)(*(int *)(in_ECX + 0x30) + 4),puVar1,(int)puVar1 + param_1[4] * 2,
               local_b4);
  *(int *)(in_ECX + 0x34) = *(int *)(in_ECX + 0x34) + param_1[4] * 2;
  *(undefined ***)((int)&local_b0 + *(int *)(local_b0 + 4)) = &PTR_FUN_00e3b4f4;
  local_c = 1;
  local_ac = &PTR_FUN_00e3b4b8;
  if ((local_6c & 1) == 0) {
    *local_9c = 0;
    *local_8c = 0;
    *local_7c = 0;
    *local_98 = 0;
    *local_88 = 0;
    *local_78 = 0;
    local_6c = local_6c & 0xfffffffe;
    local_70 = 0;
    FUN_009d5b00();
    local_c = 0xffffffff;
    *(undefined ***)((int)&local_b0 + *(int *)(local_b0 + 4)) = &PTR_FUN_00e3b4b4;
    local_60[0] = std::ios_base::vftable;
    FUN_00aad52d(local_60);
    ExceptionList = local_14;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*local_9c);
}

