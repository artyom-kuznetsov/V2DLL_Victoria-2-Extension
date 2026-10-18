// FUN_00802710 @ 00802710 body=[[00802710, 00802773] [00802777, 008027e4] [008027e8, 008027fb]]


undefined4 FUN_00802710(void)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_EDI;
  char cStack00000007;
  undefined4 local_48;
  uint local_34;
  undefined4 local_2c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b456d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pcVar1 = (char *)FUN_00988f20(unaff_EDI);
  if (0xf < *(uint *)(pcVar1 + 0x14)) {
    pcVar1 = *(char **)pcVar1;
  }
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
    iVar2 = PHYSFS_exists(pcVar1);
    cStack00000007 = '\x01';
    if (iVar2 != 0) goto LAB_00802766;
  }
  cStack00000007 = '\0';
LAB_00802766:
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c);
  }
  if (cStack00000007 == '\0') {
    uVar3 = FUN_00988f20(unaff_EDI);
    local_8 = 1;
    uVar3 = FUN_009bcbf0(uVar3,1);
  }
  else {
    uVar3 = FUN_00988f20(unaff_EDI);
    local_8 = 0;
    uVar3 = FUN_009bcbf0(uVar3,1);
    local_48 = local_2c;
    local_34 = local_18;
  }
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48);
  }
  ExceptionList = local_10;
  return uVar3;
}

