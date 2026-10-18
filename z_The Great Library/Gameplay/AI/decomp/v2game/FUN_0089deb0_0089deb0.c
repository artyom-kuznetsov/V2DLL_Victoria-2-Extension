// FUN_0089deb0 @ 0089deb0 body=[[0089deb0, 0089dff0] [0089dff9, 0089e0d0] [0089e0d4, 0089e0f5] [0089e0f9, 0089e11e] [0089e122, 0089e144] [0089e148, 0089e167] [0089e16b, 0089e23e] [0089e242, 0089e264] [0089e268, 0089e287] [0089e28b, 0089e2aa] [0089e2ae, 0089e2ca] [0089e2ce, 0089e2ed] [0089e2f1, 0089e30c] [0089e315, 0089e323] [0089e327, 0089e33c]]


undefined1 * FUN_0089deb0(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  uint in_stack_00000024;
  undefined4 in_stack_0000002c;
  undefined1 auStack_178 [16];
  undefined4 uStack_168;
  undefined4 uStack_164;
  int *piStack_160;
  uint *puStack_15c;
  undefined1 local_14c [8];
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_104 [5];
  uint local_f0;
  uint local_e8;
  undefined4 local_d8;
  uint local_d4;
  uint local_cc;
  undefined4 local_bc;
  uint local_b8;
  uint local_b0 [4];
  undefined4 local_a0;
  uint local_9c;
  uint local_94;
  undefined4 local_84;
  uint local_80;
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  undefined1 *local_4c;
  undefined4 local_48;
  int *local_44;
  uint *local_3c;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  int local_1c;
  int local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b87284;
  local_10 = ExceptionList;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_48 = 1;
  puStack_15c = (uint *)0x89df02;
  FUN_008a88d0();
  local_3c = (uint *)(DAT_012588e8 + 0xbe0);
  piVar4 = (int *)*local_3c;
  do {
    do {
      if ((piVar4 < (int *)*local_3c) || ((int *)local_3c[1] <= piVar4)) {
        if (0xf < in_stack_00000024) {
          puStack_15c = (uint *)param_4;
                    /* WARNING: Subroutine does not return */
          piStack_160 = (int *)&UNK_0089e324;
          FUN_00aae91b();
        }
        ExceptionList = local_10;
        return param_1;
      }
      iVar1 = *piVar4;
      local_44 = piVar4 + 1;
      local_144 = *(undefined4 *)(iVar1 + 0x1c);
      local_140 = *(undefined4 *)(iVar1 + 0x20);
      puStack_15c = (uint *)local_14c;
      piStack_160 = (int *)0x89df5c;
      local_1c = iVar1;
      cVar3 = (**(code **)(*(int *)(local_18 + 0x20) + 0x18))();
      piVar4 = local_44;
    } while ((cVar3 != '\x01') || (*(int *)(iVar1 + 0x20) == *(int *)(param_2 + 0xc)));
    puStack_15c = (uint *)in_stack_0000002c;
    local_4c = auStack_178;
    uStack_164 = 0xf;
    uStack_168 = 0;
    auStack_178[0] = 0;
    FUN_00408ed0(&param_4,0,0xffffffff);
    FUN_0087a6c0(local_104,local_14c,param_3);
    puStack_15c = (uint *)0xa;
    piStack_160 = &local_78;
    local_8._0_1_ = 2;
    uStack_164 = 0x89dfba;
    piVar4 = (int *)FUN_00989510();
    local_11 = (piVar4[1] - *piVar4) / 0x1c < 2;
    if (local_78 != 0) {
      puStack_15c = (uint *)0x89dfe8;
      FUN_00413860();
      puStack_15c = (uint *)local_78;
                    /* WARNING: Subroutine does not return */
      piStack_160 = (int *)&UNK_0089dff1;
      FUN_00aae91b();
    }
    local_78 = 0;
    local_74 = 0;
    local_70 = 0;
    if ((bool)local_11) {
      puStack_15c = (uint *)0x1;
      piStack_160 = (int *)&DAT_00ded950;
      local_24 = 0xf;
      local_28 = 0;
      local_38[0] = local_38[0] & 0xffffff00;
      uStack_164 = 0x89e023;
      FUN_00409350();
      puStack_15c = (uint *)in_stack_0000002c;
      local_4c = auStack_178;
      local_8._0_1_ = 3;
      uStack_164 = 0xf;
      uStack_168 = 0;
      auStack_178[0] = 0;
      FUN_00408ed0(&param_4,0,0xffffffff);
      uVar5 = FUN_0087a6c0(local_b0,local_14c,0);
      local_8._0_1_ = 4;
      puStack_15c = (uint *)0x89e072;
      FUN_004f97a0();
      puStack_15c = local_38;
      local_8._0_1_ = 5;
      piStack_160 = (int *)0x89e087;
      FUN_00988f20();
      puStack_15c = local_104;
      local_8._0_1_ = 6;
      piStack_160 = (int *)0x89e09f;
      FUN_00988f20();
      local_8._0_1_ = 7;
      piStack_160 = (int *)0x89e0ae;
      puStack_15c = (uint *)uVar5;
      uStack_164 = FUN_00988f20();
      puStack_15c = (uint *)0xffffffff;
      piStack_160 = (int *)0x0;
      local_8 = CONCAT31(local_8._1_3_,8);
      uStack_168 = 0x89e0be;
      FUN_00448aa0();
      if (0xf < local_54) {
        puStack_15c = (uint *)local_68[0];
                    /* WARNING: Subroutine does not return */
        piStack_160 = (int *)&UNK_0089e0d1;
        FUN_00aae91b();
      }
      local_54 = 0xf;
      local_58 = 0;
      local_68[0] = local_68[0] & 0xffffff00;
      if (0xf < local_d4) {
        puStack_15c = (uint *)local_e8;
                    /* WARNING: Subroutine does not return */
        piStack_160 = (int *)&UNK_0089e0f6;
        FUN_00aae91b();
      }
      local_d4 = 0xf;
      local_d8 = 0;
      local_e8 = local_e8 & 0xffffff00;
      if (0xf < local_b8) {
        puStack_15c = (uint *)local_cc;
                    /* WARNING: Subroutine does not return */
        piStack_160 = (int *)&UNK_0089e11f;
        FUN_00aae91b();
      }
      local_b8 = 0xf;
      local_bc = 0;
      local_cc = local_cc & 0xffffff00;
      if (0xf < local_80) {
        puStack_15c = (uint *)local_94;
                    /* WARNING: Subroutine does not return */
        piStack_160 = (int *)&UNK_0089e145;
        FUN_00aae91b();
      }
      local_80 = 0xf;
      local_84 = 0;
      local_94 = local_94 & 0xffffff00;
      if (0xf < local_9c) {
        puStack_15c = (uint *)local_b0[0];
                    /* WARNING: Subroutine does not return */
        piStack_160 = (int *)&UNK_0089e168;
        FUN_00aae91b();
      }
      local_b0[0] = local_b0[0] & 0xffffff00;
      puStack_15c = (uint *)local_38[0];
      piVar4 = local_44;
      uVar2 = local_24;
    }
    else {
      puStack_15c = (uint *)0x4;
      piStack_160 = (int *)&DAT_00e29e24;
      local_54 = 0xf;
      local_58 = 0;
      local_68[0] = local_68[0] & 0xffffff00;
      uStack_164 = 0x89e1a6;
      FUN_00409350();
      local_8._0_1_ = 9;
      puStack_15c = (uint *)0x89e1b8;
      uVar5 = FUN_004f97a0();
      local_8._0_1_ = 10;
      puStack_15c = (uint *)0x1;
      piStack_160 = (int *)&DAT_00defdf4;
      local_24 = 0xf;
      local_28 = 0;
      local_38[0] = local_38[0] & 0xffffff00;
      uStack_164 = 0x89e1d6;
      FUN_00409350();
      local_8._0_1_ = 0xb;
      piStack_160 = (int *)0x89e1e9;
      puStack_15c = (uint *)uVar5;
      FUN_00988f20();
      puStack_15c = local_68;
      local_8._0_1_ = 0xc;
      piStack_160 = (int *)0x89e1fe;
      FUN_00988f20();
      puStack_15c = local_104;
      local_8._0_1_ = 0xd;
      piStack_160 = (int *)0x89e216;
      uStack_164 = FUN_00988f20();
      puStack_15c = (uint *)0xffffffff;
      piStack_160 = (int *)0x0;
      local_8 = CONCAT31(local_8._1_3_,0xe);
      uStack_168 = 0x89e226;
      FUN_00448aa0();
      if (0xf < local_9c) {
        puStack_15c = (uint *)local_b0[0];
                    /* WARNING: Subroutine does not return */
        piStack_160 = (int *)&UNK_0089e23f;
        FUN_00aae91b();
      }
      local_9c = 0xf;
      local_a0 = 0;
      local_b0[0] = local_b0[0] & 0xffffff00;
      if (0xf < local_80) {
        puStack_15c = (uint *)local_94;
                    /* WARNING: Subroutine does not return */
        piStack_160 = (int *)&UNK_0089e265;
        FUN_00aae91b();
      }
      local_80 = 0xf;
      local_84 = 0;
      local_94 = local_94 & 0xffffff00;
      if (0xf < local_b8) {
        puStack_15c = (uint *)local_cc;
                    /* WARNING: Subroutine does not return */
        piStack_160 = (int *)&UNK_0089e288;
        FUN_00aae91b();
      }
      local_b8 = 0xf;
      local_bc = 0;
      local_cc = local_cc & 0xffffff00;
      if (0xf < local_24) {
        puStack_15c = (uint *)local_38[0];
                    /* WARNING: Subroutine does not return */
        piStack_160 = (int *)&UNK_0089e2ab;
        FUN_00aae91b();
      }
      local_24 = 0xf;
      local_28 = 0;
      local_38[0] = local_38[0] & 0xffffff00;
      if (0xf < local_d4) {
        puStack_15c = (uint *)local_e8;
                    /* WARNING: Subroutine does not return */
        piStack_160 = (int *)&UNK_0089e2cb;
        FUN_00aae91b();
      }
      local_e8 = local_e8 & 0xffffff00;
      puStack_15c = (uint *)local_68[0];
      piVar4 = local_44;
      uVar2 = local_54;
    }
    local_44 = piVar4;
    if (0xf < uVar2) {
      local_80 = 0xf;
      local_84 = 0;
      local_9c = 0xf;
      local_a0 = 0;
      local_b8 = 0xf;
      local_bc = 0;
      local_d4 = 0xf;
      local_d8 = 0;
                    /* WARNING: Subroutine does not return */
      piStack_160 = (int *)&UNK_0089e2ee;
      FUN_00aae91b();
    }
    local_80 = 0xf;
    local_84 = 0;
    local_9c = 0xf;
    local_a0 = 0;
    local_b8 = 0xf;
    local_bc = 0;
    local_d4 = 0xf;
    local_d8 = 0;
    local_8._1_3_ = (undefined3)((uint)local_8 >> 8);
    local_8._0_1_ = 1;
    if (0xf < local_f0) {
                    /* WARNING: Subroutine does not return */
      piStack_160 = (int *)&UNK_0089e30d;
      FUN_00aae91b();
    }
  } while( true );
}

