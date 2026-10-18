// FUN_00920510 @ 00920510 body=[[00920510, 00920715] [00920719, 00920737] [0092073b, 00920756] [0092075a, 00920775] [00920779, 0092078f]]


void FUN_00920510(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int in_ECX;
  uint local_88 [4];
  undefined4 local_78;
  uint local_74;
  uint local_6c;
  undefined4 local_5c;
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  iVar2 = DAT_012586dc;
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b84d89;
  local_14 = ExceptionList;
  iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x2c) * 4) +
                           0xbe8) + *(int *)(in_ECX + 0x14) * 4);
  ExceptionList = &local_14;
  *(undefined4 *)(iVar1 + 0x90) = *(undefined4 *)(DAT_012588e8 + 0xb0c);
  *(int *)(iVar1 + 0x90) =
       *(int *)(iVar1 + 0x90) + (*(int *)(*(int *)(iVar2 + 0x30) + 0x2e8) / 1000) * 0x18;
  *(undefined4 *)(iVar1 + 0x94) = *(undefined4 *)(in_ECX + 8);
  *(undefined4 *)(iVar1 + 0x98) = *(undefined4 *)(in_ECX + 0xc);
  FUN_005179e0();
  local_74 = 0xf;
  local_78 = 0;
  local_88[0] = local_88[0] & 0xffffff00;
  FUN_00409350("TARGET");
  local_c = 0;
  uVar4 = FUN_004f97a0();
  local_c._0_1_ = 1;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00408ed0(local_88,0);
  local_c._0_1_ = 2;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00408ed0(uVar4,0);
  local_c._0_1_ = 3;
  iVar1 = param_1[1];
  puVar5 = (undefined1 *)FUN_00aae9af();
  local_c._0_1_ = 4;
  uVar3 = (undefined1)local_c;
  local_c._0_1_ = 4;
  if (puVar5 == (undefined1 *)0x0) {
    puVar5 = (undefined1 *)0x0;
    local_c._0_1_ = uVar3;
  }
  else {
    *(undefined4 *)(puVar5 + 0x14) = 0xf;
    *(undefined4 *)(puVar5 + 0x10) = 0;
    *puVar5 = 0;
    FUN_00408ed0(local_50,0);
    local_c._0_1_ = 5;
    *(undefined4 *)(puVar5 + 0x30) = 0xf;
    *(undefined4 *)(puVar5 + 0x2c) = 0;
    puVar5[0x1c] = 0;
    FUN_00408ed0(local_34,0);
    *(int *)(puVar5 + 0x38) = iVar1;
    *(undefined4 *)(puVar5 + 0x3c) = 0;
    puVar5[0x40] = 0;
  }
  iVar2 = param_1[2];
  param_1[1] = puVar5;
  param_1[2] = iVar2 + 1;
  if (iVar2 == 0) {
    *param_1 = puVar5;
  }
  else {
    *(undefined1 **)(iVar1 + 0x3c) = puVar5;
  }
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
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
  local_6c = local_6c & 0xffffff00;
  if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_14;
  return;
}

