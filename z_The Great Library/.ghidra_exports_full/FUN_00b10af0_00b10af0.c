// FUN_00b10af0 @ 00b10af0 body=[[00b10af0, 00b10bb1]]


void FUN_00b10af0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  uint uVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00b398d3;
  local_c = ExceptionList;
  uVar1 = DAT_00ef259c ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *in_ECX = &PTR_FUN_00de0394;
  uVar2 = 0;
  local_4 = 1;
  if (in_ECX[3] != 0) {
    iVar3 = 0;
    do {
      *(undefined1 *)(in_ECX[2] + 0x20 + iVar3) = 0;
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x24;
    } while (uVar2 < (uint)in_ECX[3]);
  }
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  if (in_ECX[2] != 0) {
    (*(code *)PTR__free_00f01b10)(in_ECX[2],uVar1);
    in_ECX[2] = 0;
  }
  uVar1 = 0;
  local_4 = local_4 & 0xffffff00;
  if (in_ECX[3] != 0) {
    iVar3 = 0;
    do {
      *(undefined1 *)(in_ECX[2] + 0x20 + iVar3) = 0;
      uVar1 = uVar1 + 1;
      iVar3 = iVar3 + 0x24;
    } while (uVar1 < (uint)in_ECX[3]);
  }
  if (in_ECX[2] != 0) {
    (*(code *)PTR__free_00f01b10)(in_ECX[2]);
  }
  local_4 = 0xffffffff;
  FUN_00adf8b0();
  ExceptionList = local_c;
  return;
}

