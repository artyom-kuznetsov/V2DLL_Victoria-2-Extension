// FUN_0055ca60 @ 0055ca60 body=[[0055ca60, 0055cb30] [0055cb46, 0055cbc6]]


void FUN_0055ca60(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined1 *unaff_ESI;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bbc108;
  local_10 = ExceptionList;
  local_14 = 0;
  if (param_2 < DAT_00f20bf8) {
    iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_2 * 4);
    piVar3 = (int *)(*(int *)(*(int *)(iVar2 + 0xbd0) + 0x40) * 0x10 + DAT_0125dcd8);
    if (param_2 < (piVar3[1] - *piVar3) / 0x1c) {
      iVar2 = *(int *)(DAT_0125dcd8 + *(int *)(*(int *)(iVar2 + 0xbd0) + 0x40) * 0x10);
      ExceptionList = &local_10;
      *(undefined4 *)(unaff_ESI + 0x14) = 0xf;
      *(undefined4 *)(unaff_ESI + 0x10) = 0;
      *unaff_ESI = 0;
      FUN_00408ed0(iVar2 + param_2 * 0x1c,0,0xffffffff);
      ExceptionList = local_10;
      return;
    }
    pcVar4 = (char *)&param_1;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    ExceptionList = &local_10;
    FUN_00409350(&param_1,(int)pcVar4 - ((int)&param_1 + 1));
    local_8 = 0;
    uVar5 = FUN_0055ce50(local_30);
    *(undefined4 *)(unaff_ESI + 0x14) = 0xf;
    *(undefined4 *)(unaff_ESI + 0x10) = 0;
    *unaff_ESI = 0;
    FUN_00408ed0(uVar5,0,0xffffffff);
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
  }
  else {
    ExceptionList = &local_10;
    FUN_0055cc00();
  }
  ExceptionList = local_10;
  return;
}

