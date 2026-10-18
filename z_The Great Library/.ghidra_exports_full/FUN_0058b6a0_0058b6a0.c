// FUN_0058b6a0 @ 0058b6a0 body=[[0058b6a0, 0058b783] [0058b787, 0058b7c4]]


void FUN_0058b6a0(int param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined1 local_18 [8];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3d918;
  local_10 = ExceptionList;
  if (param_2 == 0x4c) {
    ExceptionList = &local_10;
    uVar5 = FUN_00aaf0c5(param_1 + 0x22c);
    *(undefined4 *)(in_ECX + 0x44) = uVar5;
    ExceptionList = local_10;
    return;
  }
  if (param_2 != 0x2ba) {
    if (param_2 != 0x2f0) {
      ExceptionList = &local_10;
      FUN_009a2620(param_1,param_2);
      ExceptionList = local_10;
      return;
    }
    ExceptionList = &local_10;
    puVar2 = (undefined4 *)FUN_0055c6c0(DAT_012587e4,local_18,param_1 + 0x22c);
    *(undefined4 *)(in_ECX + 0x3c) = *puVar2;
    *(undefined4 *)(in_ECX + 0x40) = puVar2[1];
    ExceptionList = local_10;
    return;
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  pcVar3 = (char *)(param_1 + 0x22c);
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_10;
  FUN_00409350((char *)(param_1 + 0x22c),(int)pcVar3 - (param_1 + 0x22d));
  local_8 = 0;
  FUN_00576f80();
  iVar4 = FUN_0057b0a0(local_34);
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  if (iVar4 != 0) {
    *(int *)(in_ECX + 0x48) = iVar4;
  }
  ExceptionList = local_10;
  return;
}

