// FUN_0048b6f0 @ 0048b6f0 body=[[0048b6f0, 0048b75f] [0048b763, 0048b774]]


void FUN_0048b6f0(void)

{
  int iVar1;
  uint uVar2;
  uint in_ECX;
  int *unaff_ESI;
  int in_stack_0000004c;
  undefined1 local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4d138;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar1 = unaff_ESI[1];
  uVar2 = (iVar1 - *unaff_ESI) / 0x58;
  if (uVar2 < in_ECX) {
    ExceptionList = &local_10;
    FUN_0048b9d0(unaff_ESI,iVar1,in_ECX - uVar2,&stack0x00000004);
  }
  else {
    ExceptionList = &local_10;
    if (in_ECX < uVar2) {
      ExceptionList = &local_10;
      FUN_0048b8c0(unaff_ESI,local_14,in_ECX * 0x58 + *unaff_ESI,iVar1);
    }
  }
  if (in_stack_0000004c != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_stack_0000004c);
  }
  ExceptionList = local_10;
  return;
}

