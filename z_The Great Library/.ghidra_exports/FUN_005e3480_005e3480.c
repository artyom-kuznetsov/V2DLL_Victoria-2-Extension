// FUN_005e3480 @ 005e3480  (requested 005E3480, first bytes: 55 8B EC 83 E4 F8 64 A1)


void FUN_005e3480(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int in_ECX;
  char *pcVar6;
  int *piStack_ac;
  uint auStack_a8 [4];
  undefined4 uStack_98;
  uint uStack_94;
  uint auStack_8c [4];
  undefined4 uStack_7c;
  uint uStack_78;
  uint auStack_70 [4];
  undefined4 uStack_60;
  uint uStack_5c;
  uint uStack_54;
  undefined4 uStack_44;
  uint uStack_40;
  char acStack_38 [36];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b93211;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  iVar3 = FUN_009c16d0(*(undefined4 *)(in_ECX + 0x40),*(undefined4 *)(in_ECX + 0x44));
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar3 + -8;
  }
  cVar1 = *(char *)(iVar3 + 4);
  if (cVar1 != '\0') {
    (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xa4))(1);
  }
  iVar3 = FUN_009c16d0(*(undefined4 *)(in_ECX + 0x40),*(undefined4 *)(in_ECX + 0x44));
  if (iVar3 == 0) {
    piStack_ac = (int *)0x0;
  }
  else {
    piStack_ac = (int *)(iVar3 + -8);
  }
  iVar3 = DAT_01258a94;
  if (*(uint *)(in_ECX + 0x40) < 0x1269) {
    iVar3 = DAT_01258a98;
  }
  if (iVar3 == 0) {
LAB_005e354d:
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_009c1d40();
    if (iVar3 == 0) goto LAB_005e354d;
    iVar3 = iVar3 + -8;
  }
  *(int *)(in_ECX + 0x3c) = iVar3;
  iVar3 = (**(code **)(*piStack_ac + 0x2c))();
  FUN_005d78d0(*(undefined4 *)(iVar3 + 0x1b4));
  if (cVar1 == '\0') goto LAB_005e35c4;
  piVar2 = *(int **)(DAT_012588e8 + 0xb24);
  iVar3 = DAT_01258a94;
  if (*(uint *)(in_ECX + 0x40) < 0x1269) {
    iVar3 = DAT_01258a98;
  }
  if (iVar3 == 0) {
LAB_005e35b2:
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_009c1d40();
    if (iVar3 == 0) goto LAB_005e35b2;
    iVar3 = iVar3 + -8;
  }
  *(int *)(in_ECX + 0x3c) = iVar3;
  (**(code **)(*piVar2 + 0x88))(iVar3);
LAB_005e35c4:
  if (*(char *)(DAT_012588e8 + 0xd11) != '\0') {
    uStack_5c = 0xf;
    uStack_60 = 0;
    auStack_70[0] = auStack_70[0] & 0xffffff00;
    FUN_00409350(&DAT_00ded94d,0);
    uStack_c = 0;
    uStack_78 = 0xf;
    uStack_7c = 0;
    auStack_8c[0] = auStack_8c[0] & 0xffffff00;
    FUN_00409350(&DAT_00ded94d,0);
    piVar2 = *(int **)(DAT_012588e8 + 0xb24);
    iVar3 = FUN_009c16d0(*(undefined4 *)(in_ECX + 0x40),*(undefined4 *)(in_ECX + 0x44));
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = iVar3 + -8;
    }
    uStack_94 = 0xf;
    uStack_98 = 0;
    auStack_a8[0] = auStack_a8[0] & 0xffffff00;
    uStack_c._0_1_ = 2;
    pcVar4 = __itoa(*(int *)(*(int *)(iVar3 + 0xdc) + 0x58),acStack_38,10);
    pcVar6 = pcVar4;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcVar4,(int)pcVar6 - (int)(pcVar4 + 1));
    uStack_c._0_1_ = 3;
    uVar5 = FUN_00988fa0(auStack_a8);
    uStack_c = CONCAT31(uStack_c._1_3_,4);
    (**(code **)(*piVar2 + 0x120))(uVar5,auStack_8c,auStack_70,0);
    if (0xf < uStack_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_54);
    }
    uStack_40 = 0xf;
    uStack_44 = 0;
    uStack_54 = uStack_54 & 0xffffff00;
    if (0xf < uStack_94) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_a8[0]);
    }
    uStack_94 = 0xf;
    uStack_98 = 0;
    auStack_a8[0] = auStack_a8[0] & 0xffffff00;
    if (0xf < uStack_78) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_8c[0]);
    }
    uStack_78 = 0xf;
    uStack_7c = 0;
    auStack_8c[0] = auStack_8c[0] & 0xffffff00;
    if (0xf < uStack_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_70[0]);
    }
  }
  ExceptionList = pvStack_14;
  return;
}

