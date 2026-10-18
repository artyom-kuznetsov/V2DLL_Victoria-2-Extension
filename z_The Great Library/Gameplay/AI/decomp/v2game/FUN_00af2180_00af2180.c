// FUN_00af2180 @ 00af2180 body=[[00af2180, 00af2737]]


void FUN_00af2180(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined1 *puVar8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  int iStack_ac;
  float fStack_a8;
  float local_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  char cStack_60;
  char cStack_5f;
  char cStack_5e;
  char cStack_5d;
  char cStack_5c;
  char cStack_5b;
  char cStack_5a;
  char cStack_59;
  char cStack_58;
  undefined4 uStack_54;
  uint uStack_4c;
  uint local_44;
  
  local_44 = DAT_00ef259c ^ (uint)&fStack_f4;
  iVar2 = *param_2;
  iVar3 = param_2[7];
  (**(code **)(*param_1 + 8))(&local_a0,0x58);
  if (iVar3 == 1) {
    uVar4 = (undefined1)uStack_54;
    uVar5 = uStack_54._1_1_;
    uStack_54._0_2_ = CONCAT11(uStack_54._2_1_,uStack_54._3_1_);
    uStack_54 = CONCAT13(uVar4,CONCAT12(uVar5,(undefined2)uStack_54));
  }
  if (*(uint *)(iVar2 + 0x84) <= uStack_54) {
    FUN_00b15d30();
    __security_check_cookie(uStack_4c ^ (uint)&stack0xffffff04);
    return;
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x80) + uStack_54 * 4);
  puVar6 = (undefined4 *)(*(code *)PTR_FUN_00f01b08)(0x50,0x193,4,0,0,0xffffffff);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    *puVar6 = &PTR_LAB_00dddd48;
    *(undefined2 *)(puVar6 + 0x13) = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0x10] = 0x3f800000;
    puVar6[0x11] = 0x3f800000;
    puVar6[0x12] = 0x3f800000;
  }
  fStack_dc = fStack_a8;
  fStack_d8 = local_a4;
  fStack_d4 = local_a0;
  fStack_b8 = fStack_9c;
  fStack_b4 = fStack_98;
  fStack_b0 = fStack_94;
  fStack_d0 = fStack_78;
  fStack_cc = fStack_74;
  fStack_c8 = fStack_70;
  fStack_c4 = fStack_6c;
  fStack_c0 = fStack_68;
  fStack_bc = fStack_64;
  fStack_f4 = fStack_90;
  fStack_f0 = fStack_8c;
  fStack_ec = fStack_88;
  fStack_e8 = fStack_84;
  fStack_e4 = fStack_80;
  fStack_e0 = fStack_7c;
  if (iVar3 == 1) {
    FUN_00ad8ea0(&fStack_dc,3);
  }
  FUN_00b18c30(&fStack_dc,1);
  if (iVar3 == 1) {
    FUN_00ad8ea0(&fStack_b8,3);
  }
  FUN_00b18c30(&fStack_b8,1);
  if (iVar3 == 1) {
    FUN_00ad8ea0(&fStack_f4,3);
  }
  FUN_00b18bf0(&fStack_f4,1);
  if (iVar3 == 1) {
    FUN_00ad8ea0(&fStack_e8,3);
  }
  FUN_00b18bf0(&fStack_e8,1);
  if (iVar3 == 1) {
    FUN_00ad8ea0(&fStack_d0,3);
  }
  FUN_00b18bf0(&fStack_d0,1);
  if (iVar3 == 1) {
    FUN_00ad8ea0(&fStack_c4,3);
  }
  FUN_00b18bf0(&fStack_c4,1);
  puVar6[1] = fStack_dc;
  puVar6[2] = fStack_d8;
  puVar6[3] = fStack_d4;
  puVar6[4] = fStack_b8;
  puVar6[5] = fStack_b4;
  puVar6[6] = fStack_b0;
  puVar6[7] = fStack_f4;
  puVar6[8] = fStack_f0;
  puVar6[9] = fStack_ec;
  puVar6[10] = fStack_e8;
  puVar6[0xb] = fStack_e4;
  puVar6[0xc] = fStack_e0;
  puVar6[0xd] = fStack_d0;
  puVar6[0xe] = fStack_cc;
  puVar6[0xf] = fStack_c8;
  puVar6[0x10] = fStack_c4;
  puVar6[0x11] = fStack_c0;
  puVar6[0x12] = fStack_bc;
  if (cStack_60 == '\0') {
    *(ushort *)(puVar6 + 0x13) = *(ushort *)(puVar6 + 0x13) & 0xfffe;
  }
  else {
    *(ushort *)(puVar6 + 0x13) = *(ushort *)(puVar6 + 0x13) | 1;
  }
  if (cStack_5f == '\0') {
    *(ushort *)(puVar6 + 0x13) = *(ushort *)(puVar6 + 0x13) & 0xfffd;
  }
  else {
    *(ushort *)(puVar6 + 0x13) = *(ushort *)(puVar6 + 0x13) | 2;
  }
  if (cStack_5e == '\0') {
    *(ushort *)(puVar6 + 0x13) = *(ushort *)(puVar6 + 0x13) & 0xfffb;
  }
  else {
    *(ushort *)(puVar6 + 0x13) = *(ushort *)(puVar6 + 0x13) | 4;
  }
  if (cStack_5d == '\0') {
    *(ushort *)(puVar6 + 0x13) = *(ushort *)(puVar6 + 0x13) & 0xfff7;
  }
  else {
    *(ushort *)(puVar6 + 0x13) = *(ushort *)(puVar6 + 0x13) | 8;
  }
  if (cStack_5c == '\0') {
    *(ushort *)(puVar6 + 0x13) = *(ushort *)(puVar6 + 0x13) & 0xffef;
  }
  else {
    *(ushort *)(puVar6 + 0x13) = *(ushort *)(puVar6 + 0x13) | 0x10;
  }
  if (cStack_5b == '\0') {
    *(ushort *)(puVar6 + 0x13) = *(ushort *)(puVar6 + 0x13) & 0xffdf;
  }
  else {
    *(ushort *)(puVar6 + 0x13) = *(ushort *)(puVar6 + 0x13) | 0x20;
  }
  if (cStack_5a == '\0') {
    *(ushort *)(puVar6 + 0x13) = *(ushort *)(puVar6 + 0x13) & 0xffbf;
  }
  else {
    *(ushort *)(puVar6 + 0x13) = *(ushort *)(puVar6 + 0x13) | 0x40;
  }
  if (cStack_59 == '\0') {
    *(ushort *)(puVar6 + 0x13) = *(ushort *)(puVar6 + 0x13) & 0xff7f;
  }
  else {
    *(ushort *)(puVar6 + 0x13) = *(ushort *)(puVar6 + 0x13) | 0x80;
  }
  if (cStack_58 == '\0') {
    *(ushort *)(puVar6 + 0x13) = *(ushort *)(puVar6 + 0x13) & 0xfeff;
  }
  else {
    *(ushort *)(puVar6 + 0x13) = *(ushort *)(puVar6 + 0x13) | 0x100;
  }
  uVar7 = *(int *)(iVar2 + 0x30) + 1;
  *(uint *)(iVar2 + 0x30) = uVar7;
  if (*(uint *)(iVar2 + 0x34) < uVar7) {
    FUN_00aeb6c0();
  }
  puVar1 = (undefined4 *)(*(int *)(iVar2 + 0x2c) + -4 + *(int *)(iVar2 + 0x30) * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = puVar6;
  }
  if (*(char *)(iStack_ac + 0xc) != '\0') {
    puVar6 = (undefined4 *)FUN_00b15770();
    puVar8 = (undefined1 *)*puVar6;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &DAT_00ded94d;
    }
    FUN_00b15e80("- Limits for node \'%s\'",puVar8);
    FUN_00b15e80("    + TranslateMin = %.3f, %.3f, %.3f",(double)fStack_dc,(double)fStack_d8,
                 (double)fStack_d4);
    FUN_00b15e80("    + TranslateMax = %.3f, %.3f, %.3f",(double)fStack_b8,(double)fStack_b4,
                 (double)fStack_b0);
    FUN_00b15e80("    + RotateMin    = %.3f, %.3f, %.3f",(double)fStack_f4,(double)fStack_f0,
                 (double)fStack_ec);
    FUN_00b15e80("    + RotateMax    = %.3f, %.3f, %.3f",(double)fStack_e8,(double)fStack_e4,
                 (double)fStack_e0);
    FUN_00b15e80("    + ScaleMin     = %.3f, %.3f, %.3f",(double)fStack_d0,(double)fStack_cc,
                 (double)fStack_c8);
    FUN_00b15e80("    + ScaleMax     = %.3f, %.3f, %.3f",(double)fStack_c4,(double)fStack_c0,
                 (double)fStack_bc);
    FUN_00b15e80("    + LimitFlags   = POS[%d, %d, %d], ROT[%d, %d, %d], SCALE[%d, %d, %d]",
                 cStack_60,cStack_5f,cStack_5e,cStack_5d,cStack_5c,cStack_5b,cStack_5a,cStack_59,
                 cStack_58);
  }
  __security_check_cookie(uStack_4c ^ (uint)&stack0xffffff04);
  return;
}

