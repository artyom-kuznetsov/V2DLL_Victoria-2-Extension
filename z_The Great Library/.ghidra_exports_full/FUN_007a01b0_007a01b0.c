// FUN_007a01b0 @ 007a01b0 body=[[007a01b0, 007a0262] [007a0266, 007a0275]]


/* WARNING: Removing unreachable block (ram,0x007a025a) */

void FUN_007a01b0(void)

{
  int in_ECX;
  undefined4 *unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b43788;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00408ed0(in_ECX + -0x1c,0,0xffffffff);
  local_8 = 0;
  *(undefined4 *)(in_ECX + -0x28) = *unaff_EDI;
  *(undefined4 *)(in_ECX + -0x24) = unaff_EDI[1];
  *(undefined4 *)(in_ECX + -0x20) = unaff_EDI[2];
  FUN_00408ed0(unaff_EDI + 3,0,0xffffffff);
  FUN_0079fef0();
  ExceptionList = local_10;
  return;
}

