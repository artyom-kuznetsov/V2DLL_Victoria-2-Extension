// FUN_00a53740 @ 00a53740 body=[[00a53740, 00a537e3] [00a537e7, 00a5380e]]


/* WARNING: Removing unreachable block (ram,0x00a537db) */

int FUN_00a53740(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  undefined4 unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3d918;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00408ed0(unaff_EDI,0,0xffffffff);
  cVar1 = FUN_00a82b10(*(undefined4 *)(*(int *)(in_ECX + 0x174) + *(int *)(in_ECX + 0x1cc) * 4));
  if (cVar1 != '\0') {
    FUN_00408ed0();
    local_8 = 0;
    iVar2 = FUN_00a84180();
    ExceptionList = local_10;
    return iVar2;
  }
  ExceptionList = local_10;
  return in_ECX + 0xa4;
}

