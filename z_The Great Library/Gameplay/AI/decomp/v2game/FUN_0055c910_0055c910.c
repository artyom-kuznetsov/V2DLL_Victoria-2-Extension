// FUN_0055c910 @ 0055c910 body=[[0055c910, 0055c9d0] [0055c9e7, 0055ca55]]


void FUN_0055c910(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined1 *in_ECX;
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
  if (param_3 < DAT_00f20bf8) {
    piVar1 = (int *)(DAT_0125dd4c + param_1 * 0x10);
    if (param_3 < (piVar1[1] - *piVar1) / 0x1c) {
      iVar3 = *piVar1;
      ExceptionList = &local_10;
      *(undefined4 *)(in_ECX + 0x14) = 0xf;
      *(undefined4 *)(in_ECX + 0x10) = 0;
      *in_ECX = 0;
      FUN_00408ed0(iVar3 + param_3 * 0x1c,0,0xffffffff);
      ExceptionList = local_10;
      return;
    }
    pcVar4 = (char *)&param_2;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    do {
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    ExceptionList = &local_10;
    FUN_00409350(&param_2,(int)pcVar4 - ((int)&param_2 + 1));
    local_8 = 0;
    uVar5 = FUN_0055ce50(local_30);
    *(undefined4 *)(in_ECX + 0x14) = 0xf;
    *(undefined4 *)(in_ECX + 0x10) = 0;
    *in_ECX = 0;
    FUN_00408ed0(uVar5,0,0xffffffff);
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
  }
  else {
    ExceptionList = &local_10;
    FUN_0055cbd0(param_2,param_3);
  }
  ExceptionList = local_10;
  return;
}

