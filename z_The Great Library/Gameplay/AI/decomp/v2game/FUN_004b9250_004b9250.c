// FUN_004b9250 @ 004b9250 body=[[004b9250, 004b930a]]


void FUN_004b9250(int param_1)

{
  int iVar1;
  int unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = param_1;
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b5b0d0;
  local_10 = ExceptionList;
  param_1 = *(undefined4 *)(unaff_EDI + 0x58);
  ExceptionList = &local_10;
  if (DAT_01258728 == (int *)0x0) {
    ExceptionList = &local_10;
    DAT_01258728 = (int *)FUN_00aae9af(0x14);
    if (DAT_01258728 == (int *)0x0) {
      DAT_01258728 = (int *)0x0;
    }
    else {
      *DAT_01258728 = 0;
      DAT_01258728[1] = 0;
      DAT_01258728[2] = 0;
      *(undefined1 *)(DAT_01258728 + 4) = 0;
    }
  }
  FUN_004ee550(*(int *)(iVar1 + 0x58) * 0xb0 + 0x10 + *DAT_01258728,&param_1);
  FUN_004d1020(unaff_EDI,&param_1);
  for (iVar1 = *(int *)(*(int *)(*(int *)(unaff_EDI + 0x68) + 0x28) * 0x10 + *(int *)(iVar1 + 0x194)
                       ); (iVar1 != 0 && (unaff_EDI != iVar1)); iVar1 = *(int *)(iVar1 + 0x27c)) {
  }
  FUN_004be8d0(iVar1);
  ExceptionList = local_10;
  return;
}

