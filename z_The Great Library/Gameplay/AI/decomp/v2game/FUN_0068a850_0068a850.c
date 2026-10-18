// FUN_0068a850 @ 0068a850 body=[[0068a850, 0068a8f4]]


void FUN_0068a850(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int unaff_ESI;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b5b6e0;
  local_14 = ExceptionList;
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  iVar3 = *(int *)(unaff_ESI + 0xb30);
  ExceptionList = &local_14;
  puVar5 = (undefined4 *)FUN_00aae9af(0x14);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = uVar2;
    puVar5[1] = uVar1;
    puVar5[2] = iVar3;
    puVar5[3] = 0;
    *(undefined1 *)(puVar5 + 4) = 0;
  }
  iVar4 = *(int *)(unaff_ESI + 0xb34);
  *(undefined4 **)(unaff_ESI + 0xb30) = puVar5;
  *(int *)(unaff_ESI + 0xb34) = iVar4 + 1;
  if (iVar4 != 0) {
    *(undefined4 **)(iVar3 + 0xc) = puVar5;
    ExceptionList = local_14;
    return;
  }
  *(undefined4 **)(unaff_ESI + 0xb2c) = puVar5;
  ExceptionList = local_14;
  return;
}

