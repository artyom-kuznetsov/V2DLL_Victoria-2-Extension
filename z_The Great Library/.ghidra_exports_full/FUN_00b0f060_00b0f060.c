// FUN_00b0f060 @ 00b0f060 body=[[00b0f060, 00b0f295]]


undefined4 FUN_00b0f060(int *param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  int unaff_EBP;
  undefined4 unaff_EDI;
  float10 fVar6;
  char *pcVar7;
  undefined4 uStack_18;
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_00b39716;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = (int *)*param_1;
  piVar2 = (int *)param_1[1];
  if ((piVar1 == (int *)0x0) || (piVar2 == (int *)0x0)) {
    pcVar7 = "Cannot perform encryption pass. In/out file is invalid.";
LAB_00b0f276:
    FUN_00b15d30(pcVar7);
    ExceptionList = local_c;
    return 0;
  }
  cVar3 = (**(code **)(*piVar1 + 0x88))(DAT_00ef259c ^ (uint)&stack0xffffff7c);
  if (cVar3 == '\0') {
    pcVar7 = "Memory file not opened.";
    goto LAB_00b0f276;
  }
  uVar4 = (**(code **)(*piVar1 + 0x78))();
  uVar5 = (*(code *)PTR_FUN_00f01b08)(uVar4,0x25f,0x10,0,0,0);
  (**(code **)(*piVar1 + 0x84))(0);
  (**(code **)(*piVar1 + 8))(uVar5,uVar4);
  puStack_8 = (undefined1 *)0x0;
  if (iStack_4 == 0) {
    FUN_00b1da80();
    cVar3 = (**(code **)(*(int *)(unaff_EBP + 4) + 8))(uVar5,uVar4,&puStack_8,&stack0xffffff80);
    if (cVar3 == '\0') {
      (*(code *)PTR__free_00f01b10)();
      iStack_4 = 0xffffffff;
      FUN_00b1da10();
      ExceptionList = local_c;
      return 0;
    }
    fVar6 = (float10)FUN_00b1da40();
    FUN_00b15e10("Decrypted %ikB of data using AES in %.2f seconds.",uVar4 >> 10,(double)fVar6);
  }
  else {
    if (iStack_4 != 1) goto LAB_00b0f222;
    FUN_00b1da80();
    cVar3 = (**(code **)(*(int *)(unaff_EBP + 4) + 4))(uVar5,uVar4,&puStack_8,&stack0xffffff80);
    if (cVar3 == '\0') {
      (*(code *)PTR__free_00f01b10)();
      iStack_4 = 0xffffffff;
      FUN_00b1da10();
      ExceptionList = local_c;
      return 0;
    }
    fVar6 = (float10)FUN_00b1da40();
    FUN_00b15e10("Encrypted %ikB of data using AES in %.2f seconds.",uVar4 >> 10,(double)fVar6);
  }
  FUN_00b1da10();
LAB_00b0f222:
  (**(code **)(*piVar2 + 0x84))();
  (**(code **)(*piVar2 + 0xc))(local_c,unaff_EDI);
  (**(code **)(*piVar2 + 0x84))(0);
  (*(code *)PTR__free_00f01b10)(uVar5);
  (*(code *)PTR__free_00f01b10)(uStack_18);
  ExceptionList = local_c;
  return 1;
}

