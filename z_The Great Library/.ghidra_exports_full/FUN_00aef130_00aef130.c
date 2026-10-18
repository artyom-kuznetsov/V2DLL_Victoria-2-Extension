// FUN_00aef130 @ 00aef130 body=[[00aef130, 00aef1c3]]


void FUN_00aef130(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00b383f5;
  local_c = ExceptionList;
  uVar1 = DAT_00ef259c ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *in_ECX = &PTR_FUN_00ddde0c;
  local_4 = 1;
  if (in_ECX[4] != 0) {
    (*(code *)PTR__free_00f01b10)(in_ECX[4],uVar1);
  }
  in_ECX[4] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  if (in_ECX[5] != 0) {
    (*(code *)PTR__free_00f01b10)(in_ECX[5]);
    in_ECX[5] = 0;
  }
  local_4 = local_4 & 0xffffff00;
  if (in_ECX[5] != 0) {
    (*(code *)PTR__free_00f01b10)(in_ECX[5]);
  }
  *in_ECX = &PTR_LAB_00dddab4;
  ExceptionList = local_c;
  return;
}

