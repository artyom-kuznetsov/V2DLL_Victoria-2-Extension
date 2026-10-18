// FUN_00b158a0 @ 00b158a0 body=[[00b158a0, 00b1591c]]


void FUN_00b158a0(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00b39db8;
  local_c = ExceptionList;
  uVar1 = DAT_00ef259c ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  local_4 = 0;
  *(undefined2 *)(in_ECX + 3) = 0x17;
  uVar2 = (*(code *)PTR_FUN_00f01b08)(12000,0x17,4,2,0,0xffffffff,uVar1);
  *in_ECX = uVar2;
  in_ECX[2] = 1000;
  FUN_00b157e0(&DAT_00ded94d);
  ExceptionList = local_c;
  return;
}

