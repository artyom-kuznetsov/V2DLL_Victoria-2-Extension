// FUN_00a3aa10 @ 00a3aa10 body=[[00a3aa10, 00a3aabe]]


void FUN_00a3aa10(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int *unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  iVar1 = *unaff_EDI;
  ExceptionList = &local_10;
  puVar3 = (undefined1 *)FUN_00aae9af(0x38);
  local_8 = 0;
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(puVar3 + 0x14) = 0xf;
    *(undefined4 *)(puVar3 + 0x10) = 0;
    *puVar3 = 0;
    FUN_00408ed0(param_1,0,0xffffffff);
    *(undefined4 *)(puVar3 + 0x20) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(puVar3 + 0x24) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(puVar3 + 0x28) = 0;
    *(int *)(puVar3 + 0x2c) = iVar1;
    puVar3[0x30] = 0;
  }
  iVar2 = unaff_EDI[2];
  *unaff_EDI = (int)puVar3;
  unaff_EDI[2] = iVar2 + 1;
  if (iVar2 != 0) {
    *(undefined1 **)(iVar1 + 0x28) = puVar3;
    ExceptionList = local_10;
    return;
  }
  unaff_EDI[1] = (int)puVar3;
  ExceptionList = local_10;
  return;
}

