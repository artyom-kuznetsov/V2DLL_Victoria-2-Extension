// FUN_0068b470 @ 0068b470 body=[[0068b470, 0068b4f8]]


void FUN_0068b470(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  iVar1 = *(int *)(param_1 + 0x1c);
  ExceptionList = &local_10;
  iVar3 = FUN_00aae9af(0x44);
  local_8 = 0;
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    FUN_0064a460();
    *(int *)(iVar3 + 0x38) = iVar1;
    *(undefined4 *)(iVar3 + 0x3c) = 0;
    *(undefined1 *)(iVar3 + 0x40) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x20);
  *(int *)(param_1 + 0x1c) = iVar3;
  *(int *)(param_1 + 0x20) = iVar2 + 1;
  if (iVar2 == 0) {
    *(int *)(param_1 + 0x18) = iVar3;
  }
  else {
    *(int *)(iVar1 + 0x3c) = iVar3;
  }
  *(undefined1 *)(param_1 + 0x60) = 1;
  ExceptionList = local_10;
  return;
}

