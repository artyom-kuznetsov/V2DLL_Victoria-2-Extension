// FUN_004d0200 @ 004d0200 body=[[004d0200, 004d02d4]]


void FUN_004d0200(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  iVar1 = *(int *)(param_1 + 100);
  ExceptionList = &local_10;
  iVar4 = FUN_00aae9af(0x230);
  local_8 = 0;
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    FUN_004f2e50(iVar4);
    *(int *)(iVar4 + 0x220) = iVar1;
    *(undefined4 *)(iVar4 + 0x224) = 0;
    *(undefined1 *)(iVar4 + 0x228) = 0;
  }
  local_8 = 0xffffffff;
  iVar2 = *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 100) = iVar4;
  *(int *)(param_1 + 0x68) = iVar2 + 1;
  if (iVar2 == 0) {
    *(int *)(param_1 + 0x60) = iVar4;
  }
  else {
    *(int *)(iVar1 + 0x224) = iVar4;
  }
  iVar1 = *(int *)(param_1 + 100);
  uVar3 = *(uint *)(iVar1 + 0x20);
  *(int *)(iVar1 + 0x1c) = param_1;
  *(int *)(iVar1 + 0xe8) = param_1;
  FUN_004ee990(iVar1 + 0xe0,*(undefined4 *)(*(int *)(iVar1 + 0x18) + 300),uVar3 << 0xf,
               ((int)uVar3 >> 0x1f) << 0xf | uVar3 >> 0x11);
  ExceptionList = local_10;
  return;
}

