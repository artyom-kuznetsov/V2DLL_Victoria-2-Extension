// FUN_00976670 @ 00976670 body=[[00976670, 009766a8] [009766b0, 0097679a] [0097679e, 009767e5] [009767e9, 00976802] [00976806, 00976828] [00976832, 00976862]]


void FUN_00976670(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  int *piVar5;
  int local_190;
  uint auStack_18c [4];
  undefined4 uStack_17c;
  uint uStack_178;
  undefined **appuStack_170 [2];
  int iStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  int iStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  uint uStack_140;
  undefined4 uStack_130;
  uint uStack_12c;
  int iStack_124;
  int aiStack_11c [65];
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b58271;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (DAT_0131bf90 == 0) {
    ExceptionList = &pvStack_14;
    FUN_00976610();
  }
  local_190 = 0;
  while( true ) {
    piVar4 = (int *)param_1[7];
    if ((char)piVar4[0x44] == '\0') {
      iVar2 = (**(code **)(*piVar4 + 4))();
      piVar4[2] = iVar2;
      if (iVar2 == 0) {
        piVar4[3] = 0x13;
      }
      *(undefined1 *)(piVar4 + 0x44) = 1;
    }
    piVar4 = piVar4 + 3;
    piVar5 = aiStack_11c;
    for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar5 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    }
    if (aiStack_11c[0] == 0x13) {
      (**(code **)*param_1)(1);
      ExceptionList = pvStack_18;
      return;
    }
    FUN_009a1440(param_1);
    uStack_178 = 0xf;
    uStack_17c = 0;
    auStack_18c[0] = auStack_18c[0] & 0xffffff00;
    pcVar3 = (char *)(param_1 + 9);
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(param_1 + 9,(int)pcVar3 - ((int)param_1 + 0x25));
    uStack_c = 0;
    FUN_0044bc60(appuStack_170);
    uStack_c._0_1_ = 1;
    appuStack_170[0] = CNationalValue::vftable;
    uStack_12c = 0xf;
    uStack_130 = 0;
    uStack_140 = uStack_140 & 0xffffff00;
    FUN_00408ed0(auStack_18c,0,0xffffffff);
    iStack_124 = local_190;
    uStack_c = CONCAT31(uStack_c._1_3_,3);
    if (0xf < uStack_178) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_18c[0]);
    }
    uStack_178 = 0xf;
    uStack_17c = 0;
    auStack_18c[0] = auStack_18c[0] & 0xffffff00;
    FUN_009a2a90(param_1);
    FUN_00976990();
    local_190 = local_190 + 1;
    uStack_c = 0xffffffff;
    if (0xf < uStack_12c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_140);
    }
    uStack_12c = 0xf;
    uStack_130 = 0;
    uStack_140 = uStack_140 & 0xffffff00;
    if (iStack_158 != 0) break;
    iStack_158 = 0;
    uStack_154 = 0;
    uStack_150 = 0;
    if (iStack_168 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iStack_168);
    }
    iStack_168 = 0;
    uStack_164 = 0;
    uStack_160 = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(iStack_158);
}

