// FUN_004e01d0 @ 004e01d0 body=[[004e01d0, 004e027c]]


void FUN_004e01d0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_178 [360];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4cf6d;
  local_10 = ExceptionList;
  iVar1 = (param_2 - param_1) / 0x160;
  iVar3 = iVar1 / 2;
  if (0 < iVar3) {
    iVar2 = iVar3 * 0x160 + param_1;
    ExceptionList = &local_10;
    do {
      iVar2 = iVar2 + -0x160;
      iVar3 = iVar3 + -1;
      FUN_004dff10(local_178,iVar2);
      local_8 = 0;
      FUN_004e0650(param_1,iVar3,iVar1,local_178,param_3);
      local_8 = 0xffffffff;
      FUN_004dd290(local_178);
    } while (0 < iVar3);
  }
  ExceptionList = local_10;
  return;
}

