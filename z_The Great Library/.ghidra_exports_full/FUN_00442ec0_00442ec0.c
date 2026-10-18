// FUN_00442ec0 @ 00442ec0 body=[[00442ec0, 00442fb0] [00442fb4, 00442fdb] [00442fe1, 0044309a] [0044309e, 004430c1] [004430c5, 004430f7] [004430fb, 0044310f]]


undefined1 * FUN_00442ec0(undefined1 *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  uint uVar5;
  uint *local_80;
  uint *puStack_7c;
  undefined4 local_6c [5];
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined1 *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b775db;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xf;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0xf;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x58] = 1;
  local_8 = 0;
  local_14 = 1;
  if (*(char *)(in_ECX + 0x44) == '\0') {
    puStack_7c = (uint *)0x442f33;
    cVar2 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x2c) + 0x188) + 0x24))();
    if (cVar2 == '\0') {
      puStack_7c = local_50;
      local_80 = (uint *)0x442f65;
      puStack_7c = (uint *)(**(code **)(**(int **)(in_ECX + 0x2c) + 0x1c))();
      local_8 = 2;
      uVar5 = 5;
    }
    else {
      puStack_7c = local_6c;
      local_80 = (uint *)0x442f4b;
      puStack_7c = (uint *)(**(code **)(**(int **)(*(int *)(in_ECX + 0x2c) + 0x188) + 0x20))();
      local_8 = 1;
      uVar5 = 3;
    }
    local_80 = local_34;
    local_14 = uVar5;
    uVar3 = FUN_0042c180();
    puStack_7c = (uint *)0xffffffff;
    local_80 = (uint *)0x0;
    local_8 = 3;
    FUN_00408ed0(uVar3);
    if (0xf < local_20) {
      puStack_7c = (uint *)local_34[0];
                    /* WARNING: Subroutine does not return */
      local_80 = (uint *)&UNK_00442fb1;
      FUN_00aae91b();
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    if ((uVar5 & 4) != 0) {
      uVar5 = uVar5 & 0xfffffffb;
      local_14 = uVar5;
      if (0xf < local_3c) {
        puStack_7c = (uint *)local_50[0];
                    /* WARNING: Subroutine does not return */
        local_80 = (uint *)&UNK_00442fdc;
        FUN_00aae91b();
      }
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
    }
    local_8 = 0;
    if (((uVar5 & 2) == 0) || (local_14 = uVar5 & 0xfffffffd, local_58 < 0x10)) {
LAB_004430c5:
      puStack_7c = local_6c;
      local_80 = (uint *)0x4430d3;
      uVar3 = FUN_00475d50();
      puStack_7c = (uint *)0xffffffff;
      local_80 = (uint *)0x0;
      local_8 = 6;
      FUN_00408ed0(uVar3);
      if (0xf < local_58) {
        puStack_7c = (uint *)local_6c[0];
                    /* WARNING: Subroutine does not return */
        local_80 = (uint *)&UNK_004430f8;
        FUN_00aae91b();
      }
      ExceptionList = local_10;
      return param_1;
    }
    puStack_7c = (uint *)local_6c[0];
  }
  else {
    iVar1 = *(int *)(in_ECX + 0x3c);
    puStack_7c = (uint *)0x2;
    local_18 = (undefined1 *)&local_80;
    local_80 = (uint *)0x0;
    FUN_00401000(0x47c35040);
    iVar4 = FUN_00b31c00();
    local_80 = (uint *)__alldiv((longlong)iVar4 * (longlong)iVar1,1000,0);
    puStack_7c = (uint *)FUN_00988a50(local_6c);
    local_80 = local_50;
    local_8 = 4;
    uVar3 = FUN_0042c180();
    puStack_7c = (uint *)0xffffffff;
    local_80 = (uint *)0x0;
    local_8._0_1_ = 5;
    FUN_00408ed0(uVar3);
    if (0xf < local_3c) {
      puStack_7c = (uint *)local_50[0];
                    /* WARNING: Subroutine does not return */
      local_80 = (uint *)&UNK_0044309b;
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    if (local_58 < 0x10) goto LAB_004430c5;
    puStack_7c = (uint *)local_6c[0];
  }
                    /* WARNING: Subroutine does not return */
  local_80 = (uint *)&UNK_004430c2;
  FUN_00aae91b();
}

