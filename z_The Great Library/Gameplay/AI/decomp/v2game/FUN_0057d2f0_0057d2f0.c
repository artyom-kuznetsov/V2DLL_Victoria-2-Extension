// FUN_0057d2f0 @ 0057d2f0 body=[[0057d2f0, 0057d5d1] [0057d5d5, 0057d5e9]]


void FUN_0057d2f0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  int in_ECX;
  undefined1 auStack_74 [72];
  int iStack_2c;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00ba69ce;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  iVar5 = FUN_00aae9af();
  if (iVar5 == 0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)FUN_00491620();
  }
  (**(code **)(*piVar6 + 0x18))();
  iVar5 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(in_ECX + 0x44) * 4);
  iVar1 = *(int *)(in_ECX + 0x54);
  iVar2 = *(int *)(in_ECX + 0x58);
  iVar3 = *(int *)(in_ECX + 0x5c);
  piVar6[0x16] = *(int *)(in_ECX + 0x50);
  piVar6[0x17] = iVar1;
  piVar6[0x18] = iVar2;
  piVar6[0x19] = iVar3;
  piVar6[0x13] = *(int *)(in_ECX + 0x3c);
  piVar6[0x14] = *(int *)(in_ECX + 0x40);
  piVar6[0x22] = *(int *)(in_ECX + 0x60);
  pcVar4 = *(code **)(*piVar6 + 0x20);
  piVar6[0x12] = iVar5;
  (*pcVar4)();
  FUN_004b5f60();
  iVar5 = *(int *)(in_ECX + 100);
  if (iVar5 != 0) {
    iVar1 = *(int *)(iVar5 + 0xc);
    piVar6[0x24] = *(int *)(iVar5 + 8);
    piVar6[0x25] = iVar1;
  }
  FUN_00514310();
  FUN_004911a0();
  FUN_0047db00();
  puStack_10 = (undefined1 *)0x5;
  FUN_0047de60(auStack_74);
  puVar7 = (undefined4 *)FUN_00aae9af();
  puStack_10._0_1_ = 6;
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7[1] = 0x18d;
    *puVar7 = CGoodsProject::vftable;
    FUN_0047db00();
    puStack_10._0_1_ = 7;
    FUN_0047db00();
    puVar7[0x2e] = 0;
    puVar7[0x2f] = 0;
  }
  puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,5);
  piVar6[0x15] = (int)puVar7;
  FUN_004b8720();
  *(undefined1 *)(DAT_012588dc + 0x3a28) = 1;
  FUN_0051f990();
  if (*(int *)(in_ECX + 0x40) == *(int *)(DAT_012588e8 + 0xb60)) {
    piVar6 = *(int **)(DAT_012588e8 + 0xb24);
    iVar5 = (**(code **)(*piVar6 + 0x13c))();
    if (iVar5 == 8) {
      (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xdc))();
    }
    (**(code **)(*piVar6 + 0xe0))();
    iVar5 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x124))();
    if (iVar5 != 0) {
      iVar5 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x124))();
      if (*(char *)(*(int *)(iVar5 + 0x20) + 0x67) != '\0') {
        (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x124))();
        FUN_00740050();
      }
    }
    FUN_00679970();
  }
  if (iStack_2c != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = pvStack_18;
  return;
}

