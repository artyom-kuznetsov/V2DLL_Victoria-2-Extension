// FUN_00ada060 @ 00ada060 body=[[00ada060, 00ada0ef]]


void FUN_00ada060(void)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *in_ECX;
  uint uVar4;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00b37336;
  local_c = ExceptionList;
  uVar3 = DAT_00ef259c ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  *in_ECX = &PTR_FUN_00ddd13c;
  uVar1 = in_ECX[10];
  uVar4 = 0;
  local_4 = 1;
  if (uVar1 != 0) {
    do {
      puVar2 = *(undefined4 **)(in_ECX[9] + uVar4 * 4);
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1,uVar3);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  local_4 = local_4 & 0xffffff00;
  if (in_ECX[9] != 0) {
    (*(code *)PTR__free_00f01b10)(in_ECX[9]);
  }
  local_4 = 0xffffffff;
  FUN_00aed7c0();
  ExceptionList = local_c;
  return;
}

