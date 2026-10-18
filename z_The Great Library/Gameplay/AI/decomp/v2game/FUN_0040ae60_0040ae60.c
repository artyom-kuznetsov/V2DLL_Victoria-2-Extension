// FUN_0040ae60 @ 0040ae60 body=[[0040ae60, 0040af4f]]


void FUN_0040ae60(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5856b;
  local_14 = ExceptionList;
  if (param_2 == 0x35b) {
    ExceptionList = &local_14;
    iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",in_ECX + 0x40);
    if (iVar1 == 0) {
      FUN_009a1140();
    }
    ExceptionList = local_14;
    return;
  }
  if (param_2 != 0xa0d) {
    ExceptionList = &local_14;
    FUN_009a2620(param_1,param_2);
    ExceptionList = local_14;
    return;
  }
  ExceptionList = &local_14;
  iVar1 = FUN_00aae9af(0x260);
  local_c = 0;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00401670(iVar1,0);
  }
  local_c = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x3c) = uVar2;
  FUN_00402230(uVar2,param_1);
  *(undefined1 *)(*(int *)(in_ECX + 0x3c) + 0x1cc) = 1;
  (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
  ExceptionList = local_14;
  return;
}

