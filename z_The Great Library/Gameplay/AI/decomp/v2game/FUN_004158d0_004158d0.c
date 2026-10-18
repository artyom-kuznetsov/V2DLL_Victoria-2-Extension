// FUN_004158d0 @ 004158d0 body=[[004158d0, 0041595b] [0041595f, 00415a52] [00415a56, 00415a7a]]


int FUN_004158d0(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  int unaff_ESI;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b93920;
  local_10 = ExceptionList;
  pcVar6 = (char *)(param_1 + 0x128);
  if (*(int *)(param_1 + 300) == 0) {
    return -1;
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  pcVar3 = pcVar6;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_10;
  FUN_00409350(pcVar6,(int)pcVar3 - (param_1 + 0x129));
  local_8 = 0;
  uVar4 = FUN_0045c080(*(undefined4 *)(unaff_ESI + 0x24),local_34);
  local_8 = 0xffffffff;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  uVar5 = *(uint *)(unaff_ESI + 0x20);
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  if ((uVar4 < uVar5) || (*(uint *)(unaff_ESI + 0x24) <= uVar4)) {
    local_18 = *(undefined4 *)pcVar6;
    iVar2 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 300) * 4) + 0xce0);
    if (iVar2 != 0) {
      uVar4 = FUN_0045c080(*(undefined4 *)(unaff_ESI + 0x24),iVar2 + 0xc);
      if ((*(uint *)(unaff_ESI + 0x20) <= uVar4) && (uVar4 < *(uint *)(unaff_ESI + 0x24))) {
        ExceptionList = local_10;
        return (int)(uVar4 - *(uint *)(unaff_ESI + 0x20)) / 0x1c;
      }
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    FUN_00409350("Generic",7);
    local_8 = 1;
    uVar4 = FUN_0045c080(*(undefined4 *)(unaff_ESI + 0x24),local_50);
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
    uVar5 = *(uint *)(unaff_ESI + 0x20);
    if (uVar4 < uVar5) {
      ExceptionList = local_10;
      return -1;
    }
    if (*(uint *)(unaff_ESI + 0x24) <= uVar4) {
      ExceptionList = local_10;
      return -1;
    }
  }
  ExceptionList = local_10;
  return (int)(uVar4 - uVar5) / 0x1c;
}

