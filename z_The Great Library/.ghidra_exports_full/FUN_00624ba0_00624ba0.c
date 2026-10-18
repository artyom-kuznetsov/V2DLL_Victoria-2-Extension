// FUN_00624ba0 @ 00624ba0 body=[[00624ba0, 00624c9d]]


void FUN_00624ba0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int in_ECX;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b45838;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  iVar2 = (**(code **)(*param_1 + 0x80))();
  iVar2 = *(int *)(*(int *)(DAT_012588e8 + 0xadc) + iVar2 * 4);
  if (*(int *)(iVar2 + 0x20) != 0) {
    piVar3 = (int *)FUN_0090e850(0x9fa);
    uStack_c = 0;
    iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
    (**(code **)(*piVar3 + 0x4c))(*(undefined4 *)(iVar1 + 0x1c),*(undefined4 *)(iVar1 + 0x20));
    (**(code **)(*piVar3 + 0x48))(*(undefined4 *)(iVar2 + 0x1c),*(undefined4 *)(iVar2 + 0x20));
    piVar3[6] = *(int *)(DAT_012588e8 + 0xb0c);
    piVar4 = (int *)(**(code **)(*piVar3 + 0x38))(*(undefined4 *)(in_ECX + 0x54));
    (**(code **)(*piVar4 + 0x28))();
    FUN_006480e0(piVar4);
    (**(code **)*piVar3)(1);
  }
  ExceptionList = pvStack_14;
  return;
}

