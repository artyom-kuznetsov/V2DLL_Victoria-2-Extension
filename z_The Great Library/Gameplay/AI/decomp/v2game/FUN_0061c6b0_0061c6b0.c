// FUN_0061c6b0 @ 0061c6b0 body=[[0061c6b0, 0061c78d]]


void FUN_0061c6b0(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int in_ECX;
  void *unaff_EDI;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b45898;
  pvStack_14 = ExceptionList;
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
  ExceptionList = &pvStack_14;
  piVar2 = (int *)FUN_0090e850(0x8dd);
  local_c = 0;
  (**(code **)(*piVar2 + 0x4c))(*(undefined4 *)(iVar1 + 0x1c),*(undefined4 *)(iVar1 + 0x20));
  (**(code **)(*piVar2 + 0x48))(*(undefined4 *)(in_ECX + 0x388),*(undefined4 *)(in_ECX + 0x38c));
  piVar2[6] = *(int *)(DAT_012588e8 + 0xb0c);
  piVar3 = (int *)(**(code **)(*piVar2 + 0x38))(*(undefined4 *)(in_ECX + 0x54));
  (**(code **)(*piVar3 + 0x28))();
  FUN_006480e0(piVar3);
  (**(code **)*piVar2)(1);
  ExceptionList = unaff_EDI;
  return;
}

