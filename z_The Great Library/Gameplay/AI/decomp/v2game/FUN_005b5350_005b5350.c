// FUN_005b5350 @ 005b5350 body=[[005b5350, 005b53c8]]


void FUN_005b5350(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int unaff_ESI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b5b6e0;
  local_10 = ExceptionList;
  iVar1 = *(int *)(unaff_ESI + 0xc);
  ExceptionList = &local_10;
  puVar3 = (undefined4 *)FUN_00aae9af(0x10);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = param_1;
    puVar3[1] = iVar1;
    puVar3[2] = 0;
    *(undefined1 *)(puVar3 + 3) = 0;
  }
  iVar2 = *(int *)(unaff_ESI + 0x10);
  *(undefined4 **)(unaff_ESI + 0xc) = puVar3;
  *(int *)(unaff_ESI + 0x10) = iVar2 + 1;
  if (iVar2 != 0) {
    *(undefined4 **)(iVar1 + 8) = puVar3;
    ExceptionList = local_10;
    return;
  }
  *(undefined4 **)(unaff_ESI + 8) = puVar3;
  ExceptionList = local_10;
  return;
}

