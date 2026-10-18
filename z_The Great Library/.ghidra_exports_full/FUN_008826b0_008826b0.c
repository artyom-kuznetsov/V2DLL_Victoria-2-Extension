// FUN_008826b0 @ 008826b0 body=[[008826b0, 0088274c] [00882750, 008827a2] [008827a6, 008827c5] [008827c9, 008828ab] [008828af, 008828d0] [008828d4, 008828fb] [008828ff, 0088294a] [0088294e, 0088298d] [00882991, 008829a5]]


undefined1 * FUN_008826b0(undefined1 *param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_ECX;
  uint in_stack_00000020;
  uint local_8c;
  uint local_84 [4];
  undefined4 local_74;
  uint local_70;
  undefined4 local_68;
  undefined4 *local_64;
  int local_60;
  uint local_5c;
  undefined1 local_54 [4];
  int local_50;
  undefined4 local_4c;
  uint local_48;
  uint local_40 [4];
  undefined4 local_30;
  uint local_2c;
  undefined1 local_24 [4];
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b884a5;
  local_10 = ExceptionList;
  local_64 = (undefined4 *)0x0;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0x20) != 0) {
    local_68 = param_2[2];
    ExceptionList = &local_10;
    local_60 = in_ECX;
    cVar1 = FUN_005068b0();
    if (cVar1 != '\0') {
      local_70 = 0xf;
      local_74 = 0;
      local_84[0] = local_84[0] & 0xffffff00;
      FUN_00409350("MODIFIER_REMOVED",0x10);
      local_8._0_1_ = 1;
      FUN_009a8ee0(local_24,local_84);
      local_8._0_1_ = 3;
      if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_70 = 0xf;
      local_74 = 0;
      local_84[0] = local_84[0] & 0xffffff00;
      local_2c = 0xf;
      local_30 = 0;
      local_40[0] = local_40[0] & 0xffffff00;
      FUN_00409350("WHERE",5);
      local_8._0_1_ = 4;
      FUN_0055dd40();
      local_8._0_1_ = 5;
      FUN_009a9980();
      if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 3;
      local_48 = 0xf;
      local_4c = 0;
      local_5c = local_5c & 0xffffff00;
      if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_2c = 0xf;
      local_30 = 0;
      local_40[0] = local_40[0] & 0xffffff00;
      FUN_00409350(&DAT_00e29cf4,4);
      local_8._0_1_ = 6;
      uVar2 = (**(code **)(**(int **)(local_60 + 0x20) + 0x18))();
      local_8._0_1_ = 7;
      puVar3 = (undefined4 *)FUN_009a8ee0(local_54,uVar2);
      local_8._0_1_ = 8;
      puVar4 = (undefined4 *)FUN_00aae9af();
      local_8._0_1_ = 9;
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4[1] = local_24;
        *puVar4 = &PTR_FUN_00e38ecc;
        puVar4[7] = 0xf;
        puVar4[6] = 0;
        *(undefined1 *)(puVar4 + 2) = 0;
        param_2 = puVar4;
        FUN_00408ed0();
        *puVar4 = &PTR_FUN_00e38f08;
        local_64 = puVar4 + 9;
        *local_64 = *puVar3;
        puVar4[10] = 0;
        puVar4[0xb] = 0;
        puVar4[0xc] = 0;
        local_8._0_1_ = 0xb;
        FUN_009a97b0();
      }
      local_8._0_1_ = 8;
      param_2 = puVar4;
      FUN_009e6810(local_40,&param_2);
      local_8._0_1_ = 0xc;
      FUN_009adb70();
      if (local_50 != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_50 = 0;
      local_4c = 0;
      local_48 = 0;
      if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 3;
      if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      iVar5 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
      local_8 = CONCAT31(local_8._1_3_,0xd);
      FUN_009adb70();
      if (local_20 != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      goto joined_r0x0088295b;
    }
  }
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  FUN_00409350(&DAT_00ded94d,0);
joined_r0x0088295b:
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

