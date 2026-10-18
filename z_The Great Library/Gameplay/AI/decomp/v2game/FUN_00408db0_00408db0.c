// FUN_00408db0 @ 00408db0 body=[[00408db0, 00408e55]]


void FUN_00408db0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5856b;
  local_10 = ExceptionList;
  iVar1 = in_ECX[1];
  ExceptionList = &local_10;
  puVar3 = (undefined1 *)FUN_00aae9af(0x28);
  local_8 = 0;
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(puVar3 + 0x14) = 0xf;
    *(undefined4 *)(puVar3 + 0x10) = 0;
    *puVar3 = 0;
    FUN_00408ed0(param_1,0,0xffffffff);
    *(int *)(puVar3 + 0x1c) = iVar1;
    *(undefined4 *)(puVar3 + 0x20) = 0;
    puVar3[0x24] = 0;
  }
  iVar2 = in_ECX[2];
  in_ECX[1] = puVar3;
  in_ECX[2] = iVar2 + 1;
  if (iVar2 != 0) {
    *(undefined1 **)(iVar1 + 0x20) = puVar3;
    ExceptionList = local_10;
    return;
  }
  *in_ECX = puVar3;
  ExceptionList = local_10;
  return;
}

