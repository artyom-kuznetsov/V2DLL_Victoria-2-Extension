// FUN_00b15960 @ 00b15960 body=[[00b15960, 00b159e8]]


void FUN_00b15960(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00b39df3;
  local_c = ExceptionList;
  uVar1 = DAT_00ef259c ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  in_ECX[1] = 0x1f;
  local_4 = 0;
  *in_ECX = &PTR_FUN_00de0628;
  iVar2 = (*(code *)PTR_FUN_00f01b08)(0x20,3,4,0,0,0xffffffff,uVar1);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00b1ef00(param_1);
  }
  in_ECX[2] = uVar3;
  ExceptionList = local_c;
  return;
}

