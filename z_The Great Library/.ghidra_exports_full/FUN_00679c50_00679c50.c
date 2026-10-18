// FUN_00679c50 @ 00679c50 body=[[00679c50, 00679d25]]


void FUN_00679c50(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EDI;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_8;
  
  iVar1 = *(int *)(unaff_EDI + 0x104);
  *(undefined1 *)(unaff_EDI + 0x146) = 1;
  if (iVar1 != 0) {
    uVar4 = 1;
    uVar3 = 1;
    FUN_00401000(0x3f000000);
    uVar2 = FUN_00b31c00();
    (**(code **)(*(int *)(iVar1 + 0x54) + 0x1c))(uVar2,uVar3,uVar4);
    FUN_00401000(0x41280000);
    local_8 = FUN_00b31c00();
    FUN_00401000(0x447a1fff);
    FUN_00b31c00();
    iVar1 = *(int *)(*(int *)(unaff_EDI + 0x104) + 0x54);
    FUN_0043d130(&local_8);
    (**(code **)(iVar1 + 0x14))();
  }
  return;
}

