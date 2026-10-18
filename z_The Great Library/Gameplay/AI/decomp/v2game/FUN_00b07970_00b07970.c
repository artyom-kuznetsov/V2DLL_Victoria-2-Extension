// FUN_00b07970 @ 00b07970 body=[[00b07970, 00b07a01]]


void FUN_00b07970(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00b38f5b;
  local_c = ExceptionList;
  uVar1 = DAT_00ef259c ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  FUN_00b13100(param_1,param_4);
  in_ECX[6] = param_2;
  iVar2 = in_ECX[1] * param_3;
  local_4 = 0;
  *in_ECX = &PTR_FUN_00ddfd7c;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = param_3;
  if (*(char *)(in_ECX + 2) != '\0') {
    iVar2 = iVar2 * 2;
  }
  uVar3 = (*(code *)PTR_FUN_00f01b08)(iVar2,0xcc,4,0,0,0,uVar1);
  in_ECX[3] = uVar3;
  ExceptionList = local_c;
  return;
}

