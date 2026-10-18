// FUN_009f74c0 @ 009f74c0 body=[[009f74c0, 009f75af] [009f75b3, 009f75d7] [009f75db, 009f75ee]]


void FUN_009f74c0(int param_1)

{
  char *****pppppcVar1;
  int iVar2;
  int *in_ECX;
  char *****pppppcVar3;
  char *****pppppcVar4;
  undefined1 *unaff_EDI;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  char ****local_34 [4];
  int local_24;
  uint local_20;
  undefined4 local_18;
  undefined1 local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b44510;
  local_10 = ExceptionList;
  local_18 = 0;
  ExceptionList = &local_10;
  (**(code **)(*in_ECX + 0x5c))(local_34);
  local_8 = 0;
  local_14[0] = 10;
  iVar2 = FUN_005484e0(local_34,local_14,1);
  if (iVar2 == -1) {
    *(undefined4 *)(unaff_EDI + 0x14) = 0xf;
    *(undefined4 *)(unaff_EDI + 0x10) = 0;
    *unaff_EDI = 0;
    FUN_00408ed0(in_ECX + 6,0,0xffffffff);
  }
  else {
    pppppcVar3 = (char *****)local_34[0];
    if (local_20 < 0x10) {
      pppppcVar3 = local_34;
    }
    pppppcVar4 = (char *****)((int)pppppcVar3 + local_24);
    iVar2 = 0;
    while ((pppppcVar1 = pppppcVar3, pppppcVar3 != pppppcVar4 && (iVar2 < param_1))) {
      if (*(char *)pppppcVar3 == '\n') {
        iVar2 = iVar2 + 1;
      }
      pppppcVar3 = (char *****)((int)pppppcVar3 + 1);
    }
    for (; (pppppcVar1 != pppppcVar4 && (*(char *)pppppcVar1 != '\n'));
        pppppcVar1 = (char *****)((int)pppppcVar1 + 1)) {
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    FUN_00409350(pppppcVar3,(int)pppppcVar1 - (int)pppppcVar3);
    local_8._0_1_ = 1;
    FUN_00408ed0(local_50,0,0xffffffff);
    local_8 = (uint)local_8._1_3_ << 8;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
    *(undefined4 *)(unaff_EDI + 0x14) = 0xf;
    *(undefined4 *)(unaff_EDI + 0x10) = 0;
    *unaff_EDI = 0;
    FUN_00408ed0(local_34,0,0xffffffff);
  }
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  ExceptionList = local_10;
  return;
}

