// FUN_009a1140 @ 009a1140 body=[[009a1140, 009a129f] [009a12a3, 009a12c0] [009a12c4, 009a12e1] [009a12e5, 009a1300] [009a1304, 009a1318]]


/* WARNING: Removing unreachable block (ram,0x009a12b5) */
/* WARNING: Removing unreachable block (ram,0x009a1297) */

uint FUN_009a1140(void)

{
  uint uVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  int unaff_ESI;
  char *pcVar5;
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
  ExceptionList = &local_10;
  if (*(int *)(unaff_ESI + 0x35c) != 0) {
    ExceptionList = &local_10;
    *(undefined1 *)(*(int *)(unaff_ESI + 0x35c) + 4) = 1;
    cVar2 = (**(code **)**(undefined4 **)(unaff_ESI + 0x35c))();
    if (cVar2 != '\0') {
      iVar4 = *(int *)(unaff_ESI + 0x35c);
      *(undefined1 *)(iVar4 + 5) = 1;
      ExceptionList = local_10;
      return CONCAT31((int3)((uint)iVar4 >> 8),1);
    }
  }
  pcVar5 = (char *)(*(int *)(unaff_ESI + 0x1c) + 0x10);
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  pcVar3 = pcVar5;
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  FUN_00409350(pcVar5,(int)pcVar3 - (*(int *)(unaff_ESI + 0x1c) + 0x11));
  local_8 = 0;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("Malformed",9);
  local_8._0_1_ = 1;
  FUN_00408ed0(local_34,0,0xffffffff);
  local_8._0_1_ = 2;
  FUN_00408ed0(local_50,0,0xffffffff);
  local_8._0_1_ = 3;
  local_14 = *(int *)(unaff_ESI + 8);
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
  uVar1 = *(uint *)(unaff_ESI + 0xc);
  *(int *)(unaff_ESI + 8) = iVar4;
  *(uint *)(unaff_ESI + 0xc) = uVar1 + 1;
  if (uVar1 == 0) {
    *(int *)(unaff_ESI + 4) = iVar4;
  }
  else {
    *(int *)(local_14 + 0x40) = iVar4;
  }
  if (local_20 < 0x10) {
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    if (local_3c < 0x10) {
      *(undefined1 *)(unaff_ESI + 0x14) = 1;
      ExceptionList = local_10;
      return uVar1 & 0xffffff00;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_34[0]);
}

