// FUN_0091f620 @ 0091f620 body=[[0091f620, 0091f74b] [0091f74f, 0091f77f] [0091f783, 0091f7ae] [0091f7b2, 0091f7d7] [0091f7db, 0091f7ff] [0091f803, 0091f8ef] [0091f8f3, 0091f922] [0091f926, 0091f950] [0091f954, 0091f97e] [0091f982, 0091f9a6] [0091f9aa, 0091f9c8] [0091f9cc, 0091f9eb] [0091f9ef, 0091fa08]]


undefined4 FUN_0091f620(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *in_ECX;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined1 *local_174;
  undefined1 *local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  uint uStack_150;
  undefined1 local_14c;
  undefined4 uStack_140;
  uint local_13c;
  undefined4 local_138;
  uint uStack_134;
  undefined1 local_130;
  undefined4 uStack_124;
  uint local_120;
  uint local_11c;
  undefined1 uStack_118;
  undefined4 uStack_10c;
  uint uStack_108;
  undefined4 uStack_104;
  uint uStack_100;
  undefined1 auStack_fc [12];
  undefined4 uStack_f0;
  uint uStack_ec;
  uint uStack_e4;
  undefined4 uStack_d4;
  uint uStack_d0;
  uint uStack_c4;
  undefined4 uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  undefined1 auStack_a8 [12];
  undefined4 uStack_9c;
  uint uStack_98;
  uint uStack_8c;
  undefined1 local_88 [12];
  undefined4 uStack_7c;
  uint uStack_78;
  uint uStack_74;
  undefined4 uStack_64;
  uint uStack_60;
  uint uStack_54;
  undefined1 local_50 [12];
  undefined4 uStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined1 auStack_38 [12];
  undefined4 uStack_2c;
  uint uStack_28;
  void *pvStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00b84f68;
  pvStack_14 = ExceptionList;
  local_160 = (undefined1 *)0x0;
  local_15c = 0;
  local_158 = 0;
  local_154 = 0;
  local_174 = (undefined1 *)0x1;
  local_c = 0;
  ExceptionList = &pvStack_14;
  FUN_0091fa10(in_ECX);
  local_174 = (undefined1 *)0x5;
  local_138 = 0xf;
  local_13c = 0;
  local_14c = 0;
  FUN_00409350("VALUE");
  local_c._0_1_ = 1;
  local_174 = (undefined1 *)0xf;
  local_11c = 0xf;
  local_120 = 0;
  local_130 = 0;
  FUN_00409350("_REJECT_PENALTY");
  local_c._0_1_ = 2;
  local_174 = *(undefined1 **)(*(int *)(DAT_012586dc + 0x30) + 0x3fc);
  local_160 = (undefined1 *)&local_174;
  FUN_00988970(local_88);
  local_c = CONCAT31(local_c._1_3_,3);
  local_174 = local_50;
  (**(code **)(*in_ECX + 0x24))();
  puStack_10._0_1_ = 4;
  uVar1 = FUN_00988f20(&uStack_134);
  puStack_10._0_1_ = 5;
  FUN_0055d590(auStack_fc,uVar1,unaff_EBX);
  if (0xf < uStack_b0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_c4);
  }
  uStack_b0 = 0xf;
  uStack_b4 = 0;
  uStack_c4 = uStack_c4 & 0xffffff00;
  if (0xf < uStack_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_54);
  }
  uStack_40 = 0xf;
  uStack_44 = 0;
  uStack_54 = uStack_54 & 0xffffff00;
  if (0xf < uStack_78) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_8c);
  }
  uStack_78 = 0xf;
  uStack_7c = 0;
  uStack_8c = uStack_8c & 0xffffff00;
  if (0xf < local_120) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_134);
  }
  local_120 = 0xf;
  uStack_124 = 0;
  uStack_134 = uStack_134 & 0xffffff00;
  puStack_10._0_1_ = 0xb;
  if (0xf < local_13c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_150);
  }
  local_13c = 0xf;
  uStack_140 = 0;
  uStack_150 = uStack_150 & 0xffffff00;
  uStack_104 = 0xf;
  uStack_108 = 0;
  uStack_118 = 0;
  FUN_00409350("_OFFER",6);
  puStack_10._0_1_ = 0xc;
  uVar1 = FUN_0091fc40(in_ECX,auStack_38,&local_160,0);
  puStack_10._0_1_ = 0xd;
  iVar2 = FUN_0055dd40();
  puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0xe);
  (**(code **)(*in_ECX + 0x24))(auStack_a8);
  pvStack_14._0_1_ = 0xf;
  FUN_00988f20(&local_11c);
  pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,0x10);
  FUN_0043e9a0(param_1,"ACTOR",uVar1,&DAT_00dfaa64,unaff_ESI,"PENALTY",&uStack_100);
  if (0xf < uStack_d0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_e4);
  }
  uStack_d0 = 0xf;
  uStack_d4 = 0;
  uStack_e4 = uStack_e4 & 0xffffff00;
  if (0xf < uStack_98) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_ac);
  }
  uStack_98 = 0xf;
  uStack_9c = 0;
  uStack_ac = uStack_ac & 0xffffff00;
  if (0xf < uStack_60) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_74);
  }
  uStack_60 = 0xf;
  uStack_64 = 0;
  uStack_74 = uStack_74 & 0xffffff00;
  if (0xf < uStack_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_3c);
  }
  uStack_28 = 0xf;
  uStack_2c = 0;
  uStack_3c = uStack_3c & 0xffffff00;
  if (0xf < uStack_108) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_11c);
  }
  uStack_108 = 0xf;
  uStack_10c = 0;
  local_11c = local_11c & 0xffffff00;
  if (0xf < uStack_ec) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_100);
  }
  uStack_ec = 0xf;
  uStack_f0 = 0;
  uStack_100 = uStack_100 & 0xffffff00;
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar2);
  }
  ExceptionList = pvStack_1c;
  return param_1;
}

