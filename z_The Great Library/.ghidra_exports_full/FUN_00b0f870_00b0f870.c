// FUN_00b0f870 @ 00b0f870 body=[[00b0f870, 00b0f8ac] [00b0f8b0, 00b0f91b]]


void FUN_00b0f870(void)

{
  uint uVar1;
  int in_ECX;
  uint uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00b397ac;
  local_c = ExceptionList;
  uVar1 = DAT_00ef259c ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  uVar2 = 0;
  local_4 = 0;
  if (*(int *)(in_ECX + 0x18) != 0) {
    do {
      FUN_00b131d0(uVar1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(in_ECX + 0x18));
  }
  if (*(int *)(in_ECX + 0x14) != 0) {
    (*(code *)PTR__free_00f01b10)(*(int *)(in_ECX + 0x14));
  }
  uVar1 = 0;
  local_4 = 0xffffffff;
  if (*(int *)(in_ECX + 8) != 0) {
    do {
      FUN_00b13650();
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(in_ECX + 8));
  }
  if (*(int *)(in_ECX + 4) != 0) {
    (*(code *)PTR__free_00f01b10)(*(int *)(in_ECX + 4));
  }
  ExceptionList = local_c;
  return;
}

