// FUN_00b10590 @ 00b10590 body=[[00b10590, 00b10630]]


void FUN_00b10590(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *in_ECX;
  uint uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00b39878;
  local_c = ExceptionList;
  uVar3 = DAT_00ef259c ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  uVar1 = in_ECX[1];
  uVar4 = 0;
  local_4 = 0;
  if (uVar1 != 0) {
    do {
      iVar2 = *(int *)(*in_ECX + uVar4 * 4);
      if (iVar2 != 0) {
        FUN_00b0f870(uVar3);
        (*(code *)PTR__free_00f01b10)(iVar2);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  if (*in_ECX != 0) {
    (*(code *)PTR__free_00f01b10)(*in_ECX);
    *in_ECX = 0;
  }
  local_4 = 0xffffffff;
  if (*in_ECX != 0) {
    (*(code *)PTR__free_00f01b10)(*in_ECX);
  }
  ExceptionList = local_c;
  return;
}

