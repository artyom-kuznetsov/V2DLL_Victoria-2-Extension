// FUN_0067f1d0 @ 0067f1d0 body=[[0067f1d0, 0067f3d0] [0067f3d4, 0067f436] [0067f43a, 0067f468]]


undefined4 FUN_0067f1d0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint local_500;
  int *piStack_4fc;
  uint *puStack_4f8;
  int *piStack_4f4;
  undefined ***local_4f0;
  int local_4ec;
  undefined1 *puStack_4e8;
  undefined **local_414;
  undefined4 local_410;
  undefined4 local_40c;
  undefined4 local_408;
  undefined1 local_404;
  undefined1 local_400;
  undefined4 *local_3f8;
  undefined1 local_e8;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 local_bc;
  undefined4 local_b8;
  undefined **local_b4 [5];
  uint local_a0;
  undefined4 local_90;
  uint local_8c;
  int local_84;
  int local_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_58;
  undefined4 local_48;
  undefined4 local_44;
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  undefined4 *local_20;
  undefined1 *local_1c;
  undefined1 local_18 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00bb8a13;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffb1c;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_44 = 0xf;
  local_48 = 0;
  local_58 = 0;
  local_1c = (undefined1 *)&local_500;
  local_8 = 1;
  uStack_7 = 0;
  local_4ec = 0xf;
  local_4f0 = (undefined ***)0x0;
  local_500 = local_500 & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350(&DAT_00ded94d,0);
  FUN_00992740(local_b4,param_2,0);
  _local_8 = CONCAT31(uStack_7,2);
  iVar4 = local_74 - local_78;
  puStack_4e8 = (undefined1 *)0x67f267;
  local_1c = (undefined1 *)(*(code *)local_b4[0][0xe])();
  uVar1 = (int)local_1c + iVar4;
  local_18[0] = 0;
  if ((uint)(local_74 - local_78) < uVar1) {
    puStack_4e8 = local_18;
    local_4ec = (uVar1 - local_74) + local_78;
    local_4f0 = (undefined ***)local_74;
    piStack_4f4 = &local_78;
    puStack_4f8 = (uint *)0x67f290;
    FUN_004d8570();
  }
  else if (uVar1 < (uint)(local_74 - local_78)) {
    puStack_4e8 = (undefined1 *)local_74;
    local_4ec = uVar1 + local_78;
    local_4f0 = (undefined ***)&local_78;
    piStack_4f4 = (int *)0x67f2a4;
    FUN_009d69b0();
  }
  local_4ec = iVar4 + local_78;
  puStack_4e8 = local_1c;
  local_4f0 = (undefined ***)0x67f2bf;
  (*(code *)local_b4[0][3])();
  local_4f0 = (undefined ***)0xf;
  piStack_4f4 = (int *)0xded978;
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  puStack_4f8 = (uint *)0x67f2db;
  FUN_00409350();
  local_4f0 = (undefined ***)0x114;
  local_8 = 3;
  piStack_4f4 = (int *)0x67f2e9;
  puVar2 = (undefined4 *)FUN_00aae9af();
  local_8 = 4;
  local_20 = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    local_3f8 = (undefined4 *)0x0;
  }
  else {
    local_4f0 = (undefined ***)0x3c;
    piStack_4f4 = (int *)0x67f300;
    local_1c = (undefined1 *)FUN_00aae9af();
    local_8 = 5;
    if (local_1c == (undefined1 *)0x0) {
      uVar3 = 0;
    }
    else {
      local_4f0 = (undefined ***)0x0;
      piStack_4f4 = (int *)0x1;
      puStack_4f8 = (uint *)0x0;
      piStack_4fc = &local_78;
      local_500 = (uint)local_1c;
      uVar3 = FUN_009d5450();
    }
    local_8 = 4;
    *puVar2 = &PTR_FUN_00e37c30;
    puVar2[1] = uVar3;
    *(undefined2 *)(puVar2 + 0x44) = 0x100;
    local_4f0 = (undefined ***)0x67f33b;
    FUN_00990100();
    *puVar2 = &PTR_FUN_00e37c3c;
    local_3f8 = puVar2;
  }
  local_414 = &PTR_FUN_00e38524;
  local_410 = 0;
  local_40c = 0;
  local_408 = 0;
  local_404 = 0;
  local_4f0 = (undefined ***)0xffffffff;
  local_8 = 6;
  piStack_4f4 = (int *)0x0;
  puStack_4f8 = local_3c;
  local_400 = 0;
  local_d4 = 0xf;
  local_d8 = 0;
  local_e8 = 0;
  piStack_4fc = (int *)0x67f39b;
  FUN_00408ed0();
  local_cc = 0;
  local_c8 = 0;
  local_c4 = 0;
  local_bc = 1;
  local_b8 = 0;
  local_8 = 8;
  if (local_28 < 0x10) {
    local_4f0 = &local_414;
    piStack_4f4 = (int *)param_1;
    local_28 = 0xf;
    local_2c = 0;
    local_3c[0] = local_3c[0] & 0xffffff00;
    puStack_4f8 = (uint *)0x67f3ed;
    FUN_0067f5b0();
    _local_8 = CONCAT31(uStack_7,2);
    local_4f0 = (undefined ***)0x67f3fc;
    FUN_009a0dc0();
    local_b4[0] = &PTR_FUN_00e37dc0;
    if (local_84 != 0) {
      local_4f0 = (undefined ***)local_84;
      piStack_4f4 = (int *)0x67f413;
      PHYSFS_close();
      local_84 = 0;
    }
    local_b4[0] = &PTR_FUN_00e3b540;
    if (local_8c < 0x10) {
      local_8c = 0xf;
      local_90 = 0;
      local_a0 = local_a0 & 0xffffff00;
      local_4f0 = (undefined ***)0x67f454;
      FUN_009d6f00();
      ExceptionList = local_10;
      return 1;
    }
    local_4f0 = (undefined ***)local_a0;
                    /* WARNING: Subroutine does not return */
    piStack_4f4 = (int *)&UNK_0067f437;
    FUN_00aae91b();
  }
  local_4f0 = (undefined ***)local_3c[0];
                    /* WARNING: Subroutine does not return */
  piStack_4f4 = (int *)&UNK_0067f3d1;
  FUN_00aae91b();
}

