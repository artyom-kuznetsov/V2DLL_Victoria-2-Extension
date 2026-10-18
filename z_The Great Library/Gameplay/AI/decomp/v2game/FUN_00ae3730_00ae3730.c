// FUN_00ae3730 @ 00ae3730 body=[[00ae3730, 00ae37d1]]


void FUN_00ae3730(void)

{
  uint uVar1;
  int iVar2;
  int *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00b37b43;
  local_c = ExceptionList;
  uVar1 = DAT_00ef259c ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  *(undefined2 *)(in_ECX + 7) = 1;
  local_4 = 1;
  *(undefined2 *)(in_ECX + 3) = 0x138;
  if ((uint)in_ECX[2] < 400) {
    if (*in_ECX == 0) {
      iVar2 = (*(code *)PTR_FUN_00f01b08)(0x640,0x138,4,2,0,0xffffffff,uVar1);
    }
    else {
      iVar2 = (*(code *)PTR_FUN_00f01b0c)(*in_ECX);
    }
    *in_ECX = iVar2;
    in_ECX[2] = 400;
  }
  ExceptionList = local_c;
  return;
}

