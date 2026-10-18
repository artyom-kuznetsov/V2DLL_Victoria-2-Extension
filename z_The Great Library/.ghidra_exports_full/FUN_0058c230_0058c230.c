// FUN_0058c230 @ 0058c230 body=[[0058c230, 0058c355] [0058c359, 0058c37e] [0058c382, 0058c3a1] [0058c3a5, 0058c45e] [0058c462, 0058c487] [0058c48b, 0058c4aa] [0058c4ae, 0058c4c4] [0058c4c8, 0058c4d8]]


void FUN_0058c230(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  uint local_f8 [4];
  undefined4 local_e8;
  uint local_e4;
  uint local_dc;
  undefined4 local_cc;
  uint local_c8;
  uint local_c0;
  undefined4 local_b0;
  uint local_ac;
  uint local_a4 [4];
  undefined4 local_94;
  uint local_90;
  uint local_88 [4];
  undefined4 local_78;
  uint local_74;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4cbaf;
  local_10 = ExceptionList;
  local_18 = *(undefined4 *)(in_ECX + 0x3c);
  iVar1 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x40) * 4) + 0x12a0) +
          *(int *)(in_ECX + 0x44) * 0x18;
  uVar5 = *(undefined4 *)(in_ECX + 0x48);
  ExceptionList = &local_10;
  *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(in_ECX + 0x4c);
  iVar4 = DAT_012588e8;
  *(undefined4 *)(iVar1 + 8) = uVar5;
  *(undefined1 *)(iVar1 + 0x10) = *(undefined1 *)(in_ECX + 0x50);
  *(undefined1 *)(iVar1 + 0x11) = *(undefined1 *)(in_ECX + 0x51);
  if (*(char *)(iVar4 + 0xd11) != '\0') {
    if (*(char *)(in_ECX + 0x50) == '\0') {
      local_58 = 0xf;
      local_5c = 0;
      local_6c[0] = local_6c[0] & 0xffffff00;
      FUN_00409350(&DAT_00ded94d,0);
      local_8 = 4;
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
      FUN_00409350(&DAT_00ded94d,0);
      local_8._0_1_ = 5;
      local_14 = *(int **)(DAT_012588e8 + 0xb24);
      uVar5 = FUN_009888f0(local_f8);
      local_8._0_1_ = 6;
      uVar5 = FUN_00988fa0(uVar5);
      local_8 = CONCAT31(local_8._1_3_,7);
      (**(code **)(*local_14 + 0x120))(uVar5,local_50,local_6c,0);
      if (0xf < local_ac) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_c0);
      }
      local_ac = 0xf;
      local_b0 = 0;
      local_c0 = local_c0 & 0xffffff00;
      if (0xf < local_e4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_f8[0]);
      }
      local_e4 = 0xf;
      local_e8 = 0;
      local_f8[0] = local_f8[0] & 0xffffff00;
      if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_50[0]);
      }
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
      uVar2 = local_6c[0];
      uVar3 = local_58;
    }
    else {
      local_74 = 0xf;
      local_78 = 0;
      local_88[0] = local_88[0] & 0xffffff00;
      FUN_00409350(&DAT_00ded94d,0);
      local_8 = 0;
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = local_34[0] & 0xffffff00;
      FUN_00409350(&DAT_00ded94d,0);
      local_8._0_1_ = 1;
      local_14 = *(int **)(DAT_012588e8 + 0xb24);
      uVar5 = FUN_009888f0(local_a4);
      local_8._0_1_ = 2;
      uVar5 = FUN_00988fa0(uVar5);
      local_8 = CONCAT31(local_8._1_3_,3);
      (**(code **)(*local_14 + 0x120))(uVar5,local_34,local_88,0);
      if (0xf < local_c8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_dc);
      }
      local_c8 = 0xf;
      local_cc = 0;
      local_dc = local_dc & 0xffffff00;
      if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_a4[0]);
      }
      local_90 = 0xf;
      local_94 = 0;
      local_a4[0] = local_a4[0] & 0xffffff00;
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_34[0]);
      }
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = local_34[0] & 0xffffff00;
      uVar2 = local_88[0];
      uVar3 = local_74;
    }
    if (0xf < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uVar2);
    }
  }
  ExceptionList = local_10;
  return;
}

