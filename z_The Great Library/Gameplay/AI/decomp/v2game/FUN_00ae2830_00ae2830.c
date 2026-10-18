// FUN_00ae2830 @ 00ae2830 body=[[00ae2830, 00ae292a]]


void FUN_00ae2830(undefined4 param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00b37a47;
  local_c = ExceptionList;
  uVar2 = DAT_00ef259c ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  FUN_00b09300(param_1);
  *in_ECX = &PTR_FUN_00ddd954;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  *(undefined2 *)(in_ECX + 10) = 0x12d;
  iVar3 = (*(code *)PTR_FUN_00f01b08)(8,0x12d,4,0,0,0xffffffff,uVar2);
  local_4._0_1_ = 2;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00b0a2b0(in_ECX);
  }
  iVar3 = in_ECX[8];
  uVar2 = iVar3 + 1;
  local_4._0_1_ = 1;
  in_ECX[8] = uVar2;
  if ((uint)in_ECX[9] < uVar2) {
    FUN_00aeb6c0(iVar3 + 2);
  }
  puVar1 = (undefined4 *)(in_ECX[7] + -4 + in_ECX[8] * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = uVar4;
  }
  iVar3 = (*(code *)PTR_FUN_00f01b08)(0x1c,0x12d,4,0,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,3);
  if (iVar3 == 0) {
    in_ECX[0xb] = 0;
  }
  else {
    uVar4 = FUN_00b09cc0(in_ECX);
    in_ECX[0xb] = uVar4;
  }
  ExceptionList = local_c;
  return;
}

