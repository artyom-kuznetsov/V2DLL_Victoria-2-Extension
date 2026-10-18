// FUN_00922f70 @ 00922f70 body=[[00922f70, 009231bd] [009231c1, 009231e1] [009231e5, 00923206] [0092320a, 0092324a] [0092324e, 00923269] [0092326d, 00923292] [00923296, 009232ac]]


void FUN_00922f70(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined1 uVar5;
  char *pcVar6;
  undefined1 *puVar7;
  int in_ECX;
  int iVar8;
  undefined1 local_b8 [4];
  int local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  uint local_a4;
  undefined4 local_94;
  uint local_90;
  uint local_88;
  undefined4 local_78;
  uint local_74;
  uint local_6c;
  undefined4 local_5c;
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34;
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  iVar4 = DAT_012587e4;
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b6525c;
  local_14 = ExceptionList;
  iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0xc) * 4) +
                           0xbe8) + *(int *)(in_ECX + 0x14) * 4);
  iVar8 = 1;
  if (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar2 + 0xc) * 4) + 0x31) == '\0') {
    iVar8 = *(int *)(iVar2 + 0x40);
  }
  iVar8 = iVar8 + 1;
  ExceptionList = &local_14;
  if (iVar8 != *(int *)(iVar2 + 0x40)) {
    ExceptionList = &local_14;
    *(undefined4 *)(iVar2 + 0x44) = *(undefined4 *)(DAT_012588e8 + 0xb0c);
  }
  *(int *)(iVar2 + 0x40) = iVar8;
  if (*(char *)(*(int *)(*(int *)(iVar4 + 4) + *(int *)(iVar2 + 0xc) * 4) + 0x31) != '\0') {
    iVar8 = 1;
  }
  pcVar3 = (&PTR_s_REL_HOSTILE_00f09158)[iVar8];
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  pcVar6 = pcVar3;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar3,(int)pcVar6 - (int)(pcVar3 + 1));
  local_c = 0;
  local_90 = 0xf;
  local_94 = 0;
  local_a4 = local_a4 & 0xffffff00;
  FUN_00409350("OPINION",7);
  local_c._0_1_ = 1;
  FUN_009a8ee0(local_b8,local_50);
  local_c._0_1_ = 2;
  iVar8 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c),*(undefined8 *)(iVar8 + 0x74));
  local_c._0_1_ = 3;
  local_74 = 0xf;
  local_78 = 0;
  local_88 = local_88 & 0xffffff00;
  FUN_00408ed0();
  local_c._0_1_ = 4;
  local_58 = 0xf;
  local_5c = 0;
  local_6c = local_6c & 0xffffff00;
  FUN_00408ed0();
  local_c._0_1_ = 5;
  iVar8 = param_1[1];
  puVar7 = (undefined1 *)FUN_00aae9af();
  local_c._0_1_ = 6;
  uVar5 = (undefined1)local_c;
  local_c._0_1_ = 6;
  if (puVar7 == (undefined1 *)0x0) {
    puVar7 = (undefined1 *)0x0;
    local_c._0_1_ = uVar5;
  }
  else {
    *(undefined4 *)(puVar7 + 0x14) = 0xf;
    *(undefined4 *)(puVar7 + 0x10) = 0;
    *puVar7 = 0;
    FUN_00408ed0();
    local_c._0_1_ = 7;
    *(undefined4 *)(puVar7 + 0x30) = 0xf;
    *(undefined4 *)(puVar7 + 0x2c) = 0;
    puVar7[0x1c] = 0;
    FUN_00408ed0();
    *(int *)(puVar7 + 0x38) = iVar8;
    *(undefined4 *)(puVar7 + 0x3c) = 0;
    puVar7[0x40] = 0;
  }
  iVar2 = param_1[2];
  param_1[1] = puVar7;
  param_1[2] = iVar2 + 1;
  if (iVar2 == 0) {
    *param_1 = puVar7;
  }
  else {
    *(undefined1 **)(iVar8 + 0x3c) = puVar7;
  }
  if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_58 = 0xf;
  local_5c = 0;
  local_6c = local_6c & 0xffffff00;
  if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_74 = 0xf;
  local_78 = 0;
  local_88 = local_88 & 0xffffff00;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  local_c = CONCAT31(local_c._1_3_,8);
  FUN_009adb70();
  if (local_b4 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_b4 = 0;
  local_b0 = 0;
  local_ac = 0;
  if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_90 = 0xf;
  local_94 = 0;
  local_a4 = local_a4 & 0xffffff00;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_14;
  return;
}

