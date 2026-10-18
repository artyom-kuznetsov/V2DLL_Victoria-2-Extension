// FUN_00866bc0 @ 00866bc0 body=[[00866bc0, 00866c90] [00866c94, 00866d25]]


undefined4 * FUN_00866bc0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char local_70 [16];
  Alignment *local_60;
  undefined ***local_5c;
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined **local_20 [3];
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b42814;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CTutorialChapter::vftable;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[0xe] = 0xf;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined2 *)(param_1 + 0x10) = 0;
  param_1[0x16] = 0xf;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0x1d] = 0xf;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  local_8 = 3;
  uStack_7 = 0;
  local_5c = (undefined ***)0xe29478;
  param_1[0x1f] = 0x2d2d2d;
  param_1[0x20] = 0;
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = local_44[0] & 0xffffff00;
  local_60 = (Alignment *)0x866c49;
  FUN_00409350();
  local_14 = local_70;
  local_8 = 4;
  param_1[0x21] = 43800000;
  local_5c = (undefined ***)0xf;
  local_60 = (Alignment *)0x0;
  local_70[0] = '\0';
  FUN_00408ed0(local_44,0,0xffffffff);
  FUN_0043bb10();
  _local_8 = CONCAT31(uStack_7,3);
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    local_5c = (undefined ***)&UNK_00866c91;
    FUN_00aae91b();
  }
  puVar1 = param_1 + 0x22;
  *puVar1 = 0;
  local_5c = (undefined ***)0x866ca3;
  puVar2 = (undefined4 *)FUN_00aae9af();
  if (puVar2 != (undefined4 *)0x0) {
    *puVar1 = puVar2;
    puVar2[1] = 0;
    *puVar2 = 0;
    *(undefined4 **)*puVar1 = puVar1;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x28] = 0xffffffff;
    param_1[0x2a] = 0xffffffff;
    param_1[0x2b] = 0xffffffff;
    param_1[0x2c] = 0xffffffff;
    param_1[0x2d] = param_2;
    param_1[0x29] = 0;
    ExceptionList = local_10;
    return param_1;
  }
  local_14 = (char *)0x0;
  local_5c = (undefined ***)0x866d11;
  std::exception::exception((exception *)local_20,&local_14);
  local_5c = local_20;
  local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  local_60 = &UNK_00866d26;
  __CxxThrowException_8();
}

