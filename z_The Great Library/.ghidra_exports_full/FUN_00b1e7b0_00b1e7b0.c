// FUN_00b1e7b0 @ 00b1e7b0 body=[[00b1e7b0, 00b1e84d]]


void FUN_00b1e7b0(void)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *in_ECX;
  uint uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00b3a051;
  local_c = ExceptionList;
  uVar3 = DAT_00ef259c ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  *in_ECX = &PTR_FUN_00de0a80;
  uVar1 = in_ECX[2];
  uVar4 = 0;
  local_4 = 0;
  if (uVar1 != 0) {
    do {
      puVar2 = *(undefined4 **)(in_ECX[1] + uVar4 * 4);
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1,uVar3);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  if (in_ECX[1] != 0) {
    (*(code *)PTR__free_00f01b10)(in_ECX[1]);
    in_ECX[1] = 0;
  }
  local_4 = 0xffffffff;
  if (in_ECX[1] != 0) {
    (*(code *)PTR__free_00f01b10)(in_ECX[1]);
  }
  ExceptionList = local_c;
  return;
}

