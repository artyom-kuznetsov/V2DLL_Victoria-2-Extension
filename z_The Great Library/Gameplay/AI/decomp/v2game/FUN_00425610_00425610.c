// FUN_00425610 @ 00425610 body=[[00425610, 00425788] [0042578c, 00425834]]


int FUN_00425610(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined4 local_28 [2];
  undefined1 local_20 [4];
  int local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b53d5d;
  local_10 = ExceptionList;
  local_18 = 0;
  ExceptionList = &local_10;
  FUN_00424d90();
  iVar1 = DAT_012587e4;
  local_8 = 0;
  local_18 = 1;
  *(undefined4 *)(param_1 + 8) = 0x89c;
  puVar2 = (undefined4 *)FUN_0055c6c0(iVar1,local_20,&DAT_00df26a0);
  *(undefined4 *)(param_1 + 0x14) = *puVar2;
  iVar1 = DAT_012587e4;
  *(undefined4 *)(param_1 + 0x18) = puVar2[1];
  puVar2 = (undefined4 *)FUN_0055c6c0(iVar1,local_28,&DAT_00df26a4);
  *(undefined4 *)(param_1 + 0x1c) = *puVar2;
  iVar1 = DAT_012587e4;
  *(undefined4 *)(param_1 + 0x20) = puVar2[1];
  FUN_0055c6c0(iVar1,local_20,&DAT_00df26a8);
  FUN_004d61d0();
  *(undefined4 *)(param_1 + 0x10) = 20000;
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = local_44[0] & 0xffffff00;
  FUN_00409350("liberate_country",0x10);
  local_8 = 1;
  if (DAT_0131acac == 0) {
    local_1c = FUN_00aae9af(0x20);
    local_8._0_1_ = 2;
    if (local_1c == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0090cca0();
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_0090d9d0(uVar3);
  }
  FUN_0090da40(local_44);
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_44[0]);
  }
  FUN_0042c2f0();
  if (DAT_013f0810 == 0) {
    FUN_0055c6c0(DAT_012587e4,local_28,&DAT_00df26ac);
    FUN_004d61d0();
  }
  else {
    local_28[0] = *(undefined4 *)(param_1 + 0x1c);
    if (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x20) * 4) + 0x31) ==
        '\0') {
      FUN_004264d0(param_1,param_1 + 0x1c);
    }
    local_28[0] = *(undefined4 *)(param_1 + 0x14);
    if (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x18) * 4) + 0x31) ==
        '\0') {
      FUN_004264d0(param_1,(undefined4 *)(param_1 + 0x14));
      ExceptionList = local_10;
      return param_1;
    }
  }
  ExceptionList = local_10;
  return param_1;
}

