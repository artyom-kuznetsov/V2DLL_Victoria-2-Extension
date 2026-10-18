// FUN_0051b4e0 @ 0051b4e0 body=[[0051b4e0, 0051b583] [0051b587, 0051b596]]


void FUN_0051b4e0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int unaff_EDI;
  uint in_stack_00000018;
  undefined1 *puVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3ff53;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar1 = *(int *)(unaff_EDI + 0x178);
  ExceptionList = &local_10;
  puVar3 = (undefined1 *)FUN_00aae9af(0x28);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (puVar3 == (undefined1 *)0x0) {
    puVar4 = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(puVar3 + 0x14) = 0xf;
    *(undefined4 *)(puVar3 + 0x10) = 0;
    *puVar3 = 0;
    puVar5 = puVar3;
    FUN_00408ed0(&param_1,0,0xffffffff);
    *(int *)(puVar3 + 0x1c) = iVar1;
    *(undefined4 *)(puVar3 + 0x20) = 0;
    puVar3[0x24] = 0;
    puVar4 = puVar3;
    puVar3 = puVar5;
  }
  iVar2 = *(int *)(unaff_EDI + 0x17c);
  *(undefined1 **)(unaff_EDI + 0x178) = puVar4;
  *(int *)(unaff_EDI + 0x17c) = iVar2 + 1;
  if (iVar2 == 0) {
    *(undefined1 **)(unaff_EDI + 0x174) = puVar4;
  }
  else {
    *(undefined1 **)(iVar1 + 0x20) = puVar4;
  }
  if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1,puVar3);
  }
  ExceptionList = local_10;
  return;
}

