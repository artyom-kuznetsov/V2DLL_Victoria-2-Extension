// FUN_00624d40 @ 00624d40 body=[[00624d40, 00624e53]]


void FUN_00624d40(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  int in_ECX;
  void *unaff_EBX;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b45838;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  iVar2 = (**(code **)(*param_1 + 0x80))();
  piVar3 = (int *)FUN_0090e850(0xa02);
  uStack_c = 0;
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
  (**(code **)(*piVar3 + 0x4c))(*(undefined4 *)(iVar1 + 0x1c),*(undefined4 *)(iVar1 + 0x20));
  iVar1 = *piVar3;
  if (iVar2 == 1) {
    puVar4 = (undefined4 *)FUN_00425ac0();
  }
  else {
    puVar4 = (undefined4 *)FUN_00425a40();
  }
  (**(code **)(iVar1 + 0x48))(*puVar4,puVar4[1]);
  piVar3[6] = *(int *)(DAT_012588e8 + 0xb0c);
  piVar5 = (int *)(**(code **)(*piVar3 + 0x38))(*(undefined4 *)(in_ECX + 0x54));
  (**(code **)(*piVar5 + 0x28))();
  FUN_006480e0(piVar5);
  (**(code **)*piVar3)(1);
  ExceptionList = unaff_EBX;
  return;
}

