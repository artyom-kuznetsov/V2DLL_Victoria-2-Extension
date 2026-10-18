// FUN_0042b730 @ 0042b730 body=[[0042b730, 0042b7f7]]


void FUN_0042b730(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3d443;
  local_10 = ExceptionList;
  iVar1 = in_ECX[1];
  ExceptionList = &local_10;
  puVar3 = (undefined1 *)FUN_00aae9af(0x44);
  local_8 = 0;
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(puVar3 + 0x14) = 0xf;
    *(undefined4 *)(puVar3 + 0x10) = 0;
    *puVar3 = 0;
    FUN_00408ed0(param_1,0,0xffffffff);
    local_8 = CONCAT31(local_8._1_3_,1);
    *(undefined4 *)(puVar3 + 0x30) = 0xf;
    *(undefined4 *)(puVar3 + 0x2c) = 0;
    puVar3[0x1c] = 0;
    FUN_00408ed0(param_1 + 0x1c,0,0xffffffff);
    *(int *)(puVar3 + 0x38) = iVar1;
    *(undefined4 *)(puVar3 + 0x3c) = 0;
    puVar3[0x40] = 0;
  }
  iVar2 = in_ECX[2];
  in_ECX[1] = puVar3;
  in_ECX[2] = iVar2 + 1;
  if (iVar2 != 0) {
    *(undefined1 **)(iVar1 + 0x3c) = puVar3;
    ExceptionList = local_10;
    return;
  }
  *in_ECX = puVar3;
  ExceptionList = local_10;
  return;
}

