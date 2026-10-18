// FUN_00b09300 @ 00b09300 body=[[00b09300, 00b0939c]]


void FUN_00b09300(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00b390ac;
  local_c = ExceptionList;
  uVar1 = DAT_00ef259c ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  *in_ECX = &PTR_FUN_00ddfdd0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  local_4 = 0;
  *(undefined2 *)(in_ECX + 4) = 0x12d;
  in_ECX[5] = param_1;
  in_ECX[6] = 0;
  iVar2 = (*(code *)PTR_FUN_00f01b08)(0x18,0x135,4,0,0,0xffffffff,uVar1);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (iVar2 == 0) {
    in_ECX[6] = 0;
  }
  else {
    uVar3 = FUN_00b098f0(param_1,in_ECX);
    in_ECX[6] = uVar3;
  }
  ExceptionList = local_c;
  return;
}

