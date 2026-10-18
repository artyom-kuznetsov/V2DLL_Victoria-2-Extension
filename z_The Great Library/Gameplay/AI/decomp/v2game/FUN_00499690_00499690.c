// FUN_00499690 @ 00499690 body=[[00499690, 0049979c]]


void FUN_00499690(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b5b506;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (*(undefined4 **)(param_1 + 0x2134) != (undefined4 *)0x0) {
    ExceptionList = &pvStack_14;
    (**(code **)**(undefined4 **)(param_1 + 0x2134))();
  }
  iVar1 = FUN_00aae9af();
  uStack_c = 0;
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00409350(&DAT_00ded94d,0);
    puVar2 = (undefined4 *)FUN_00992740(iVar1,param_1 + 0x20f4,0);
  }
  uStack_c = 0xffffffff;
  PHYSFS_setBuffer();
  puVar3 = (undefined4 *)FUN_00aae9af();
  uStack_c = 1;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = &PTR_FUN_00e3ba2c;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[6] = 0;
    puVar3[8] = 0;
    *(undefined1 *)(puVar3 + 9) = 0;
    FUN_009d9790();
  }
  uStack_c = 0xffffffff;
  *(undefined4 **)(param_1 + 0x2134) = puVar3;
  (**(code **)*puVar2)();
  ExceptionList = pvStack_18;
  return;
}

