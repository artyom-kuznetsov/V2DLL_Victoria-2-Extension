// FUN_00895e90 @ 00895e90 body=[[00895e90, 00895efe] [00895f02, 008960fa] [008960fe, 00896128] [0089612c, 0089614b] [0089614f, 00896165] [00896169, 00896183] [00896187, 008962c5] [008962c9, 00896307] [0089630b, 0089632c] [00896330, 00896375] [00896379, 008963b0] [008963b4, 008963f7] [008963fb, 00896434] [00896438, 0089644f] [00896453, 00896467]]


/* WARNING: Removing unreachable block (ram,0x008963ec) */

undefined4 FUN_00895e90(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_ECX;
  float10 fVar6;
  uint in_stack_00000020;
  undefined8 uVar7;
  uint local_bc [4];
  undefined4 local_ac;
  uint local_a8;
  uint local_a0;
  undefined1 local_98 [4];
  int local_94;
  undefined4 local_90;
  uint local_8c;
  uint local_84 [2];
  undefined1 local_7c [4];
  int local_78;
  undefined4 local_74;
  uint local_70;
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  undefined1 local_4c [4];
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  undefined4 local_1c;
  undefined4 *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b68c84;
  local_10 = ExceptionList;
  local_14 = 0;
  local_8 = 1;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("PRESTIGE_EFFECT",0xf);
  local_8._0_1_ = 2;
  FUN_009a8ee0(local_4c,local_38);
  local_8._0_1_ = 4;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350(&DAT_00df963c,2);
  iVar5 = (int)param_2;
  local_8 = CONCAT31(local_8._1_3_,5);
  local_1c = *(undefined4 *)((int)param_2 + 8);
  local_18 = *(undefined4 **)(DAT_012587e4 + 4);
  param_2 = (undefined4 *)
            __alldiv((longlong)
                     (*(int *)(local_18[*(int *)((int)param_2 + 0xc)] + 0xea0) +
                     *(int *)(*(int *)(local_18[*(int *)((int)param_2 + 0xc)] + 0xbcc) + 0x28c)) *
                     (longlong)*(int *)(in_ECX + 0x20),1000,0);
  if (((int)param_2 < 0) && (-1000 < (int)param_2)) {
    param_2 = (undefined4 *)0xfffffc18;
LAB_00895fa2:
    if (((int)param_2 < 1) ||
       (param_2 = (undefined4 *)
                  __alldiv((longlong)
                           (*(int *)(*(int *)(local_18[*(int *)(iVar5 + 0xc)] + 0xbcc) + 0x288) +
                           1000) * (longlong)(int)param_2,1000,0), (int)param_2 < 1)) {
      if (-1 < (int)param_2) goto LAB_00895fff;
      goto LAB_00895fed;
    }
    uVar7 = 0x200df8518;
  }
  else {
    if (999 < (int)param_2) goto LAB_00895fa2;
    if (-1 < (int)param_2) {
      param_2 = (undefined4 *)0x3e8;
      goto LAB_00895fa2;
    }
LAB_00895fed:
    uVar7 = 0x200df8510;
  }
  FUN_00409350(uVar7);
LAB_00895fff:
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  FUN_00409350("VALUE",5);
  local_8._0_1_ = 6;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350(&DAT_00df8514,2);
  local_8._0_1_ = 7;
  fVar6 = (float10)FUN_0040b340();
  local_18 = (undefined4 *)(float)fVar6;
  FUN_00988d00(local_84,2);
  local_8._0_1_ = 8;
  FUN_00988f20();
  local_8._0_1_ = 9;
  FUN_00988f20();
  local_8._0_1_ = 10;
  local_18 = (undefined4 *)FUN_00aae9af();
  local_8._0_1_ = 0xb;
  if (local_18 == (undefined4 *)0x0) {
    local_18 = (undefined4 *)0x0;
  }
  else {
    local_18 = (undefined4 *)FUN_009a9ce0();
  }
  local_8._0_1_ = 10;
  FUN_009e6810(local_68,&local_18);
  if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_a8 = 0xf;
  local_ac = 0;
  uVar1 = local_bc[0] >> 8;
  local_bc[0] = uVar1 << 8;
  if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8c = 0xf;
  local_90 = 0;
  local_a0 = local_a0 & 0xffffff00;
  if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_70 = 0xf;
  local_74 = 0;
  local_84[0] = local_84[0] & 0xffffff00;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 5;
  uVar2 = (undefined1)local_8;
  local_8._0_1_ = 5;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if ((int)param_2 < 0) {
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    local_8._0_1_ = uVar2;
    FUN_00409350(&DAT_00e29bb4,4);
    local_8 = 0xe;
    local_14 = 4;
    puVar3 = (undefined4 *)FUN_009a8ee0(local_7c,local_68);
    local_8 = 0xf;
    local_14 = 0xc;
  }
  else {
    local_a8 = 0xf;
    local_ac = 0;
    local_bc[0] = uVar1 << 8;
    FUN_00409350(&DAT_00e29bac,4);
    local_8 = CONCAT31(local_8._1_3_,0xc);
    local_14 = 1;
    puVar3 = (undefined4 *)FUN_009a8ee0(local_98,local_bc);
    local_8 = 0xd;
    local_14 = 3;
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("DIRECTION",9);
  local_8 = 0x10;
  puVar4 = (undefined4 *)FUN_00aae9af();
  local_8._0_1_ = 0x11;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4[1] = local_4c;
    *puVar4 = &PTR_FUN_00e38ecc;
    puVar4[7] = 0xf;
    puVar4[6] = 0;
    *(undefined1 *)(puVar4 + 2) = 0;
    param_2 = puVar4;
    FUN_00408ed0();
    *puVar4 = &PTR_FUN_00e38f08;
    local_18 = puVar4 + 9;
    *local_18 = *puVar3;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    local_8._0_1_ = 0x13;
    FUN_009a97b0();
  }
  local_8 = CONCAT31(local_8._1_3_,0x10);
  param_2 = puVar4;
  FUN_009e6810(local_38,&param_2);
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  if ((local_14 & 8) != 0) {
    local_14 = local_14 & 0xfffffff7;
    local_8 = 0x14;
    FUN_009adb70();
    if (local_78 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_78 = 0;
    local_74 = 0;
    local_70 = 0;
  }
  if ((local_14 & 4) != 0) {
    local_14 = local_14 & 0xfffffffb;
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
  }
  if ((local_14 & 2) != 0) {
    local_14 = local_14 & 0xfffffffd;
    local_8 = 0x15;
    FUN_009adb70();
    if (local_94 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_94 = 0;
    local_90 = 0;
    local_8c = 0;
  }
  local_8 = 5;
  if (((local_14 & 1) != 0) && (local_14 = local_14 & 0xfffffffe, 0xf < local_a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iVar5 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
  local_14 = local_14 | 0x10;
  local_8 = CONCAT31(local_8._1_3_,0x16);
  FUN_009adb70();
  if (local_48 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

