// FUN_004e0c50 @ 004e0c50 body=[[004e0c50, 004e0e88] [004e0e8c, 004e0e99] [004e0e9d, 004e0eb1]]


undefined4 * FUN_004e0c50(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  undefined4 in_EDX;
  uint in_stack_0000001c;
  undefined1 *in_stack_00000024;
  undefined1 local_64 [4];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 *puStack_58;
  int local_54;
  undefined4 *local_50;
  undefined1 *puStack_4c;
  undefined4 local_38 [5];
  uint local_24;
  undefined4 local_1c [3];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b8f50a;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = &PTR_FUN_00e3a544;
  param_1[2] = DAT_01268fec;
  param_1[3] = DAT_01268ff0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[10] = 0xf;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[0xc] = in_EDX;
  *param_1 = CRebelFaction::vftable;
  param_1[0xd] = in_ECX;
  param_1[0xe] = *(undefined4 *)(in_ECX + 0x128);
  param_1[0xf] = *(undefined4 *)(in_ECX + 300);
  local_54 = DAT_012587e4;
  param_1[0x10] =
       *(undefined4 *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 300) * 4) + 0xbd0);
  local_1c[0] = 0x2d2d2d;
  param_1[0x11] = 0x2d2d2d;
  param_1[0x12] = 0;
  param_1[0x13] = *(undefined4 *)((int)in_stack_00000024 + 0x6c);
  puStack_4c = &DAT_00dfdc14;
  local_50 = param_1 + 0x15;
  param_1[0x14] = *(undefined4 *)((int)in_stack_00000024 + 0x70);
  puStack_58 = (undefined4 *)0x4e0d16;
  FUN_0055c6c0();
  param_1[0x1c] = 0xf;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(undefined2 *)(param_1 + 0x24) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x34] = 0x18d;
  param_1[0x33] = CUniqueUnitName::vftable;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  puStack_4c = (undefined1 *)0x0;
  local_50 = (undefined4 *)in_stack_00000024;
  local_8._0_1_ = 6;
  uStack_5c = param_1[0xc];
  puStack_58 = local_1c;
  param_1[0x39] = 1;
  uStack_60 = 0x4e0ddd;
  puVar2 = (undefined4 *)FUN_004ead40();
  in_stack_00000024 = local_64;
  param_1[0x11] = *puVar2;
  param_1[0x12] = puVar2[1];
  local_50 = (undefined4 *)0xf;
  local_54 = 0;
  local_64[0] = 0;
  FUN_00408ed0(&param_2,0,0xffffffff);
  iVar3 = FUN_004e38d0(param_1,in_ECX);
  iVar4 = DAT_012587e4;
  uVar1 = *(undefined4 *)(iVar3 + 0xc);
  param_1[0x1e] = *(undefined4 *)(iVar3 + 8);
  local_1c[0] = param_1[0xe];
  param_1[0x1f] = uVar1;
  iVar4 = *(int *)(*(int *)(*(int *)(iVar4 + 4) + param_1[0xf] * 4) + 0xbd0);
  iVar3 = *(int *)(*(int *)(param_1[0xc] + 0x134) + *(int *)(iVar4 + 0x40) * 4);
  if (iVar3 != 0) {
    iVar4 = iVar3;
  }
  in_stack_00000024 = local_64;
  param_1[0x10] = iVar4;
  FUN_004ea8b0(param_1[0xc]);
  local_54 = FUN_004e3a40(param_1,local_38);
  puStack_4c = (undefined1 *)0xffffffff;
  local_50 = (undefined4 *)0x0;
  local_8 = CONCAT31(local_8._1_3_,7);
  puStack_58 = (undefined4 *)0x4e0e76;
  FUN_00408ed0();
  if (0xf < local_24) {
    puStack_4c = (undefined1 *)local_38[0];
                    /* WARNING: Subroutine does not return */
    local_50 = (undefined4 *)&UNK_004e0e89;
    FUN_00aae91b();
  }
  if (0xf < in_stack_0000001c) {
    puStack_4c = (undefined1 *)param_2;
                    /* WARNING: Subroutine does not return */
    local_50 = (undefined4 *)&UNK_004e0e9a;
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

