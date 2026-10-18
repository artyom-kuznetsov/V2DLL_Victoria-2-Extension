// FUN_005b8030 @ 005b8030 body=[[005b8030, 005b823e] [005b8242, 005b82ba]]


void FUN_005b8030(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_EDI;
  float fVar6;
  undefined8 in_XMM0_Qa;
  int local_38;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  iVar2 = DAT_01258828;
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5f6cb;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_01258828 == 0) {
    ExceptionList = &local_14;
    iVar3 = FUN_00aae9af();
    local_c = iVar2;
    if (iVar3 == 0) {
      DAT_01258828 = 0;
    }
    else {
      DAT_01258828 = FUN_004dada0();
    }
  }
  iVar2 = DAT_01258828;
  local_c = 0xffffffff;
  iVar3 = *(int *)(DAT_01258828 + 0x20) - *(int *)(DAT_01258828 + 0x1c) >> 2;
  if (1 < iVar3) {
    local_38 = 1000;
    iVar4 = FUN_009b7950(0);
    iVar1 = *(int *)(unaff_EDI + 0xb0);
    *(undefined4 *)(unaff_EDI + 0x80) =
         *(undefined4 *)(*(int *)(iVar2 + 0x1c) + 4 + (iVar4 % (iVar3 + -1)) * 4);
    for (; ((iVar1 != 0 && (*(int *)(*(int *)(*(int *)(unaff_EDI + 0x80) + 0x18) + 0x48) != 0)) &&
           (0 < local_38)); local_38 = local_38 + -1) {
      iVar3 = *(int *)(iVar2 + 0x20);
      iVar1 = *(int *)(iVar2 + 0x1c);
      iVar4 = FUN_009b7950(0);
      *(undefined4 *)(unaff_EDI + 0x80) =
           *(undefined4 *)(*(int *)(iVar2 + 0x1c) + 4 + (iVar4 % ((iVar3 - iVar1 >> 2) + -1)) * 4);
      iVar1 = *(int *)(unaff_EDI + 0xb0);
    }
  }
  fVar6 = (float)in_XMM0_Qa;
  iVar3 = *(int *)(iVar2 + 0x10) - *(int *)(iVar2 + 0xc) >> 2;
  if (1 < iVar3) {
    local_38 = 1000;
    iVar4 = FUN_009b7950(0);
    fVar6 = (float)in_XMM0_Qa;
    iVar1 = *(int *)(unaff_EDI + 0xb0);
    *(undefined4 *)(unaff_EDI + 0x7c) =
         *(undefined4 *)(*(int *)(iVar2 + 0xc) + 4 + (iVar4 % (iVar3 + -1)) * 4);
    for (; ((iVar1 != 0 &&
            (fVar6 = (float)in_XMM0_Qa,
            *(int *)(*(int *)(*(int *)(unaff_EDI + 0x7c) + 0x18) + 0x48) != 0)) && (0 < local_38));
        local_38 = local_38 + -1) {
      iVar3 = *(int *)(iVar2 + 0x10);
      iVar1 = *(int *)(iVar2 + 0xc);
      iVar4 = FUN_009b7950(0);
      fVar6 = (float)in_XMM0_Qa;
      *(undefined4 *)(unaff_EDI + 0x7c) =
           *(undefined4 *)(*(int *)(iVar2 + 0xc) + 4 + (iVar4 % ((iVar3 - iVar1 >> 2) + -1)) * 4);
      iVar1 = *(int *)(unaff_EDI + 0xb0);
    }
  }
  *(undefined4 *)(unaff_EDI + 0x84) = *(undefined4 *)(DAT_012588e8 + 0xb0c);
  if (*(int *)(unaff_EDI + 0xb0) == 0) {
    uVar5 = FUN_0055fd70();
    local_c = 1;
    FUN_00408ed0(uVar5,0);
  }
  else {
    uVar5 = FUN_0055fbd0();
    local_c = 2;
    FUN_00408ed0(uVar5,0);
  }
  if (0xf < local_20) {
    local_c = 0xffffffff;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_c = 0xffffffff;
  FUN_005b5ef0();
  if (0 < *(int *)(*(int *)(DAT_012586dc + 0x20) + 0x44)) {
    FUN_009b7d80();
    FUN_00401000((fVar6 + 0.0005) * 1000.0);
    FUN_00b31c00();
    FUN_005b66b0();
  }
  ExceptionList = local_14;
  return;
}

