// FUN_009a2740 @ 009a2740 body=[[009a2740, 009a2835] [009a2839, 009a28ba]]


undefined4 FUN_009a2740(int param_1,uint param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined ***local_124;
  undefined4 uStack_120;
  uint uStack_11c;
  undefined4 uStack_118;
  char *local_114;
  undefined ***local_110;
  undefined4 uStack_10c;
  uint uStack_fc;
  undefined1 local_f8 [16];
  undefined4 local_e8;
  undefined4 local_e4;
  undefined1 *local_dc;
  undefined **appuStack_78 [18];
  void *pvStack_30;
  void *pvStack_2c;
  undefined1 uStack_24;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b58bf6;
  pvStack_14 = ExceptionList;
  piVar1 = *(int **)(DAT_0131c960 + (param_2 % DAT_0131c95c) * 4);
  do {
    if (piVar1 == (int *)0x0) {
LAB_009a2792:
      uStack_10c = 9;
      local_110 = (undefined ***)0xe3852c;
      local_e4 = 0xf;
      local_e8 = 0;
      local_f8[0] = 0;
      local_114 = (char *)0x9a27b2;
      ExceptionList = &pvStack_14;
      FUN_00409350();
      uStack_10c = 3;
      local_114 = local_f8;
      local_110 = (undefined ***)0x61;
      local_c = 0;
      uStack_118 = 0x9a27cb;
      uVar2 = FUN_004015b0();
      uStack_10c = 0;
      local_110 = (undefined ***)0x16;
      local_114 = "Couldn\'t find command ";
      local_c = CONCAT31(local_c._1_3_,1);
      uStack_11c = 0x9a27e6;
      uStack_118 = uVar2;
      FUN_00987d50();
      uStack_11c = param_2;
      local_124 = (undefined ***)0x9a27ed;
      uStack_120 = uVar2;
      local_124 = (undefined ***)FUN_00455470();
      FUN_00401280();
      local_124 = appuStack_78;
      uStack_24 = 0;
      FUN_00987ac0();
      local_124 = appuStack_78;
      appuStack_78[0] = std::ios_base::vftable;
      FUN_00aad52d();
      if (0xf < uStack_fc) {
        local_124 = local_110;
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      ExceptionList = pvStack_2c;
      return 0;
    }
    if (*(uint *)(*piVar1 + 0x30) == param_2) {
      if (*piVar1 != 0) {
        piVar1 = *(int **)(DAT_0131c960 + (param_2 % DAT_0131c95c) * 4);
        break;
      }
      goto LAB_009a2792;
    }
    piVar1 = (int *)piVar1[1];
  } while( true );
joined_r0x009a285f:
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)0x0;
LAB_009a2871:
    local_dc = (undefined1 *)&local_124;
    local_110 = (undefined ***)0xf;
    local_114 = (char *)0x0;
    local_124 = (undefined ***)((uint)local_124 & 0xffffff00);
    ExceptionList = &pvStack_14;
    FUN_00408ed0(param_1 + 0x32c,0,0xffffffff);
    uVar2 = (**(code **)(*piVar3 + 0x34))();
    ExceptionList = pvStack_30;
    return uVar2;
  }
  piVar3 = (int *)*piVar1;
  if (piVar3[0xc] == param_2) goto LAB_009a2871;
  piVar1 = (int *)piVar1[1];
  goto joined_r0x009a285f;
}

