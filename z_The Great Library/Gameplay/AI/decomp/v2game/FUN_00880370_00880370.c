// FUN_00880370 @ 00880370 body=[[00880370, 0088042f] [00880433, 0088056c] [00880570, 00880591] [00880595, 008805bf] [008805c3, 008805e8] [008805ec, 0088060b] [0088060f, 0088062c] [00880630, 0088067b] [0088067f, 008806be] [008806c2, 008806d6]]


undefined1 * FUN_00880370(undefined1 *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int in_ECX;
  int *piVar6;
  uint in_stack_00000020;
  undefined8 local_fc;
  uint local_e8 [4];
  undefined4 local_d8;
  uint local_d4;
  uint local_cc;
  undefined4 local_bc;
  uint local_b8;
  uint local_b0;
  undefined4 local_a0;
  uint local_9c;
  uint local_94 [4];
  undefined4 local_84;
  uint local_80;
  uint local_78 [4];
  undefined4 local_68;
  uint local_64;
  undefined4 local_5c;
  undefined4 *local_58;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  undefined1 local_38 [4];
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_24 [4];
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar4 = (undefined4 *)param_2;
  puStack_c = &LAB_00b69ab6;
  local_10 = ExceptionList;
  local_58 = (undefined4 *)0x0;
  local_8 = 0;
  piVar6 = *(int **)(in_ECX + 0x20);
  ExceptionList = &local_10;
  if (*(char *)(in_ECX + 0x24) != '\0') {
    puVar1 = (undefined8 *)((int)param_2 + 0x38);
    param_2 = &local_fc;
    local_fc = *puVar1;
    ExceptionList = &local_10;
    iVar2 = FUN_009c16d0();
    if (iVar2 != 0) {
      piVar6 = *(int **)(iVar2 + 0x40);
    }
  }
  if ((piVar6 == (int *)0x0) ||
     (local_5c = puVar4[2],
     *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + puVar4[3] * 4) + 0xbd0) == piVar6)) {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    local_fc = 0xded94d;
    *param_1 = 0;
    FUN_00409350();
  }
  else {
    local_fc = 0xa00e29ca0;
    local_64 = 0xf;
    local_68 = 0;
    local_78[0] = local_78[0] & 0xffffff00;
    FUN_00409350();
    local_fc = CONCAT44(local_78,local_24);
    local_8._0_1_ = 1;
    FUN_009a8ee0();
    local_8._0_1_ = 3;
    if (0xf < local_64) {
      local_fc = CONCAT44(local_78[0],&UNK_00880430);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_fc = 0x200df8514;
    local_64 = 0xf;
    local_68 = 0;
    local_78[0] = local_78[0] & 0xffffff00;
    local_80 = 0xf;
    local_84 = 0;
    local_94[0] = local_94[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 4;
    local_fc = 0x300e29cac;
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 5;
    local_fc = CONCAT44(local_e8,0x88048a);
    uVar3 = (**(code **)(*piVar6 + 0x1c))();
    local_8._0_1_ = 6;
    local_fc = CONCAT44(uVar3,0x88049f);
    FUN_00988fa0();
    local_8._0_1_ = 7;
    local_fc = CONCAT44(local_94,0x8804ba);
    uVar3 = FUN_00988f20();
    local_fc = CONCAT44(uVar3,local_38);
    local_8._0_1_ = 8;
    puVar4 = (undefined4 *)FUN_009a8ee0();
    local_8._0_1_ = 9;
    local_fc = 0x38008804d5;
    puVar5 = (undefined4 *)FUN_00aae9af();
    local_8._0_1_ = 10;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      *puVar5 = &PTR_FUN_00e38ecc;
      puVar5[1] = local_24;
      local_fc = 0xffffffff00000000;
      puVar5[7] = 0xf;
      puVar5[6] = 0;
      *(undefined1 *)(puVar5 + 2) = 0;
      param_2 = (undefined8 *)puVar5;
      FUN_00408ed0();
      *puVar5 = &PTR_FUN_00e38f08;
      local_58 = puVar5 + 9;
      *local_58 = *puVar4;
      puVar5[10] = 0;
      puVar5[0xb] = 0;
      puVar5[0xc] = 0;
      local_8._0_1_ = 0xc;
      local_fc = CONCAT44(0x88052e,(undefined4)local_fc);
      FUN_009a97b0();
    }
    local_8._0_1_ = 9;
    local_fc = CONCAT44(&param_2,local_54);
    param_2 = (undefined8 *)puVar5;
    FUN_009e6810();
    local_8._0_1_ = 0xd;
    local_fc = CONCAT44(0x880555,(undefined4)local_fc);
    FUN_009adb70();
    if (local_34 != 0) {
      local_fc = CONCAT44(0x880564,(undefined4)local_fc);
      FUN_009e6a80();
      local_fc = CONCAT44(local_34,&UNK_0088056d);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    if (0xf < local_9c) {
      local_fc = CONCAT44(local_b0,&UNK_00880592);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_9c = 0xf;
    local_a0 = 0;
    local_b0 = local_b0 & 0xffffff00;
    if (0xf < local_b8) {
      local_fc = CONCAT44(local_cc,&UNK_008805c0);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_b8 = 0xf;
    local_bc = 0;
    local_cc = local_cc & 0xffffff00;
    if (0xf < local_d4) {
      local_fc = CONCAT44(local_e8[0],&UNK_008805e9);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_d4 = 0xf;
    local_d8 = 0;
    local_e8[0] = local_e8[0] & 0xffffff00;
    if (0xf < local_40) {
      local_fc = CONCAT44(local_54[0],&UNK_0088060c);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 3;
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    if (0xf < local_80) {
      local_fc = CONCAT44(local_94[0],&UNK_0088062d);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_fc = CONCAT44(0x880635,(undefined4)local_fc);
    iVar2 = FUN_00475500();
    local_fc = *(undefined8 *)(iVar2 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
    local_8 = CONCAT31(local_8._1_3_,0xe);
    local_fc = CONCAT44(0x880664,(undefined4)local_fc);
    FUN_009adb70();
    if (local_20 != 0) {
      local_fc = CONCAT44(0x880673,(undefined4)local_fc);
      FUN_009e6a80();
      local_fc = CONCAT44(local_20,&UNK_0088067c);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
  }
  if (0xf < in_stack_00000020) {
    local_fc = CONCAT44(param_3,&UNK_008806bf);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

