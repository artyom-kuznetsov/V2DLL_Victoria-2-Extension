// FUN_0047c820 @ 0047c820 body=[[0047c820, 0047c95a] [0047c95e, 0047c97d] [0047c981, 0047c9b3]]


/* WARNING: Removing unreachable block (ram,0x0047c975) */
/* WARNING: Removing unreachable block (ram,0x0047c952) */

int FUN_0047c820(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  undefined4 *unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b46960;
  local_10 = ExceptionList;
  iVar2 = (in_ECX - (int)unaff_EDI) / 0x4c;
  if (1 < iVar2) {
    iVar3 = in_ECX + -0x2c;
    ExceptionList = &local_10;
    do {
      local_8 = 0xffffffff;
      FUN_00408ed0(iVar3 + -0x1c,0,0xffffffff);
      local_8 = 0;
      FUN_00408ed0(iVar3,0,0xffffffff);
      local_8 = 1;
      *(undefined4 *)(iVar3 + -0x20) = *unaff_EDI;
      FUN_00408ed0(unaff_EDI + 1,0,0xffffffff);
      FUN_00408ed0(unaff_EDI + 8,0,0xffffffff);
      *(undefined4 *)(iVar3 + 0x1c) = unaff_EDI[0xf];
      *(undefined4 *)(iVar3 + 0x20) = unaff_EDI[0x10];
      *(undefined1 *)(iVar3 + 0x24) = *(undefined1 *)(unaff_EDI + 0x11);
      *(undefined4 *)(iVar3 + 0x28) = unaff_EDI[0x12];
      FUN_0047ccd0();
      iVar3 = iVar3 + -0x4c;
      iVar1 = (0x2c - (int)unaff_EDI) + iVar3;
      iVar2 = iVar1 * 0x6bca1af3;
    } while (1 < iVar1 / 0x4c);
  }
  ExceptionList = local_10;
  return iVar2;
}

