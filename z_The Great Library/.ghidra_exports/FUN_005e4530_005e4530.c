// FUN_005e4530 @ 005e4530  (requested 005E4530, first bytes: 55 8B EC 83 E4 F8 6A FF)


void FUN_005e4530(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int *piVar4;
  int *local_90;
  uint auStack_88 [4];
  undefined4 uStack_78;
  uint uStack_74;
  uint auStack_6c [4];
  undefined4 uStack_5c;
  uint uStack_58;
  uint uStack_50;
  undefined4 uStack_40;
  uint uStack_3c;
  uint auStack_34 [4];
  undefined4 uStack_24;
  uint uStack_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b45990;
  pvStack_14 = ExceptionList;
  iVar2 = DAT_01258a94;
  if (*(uint *)(in_ECX + 0x40) < 0x1269) {
    iVar2 = DAT_01258a98;
  }
  ExceptionList = &pvStack_14;
  if (iVar2 == 0) {
LAB_005e458f:
    piVar4 = (int *)0x0;
  }
  else {
    ExceptionList = &pvStack_14;
    iVar2 = FUN_009c1d40();
    if (iVar2 == 0) goto LAB_005e458f;
    piVar4 = (int *)(iVar2 + -8);
  }
  iVar2 = DAT_01258a94;
  *(int **)(in_ECX + 0x3c) = piVar4;
  if (*(uint *)(in_ECX + 0x68) < 0x1269) {
    iVar2 = DAT_01258a98;
  }
  if (iVar2 != 0) {
    iVar2 = FUN_009c1d40();
    if (iVar2 != 0) {
      local_90 = (int *)(iVar2 + -8);
      goto LAB_005e45d3;
    }
  }
  local_90 = (int *)0x0;
LAB_005e45d3:
  *(int **)(in_ECX + 100) = local_90;
  cVar1 = (**(code **)(*piVar4 + 0x38))();
  if (cVar1 != '\0') {
    iVar2 = (**(code **)(*piVar4 + 0x2c))();
    if (*(int *)(iVar2 + 0x1b4) == 0) {
      iVar2 = piVar4[1];
      if ((char)iVar2 != '\0') {
        (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xa4))(1);
      }
      (**(code **)(*local_90 + 0x30))();
      FUN_005d7810();
      if ((char)iVar2 != '\0') {
        (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x88))(local_90);
      }
      if (*(char *)(DAT_012588e8 + 0xd11) != '\0') {
        uStack_58 = 0xf;
        uStack_5c = 0;
        auStack_6c[0] = auStack_6c[0] & 0xffffff00;
        FUN_00409350(&DAT_00ded94d,0);
        uStack_c = 0;
        uStack_74 = 0xf;
        uStack_78 = 0;
        auStack_88[0] = auStack_88[0] & 0xffffff00;
        FUN_00409350(&DAT_00ded94d,0);
        uStack_c._0_1_ = 1;
        piVar4 = *(int **)(DAT_012588e8 + 0xb24);
        uVar3 = FUN_009888f0(auStack_34);
        uStack_c._0_1_ = 2;
        uVar3 = FUN_00988fa0(uVar3);
        uStack_c = CONCAT31(uStack_c._1_3_,3);
        (**(code **)(*piVar4 + 0x120))(uVar3,auStack_88,auStack_6c,0);
        if (0xf < uStack_3c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(uStack_50);
        }
        uStack_3c = 0xf;
        uStack_40 = 0;
        uStack_50 = uStack_50 & 0xffffff00;
        if (0xf < uStack_20) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_34[0]);
        }
        uStack_20 = 0xf;
        uStack_24 = 0;
        auStack_34[0] = auStack_34[0] & 0xffffff00;
        if (0xf < uStack_74) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_88[0]);
        }
        uStack_74 = 0xf;
        uStack_78 = 0;
        auStack_88[0] = auStack_88[0] & 0xffffff00;
        if (0xf < uStack_58) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_6c[0]);
        }
      }
    }
  }
  ExceptionList = pvStack_14;
  return;
}

