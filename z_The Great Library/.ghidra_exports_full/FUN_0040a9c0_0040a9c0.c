// FUN_0040a9c0 @ 0040a9c0 body=[[0040a9c0, 0040aa7a] [0040aa7e, 0040aac4]]


void FUN_0040a9c0(int param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_EDI;
  undefined4 local_34;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4de63;
  local_14 = ExceptionList;
  if (unaff_EDI == 0) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
    return;
  }
  ExceptionList = &local_14;
  iVar3 = FUN_00aae9af(0x260);
  local_c = 0;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00401670(iVar3,0);
  }
  local_c = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = uVar4;
  FUN_00406ee0(uVar4,unaff_EDI);
  iVar3 = *(int *)(param_1 + 0x3c);
  *(undefined4 *)(iVar3 + 0x214) = *(undefined4 *)(unaff_EDI + 0x214);
  *(undefined4 *)(iVar3 + 0x218) = *(undefined4 *)(unaff_EDI + 0x218);
  uVar4 = FUN_00405af0(unaff_EDI);
  local_c = 1;
  iVar3 = *(int *)(param_1 + 0x3c);
  FUN_00408ed0(uVar4,0,0xffffffff);
  *(undefined1 *)(iVar3 + 0x21c) = 1;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34);
  }
  cVar1 = *(char *)(unaff_EDI + 0x21d);
  iVar3 = *(int *)(param_1 + 0x3c);
  cVar2 = *(char *)(iVar3 + 0x21d);
  *(char *)(iVar3 + 0x21d) = cVar1;
  *(bool *)(iVar3 + 0x21c) = cVar1 != cVar2;
  ExceptionList = local_14;
  return;
}

