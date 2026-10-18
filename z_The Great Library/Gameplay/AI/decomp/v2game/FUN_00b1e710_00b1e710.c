// FUN_00b1e710 @ 00b1e710 body=[[00b1e710, 00b1e7a8]]


void FUN_00b1e710(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00b3a02b;
  local_c = ExceptionList;
  uVar1 = DAT_00ef259c ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *in_ECX = &PTR_FUN_00de0a80;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  *(undefined2 *)(in_ECX + 4) = 0x16;
  local_4 = 0;
  if ((uint)in_ECX[3] < 10) {
    if (in_ECX[1] == 0) {
      uVar2 = (*(code *)PTR_FUN_00f01b08)(0x28,*(undefined2 *)(in_ECX + 4),4,2,0,0xffffffff,uVar1);
    }
    else {
      uVar2 = (*(code *)PTR_FUN_00f01b0c)(in_ECX[1],0x28,0x16);
    }
    in_ECX[1] = uVar2;
    in_ECX[3] = 10;
  }
  ExceptionList = local_c;
  return;
}

