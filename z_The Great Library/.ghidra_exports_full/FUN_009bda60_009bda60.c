// FUN_009bda60 @ 009bda60 body=[[009bda60, 009bdb01] [009bdb05, 009bdb16]]


void FUN_009bda60(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *in_ECX;
  uint in_stack_00000018;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3ce98;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = FUN_005484e0(&param_1,"script\\",7);
  iVar2 = FUN_005484e0(&param_1,&DAT_00e07bdc,4);
  if ((iVar1 < 0) || (iVar2 < 0)) {
    *(undefined4 *)(in_ECX + 0x14) = 0xf;
    *(undefined4 *)(in_ECX + 0x10) = 0;
    *in_ECX = 0;
    FUN_00409350(&DAT_00ded94d,0);
  }
  else {
    FUN_009895f0(iVar2 + 4);
  }
  if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1);
  }
  ExceptionList = local_10;
  return;
}

