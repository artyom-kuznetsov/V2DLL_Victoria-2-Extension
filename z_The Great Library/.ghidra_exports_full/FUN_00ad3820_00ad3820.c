// FUN_00ad3820 @ 00ad3820 body=[[00ad3820, 00ad3a63]]


undefined4 FUN_00ad3820(void)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00b36e08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00f209e0 == 0) {
    iVar1 = (*(code *)PTR_FUN_00f01b08)
                      (0x48,0x25e,4,0,0,0xffffffff,DAT_00ef259c ^ (uint)&stack0xffffffec);
    uStack_4 = 0;
    if (iVar1 == 0) {
      DAT_00f209e0 = 0;
    }
    else {
      DAT_00f209e0 = FUN_00ad34c0();
    }
    uStack_4 = 0xffffffff;
    iVar1 = (*(code *)PTR_FUN_00f01b08)(0x38,600,4,0,0,0xffffffff);
    uStack_4 = 1;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00adb7e0();
    }
    uStack_4 = 0xffffffff;
    *(undefined4 *)(DAT_00f209e0 + 0x2c) = uVar2;
    iVar1 = (*(code *)PTR_FUN_00f01b08)(0x38,0x25b,4,0,0,0xffffffff);
    uStack_4 = 2;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00ad3f30();
    }
    uStack_4 = 0xffffffff;
    *(undefined4 *)(DAT_00f209e0 + 0x30) = uVar2;
    iVar1 = (*(code *)PTR_FUN_00f01b08)(0x20,0x138,4,0,0,0xffffffff);
    uStack_4 = 3;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00ae3730();
    }
    uStack_4 = 0xffffffff;
    *(undefined4 *)(DAT_00f209e0 + 0x34) = uVar2;
    iVar1 = (*(code *)PTR_FUN_00f01b08)(0x20,0x25a,4,0,0,0xffffffff);
    uStack_4 = 4;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00ae4060();
    }
    uStack_4 = 0xffffffff;
    *(undefined4 *)(DAT_00f209e0 + 0x38) = uVar2;
    iVar1 = (*(code *)PTR_FUN_00f01b08)(0x14,0x134,4,0,0,0xffffffff);
    uStack_4 = 5;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00ae6c70();
    }
    uStack_4 = 0xffffffff;
    *(undefined4 *)(DAT_00f209e0 + 0x3c) = uVar2;
    iVar1 = (*(code *)PTR_FUN_00f01b08)(1,0xcb,4,0,0,0xffffffff);
    uStack_4 = 6;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00ae86c0();
    }
    uStack_4 = 0xffffffff;
    *(undefined4 *)(DAT_00f209e0 + 0x40) = uVar2;
    iVar1 = (*(code *)PTR_FUN_00f01b08)(0x54,0x23f,4,0,0,0xffffffff);
    uStack_4 = 7;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00ae7e70();
    }
    *(undefined4 *)(DAT_00f209e0 + 0x44) = uVar2;
    uStack_4 = 0xffffffff;
    FUN_00ad36e0();
  }
  ExceptionList = local_c;
  return 1;
}

