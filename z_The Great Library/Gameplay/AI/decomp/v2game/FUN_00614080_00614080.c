// FUN_00614080 @ 00614080 body=[[00614080, 0061411f]]


void FUN_00614080(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int *unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5856b;
  local_10 = ExceptionList;
  iVar1 = *unaff_EDI;
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
    *(undefined4 *)(puVar3 + 0x1c) = 0;
    *(int *)(puVar3 + 0x20) = iVar1;
    puVar3[0x24] = 0;
  }
  iVar2 = unaff_EDI[2];
  *unaff_EDI = (int)puVar3;
  unaff_EDI[2] = iVar2 + 1;
  if (iVar2 != 0) {
    *(undefined1 **)(iVar1 + 0x1c) = puVar3;
    ExceptionList = local_10;
    return;
  }
  unaff_EDI[1] = (int)puVar3;
  ExceptionList = local_10;
  return;
}

