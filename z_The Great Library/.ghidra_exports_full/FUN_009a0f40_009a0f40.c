// FUN_009a0f40 @ 009a0f40 body=[[009a0f40, 009a105e] [009a1062, 009a1081] [009a1085, 009a109f] [009a10a3, 009a10c1] [009a10c5, 009a10e8]]


/* WARNING: Removing unreachable block (ram,0x009a1076) */
/* WARNING: Removing unreachable block (ram,0x009a1056) */

void FUN_009a0f40(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int unaff_EDI;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4a1c1;
  local_10 = ExceptionList;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  pcVar3 = (char *)(unaff_EDI + 0x24);
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_10;
  FUN_00409350((char *)(unaff_EDI + 0x24),(int)pcVar3 - (unaff_EDI + 0x25));
  local_8 = 0;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("Unexpected",10);
  local_8._0_1_ = 1;
  FUN_00408ed0(local_34,0,0xffffffff);
  local_8._0_1_ = 2;
  FUN_00408ed0(local_50,0,0xffffffff);
  local_8._0_1_ = 3;
  local_14 = *(int *)(unaff_EDI + 8);
  iVar4 = FUN_00aae9af(0x48);
  local_8 = CONCAT31(local_8._1_3_,4);
  local_18 = iVar4;
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    FUN_009a2340(iVar4);
    *(int *)(iVar4 + 0x3c) = local_14;
    *(undefined4 *)(iVar4 + 0x40) = 0;
    *(undefined1 *)(iVar4 + 0x44) = 0;
  }
  iVar2 = *(int *)(unaff_EDI + 0xc);
  *(int *)(unaff_EDI + 8) = iVar4;
  *(int *)(unaff_EDI + 0xc) = iVar2 + 1;
  if (iVar2 == 0) {
    *(int *)(unaff_EDI + 4) = iVar4;
  }
  else {
    *(int *)(local_14 + 0x40) = iVar4;
  }
  if (local_20 < 0x10) {
    local_8 = 0xffffffff;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    if (local_3c < 0x10) {
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
      *(undefined1 *)(unaff_EDI + 0x14) = 1;
      FUN_009a0e90();
      ExceptionList = local_10;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_34[0]);
}

