// FUN_00a65b90 @ 00a65b90 body=[[00a65b90, 00a65cee] [00a65cf2, 00a65d97] [00a65d9b, 00a65daa] [00a65dae, 00a65ddb] [00a65ddf, 00a65e0d] [00a65e11, 00a65e39] [00a65e3d, 00a65e51]]


void FUN_00a65b90(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  char ***cp;
  ulong uVar5;
  int in_ECX;
  char *pcVar6;
  undefined1 local_d8 [4];
  int local_d4;
  int local_d0;
  uint local_cc [4];
  undefined4 local_bc;
  uint local_b8;
  undefined4 local_b0;
  uint local_ac;
  undefined4 local_9c;
  uint local_98;
  ulong local_90;
  uint local_8c;
  undefined4 local_7c;
  uint local_78;
  undefined4 local_70;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  char **local_50 [5];
  uint local_3c;
  uint local_34;
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b523e1;
  local_14 = ExceptionList;
  local_d0 = in_ECX + 0x7c;
  ExceptionList = &local_14;
  if (*(int *)(in_ECX + 0x7c) != *(int *)(in_ECX + 0x80)) {
    ExceptionList = &local_14;
    local_d4 = FUN_00a6b790(*(int *)(in_ECX + 0x80),local_d0);
    FUN_00a6b5d0(local_d0);
    *(int *)(in_ECX + 0x80) = local_d4;
  }
  FUN_00768940(in_ECX + 0x8c);
  *(undefined4 *)(in_ECX + 0xc0) = 0;
  *(undefined1 *)(in_ECX + 0xb8) = 1;
  uVar2 = FUN_00a5fd70();
  local_98 = 0xf;
  local_9c = 0;
  local_ac = local_ac & 0xffffff00;
  FUN_00408ed0(uVar2,0,0xffffffff);
  local_c._0_1_ = 0;
  local_c._1_3_ = 0;
  local_d8[0] = 0x2e;
  iVar3 = FUN_0098a0d0(local_d8);
  FUN_009895f0(iVar3 + 1);
  local_d4 = 1;
  do {
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = local_6c[0] & 0xffffff00;
    local_c._0_1_ = 3;
    pcVar4 = __itoa(local_d4,(char *)&local_90,10);
    pcVar6 = pcVar4;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcVar4,(int)pcVar6 - (int)(pcVar4 + 1));
    local_c._0_1_ = 4;
    FUN_00988f20(local_6c);
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_6c[0]);
    }
    cp = (char ***)local_50[0];
    if (local_3c < 0x10) {
      cp = local_50;
    }
    uVar5 = inet_addr((char *)cp);
    local_b8 = 0xf;
    local_bc = 0;
    local_cc[0] = local_cc[0] & 0xffffff00;
    local_c._0_1_ = 7;
    FUN_00408ed0(local_50,0,0xffffffff);
    local_b0 = 0xffffffff;
    local_78 = 0xf;
    local_7c = 0;
    local_8c = local_8c & 0xffffff00;
    local_90 = uVar5;
    FUN_00408ed0(local_cc,0,0xffffffff);
    local_70 = local_b0;
    local_c._0_1_ = 8;
    FUN_00a6ae80();
    if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_8c);
    }
    if (0xf < local_b8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_cc[0]);
    }
    local_c._0_1_ = 2;
    local_b8 = 0xf;
    local_bc = 0;
    local_cc[0] = local_cc[0] & 0xffffff00;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
    local_d4 = local_d4 + 1;
  } while (local_d4 < 0x100);
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  if (0xf < local_98) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_ac);
  }
  ExceptionList = local_14;
  return;
}

