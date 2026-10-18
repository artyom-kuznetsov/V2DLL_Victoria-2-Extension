// FUN_00aef060 @ 00aef060 body=[[00aef060, 00aef0e6]]


void FUN_00aef060(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00b383c7;
  local_c = ExceptionList;
  uVar1 = DAT_00ef259c ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *in_ECX = &PTR_FUN_00ddde0c;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  *(undefined2 *)(in_ECX + 8) = 1;
  local_4 = 1;
  in_ECX[1] = 1;
  in_ECX[2] = 0;
  in_ECX[3] = 0x80;
  uVar2 = (*(code *)PTR_FUN_00f01b08)(0x80,600,4,0,0,0,uVar1);
  in_ECX[4] = uVar2;
  ExceptionList = local_c;
  return;
}

