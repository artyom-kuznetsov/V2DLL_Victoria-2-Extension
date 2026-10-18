// FUN_00924820 @ 00924820 body=[[00924820, 00924a22] [00924a26, 00924a48] [00924a4c, 00924a6c] [00924a70, 00924a93] [00924a97, 00924afd]]


void FUN_00924820(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  int in_ECX;
  uint local_88 [4];
  undefined4 local_78;
  uint local_74;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34;
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  iVar2 = DAT_012587e4;
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b84809;
  local_14 = ExceptionList;
  iVar4 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x14) * 4);
  iVar1 = *(int *)(iVar4 + 0x142c);
  if (iVar1 == *(int *)(in_ECX + 0xc)) {
    iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x3c8);
    ExceptionList = &local_14;
    FUN_005341a0();
    iVar1 = *(int *)(*(int *)(iVar2 + 4) + *(int *)(in_ECX + 0xc) * 4);
    iVar4 = *(int *)(iVar1 + 0x1430) + iVar4;
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    *(int *)(iVar1 + 0x1430) = iVar4;
  }
  else {
    ExceptionList = &local_14;
    *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(iVar4 + 0x1428);
    *(int *)(in_ECX + 0x2c) = iVar1;
  }
  local_74 = 0xf;
  local_78 = 0;
  local_88[0] = local_88[0] & 0xffffff00;
  FUN_00409350("TARGET");
  local_c = 0;
  uVar5 = FUN_004f97a0();
  local_c._0_1_ = 1;
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = local_6c[0] & 0xffffff00;
  FUN_00408ed0(local_88,0);
  local_c._0_1_ = 2;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00408ed0(uVar5,0);
  local_c._0_1_ = 3;
  iVar4 = param_1[1];
  puVar6 = (undefined1 *)FUN_00aae9af();
  local_c._0_1_ = 4;
  uVar3 = (undefined1)local_c;
  local_c._0_1_ = 4;
  if (puVar6 == (undefined1 *)0x0) {
    puVar6 = (undefined1 *)0x0;
    local_c._0_1_ = uVar3;
  }
  else {
    *(undefined4 *)(puVar6 + 0x14) = 0xf;
    *(undefined4 *)(puVar6 + 0x10) = 0;
    *puVar6 = 0;
    FUN_00408ed0(local_6c,0);
    local_c._0_1_ = 5;
    *(undefined4 *)(puVar6 + 0x30) = 0xf;
    *(undefined4 *)(puVar6 + 0x2c) = 0;
    puVar6[0x1c] = 0;
    FUN_00408ed0(local_50,0);
    *(int *)(puVar6 + 0x38) = iVar4;
    *(undefined4 *)(puVar6 + 0x3c) = 0;
    puVar6[0x40] = 0;
  }
  iVar1 = param_1[2];
  param_1[1] = puVar6;
  param_1[2] = iVar1 + 1;
  if (iVar1 == 0) {
    *param_1 = puVar6;
  }
  else {
    *(undefined1 **)(iVar4 + 0x3c) = puVar6;
  }
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = local_6c[0] & 0xffffff00;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_74 = 0xf;
  local_78 = 0;
  local_88[0] = local_88[0] & 0xffffff00;
  FUN_00533f20();
  FUN_005179e0();
  ExceptionList = local_14;
  return;
}

