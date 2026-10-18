// FUN_00a80b60 @ 00a80b60 body=[[00a80b60, 00a80bec] [00a80bf0, 00a80cbf]]


undefined4 FUN_00a80b60(undefined4 param_1,char *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 uVar4;
  char ****ppppcVar5;
  char ***local_20 [4];
  undefined4 local_10;
  uint local_c;
  
  puVar2 = (undefined4 *)FUN_00aae9af(0x90);
  if (param_2 != (char *)0x0) {
    pcVar3 = param_2;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    uVar4 = FUN_00aad56b(pcVar3 + (1 - (int)(param_2 + 1)));
    *puVar2 = uVar4;
    local_c = 0xf;
    local_10 = 0;
    local_20[0] = (char ***)((uint)local_20[0] & 0xffffff00);
    pcVar3 = param_2;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(param_2,(int)pcVar3 - (int)(param_2 + 1));
    ppppcVar5 = (char ****)local_20[0];
    if (local_c < 0x10) {
      ppppcVar5 = local_20;
    }
    pcVar3 = (char *)*puVar2;
    do {
      cVar1 = *(char *)ppppcVar5;
      *pcVar3 = cVar1;
      ppppcVar5 = (char ****)((int)ppppcVar5 + 1);
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (0xf < local_c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_20[0]);
    }
  }
  uVar4 = DAT_00f092fc;
  puVar2[0xf] = 0;
  puVar2[0xe] = 0;
  puVar2[0xd] = 0;
  puVar2[0xc] = 0;
  puVar2[10] = 0;
  puVar2[9] = 0;
  puVar2[8] = 0;
  puVar2[7] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[0x10] = uVar4;
  puVar2[0xb] = uVar4;
  puVar2[6] = uVar4;
  puVar2[1] = uVar4;
  puVar2[0x11] = 0;
  puVar2[0x12] = 0;
  puVar2[0x13] = 0;
  puVar2[0x22] = 0;
  puVar2[0x21] = 0;
  puVar2[0x20] = 0;
  puVar2[0x1f] = 0;
  puVar2[0x1d] = 0;
  puVar2[0x1c] = 0;
  puVar2[0x1b] = 0;
  puVar2[0x1a] = 0;
  puVar2[0x18] = 0;
  puVar2[0x17] = 0;
  puVar2[0x16] = 0;
  puVar2[0x15] = 0;
  puVar2[0x23] = uVar4;
  puVar2[0x1e] = uVar4;
  puVar2[0x19] = uVar4;
  puVar2[0x14] = uVar4;
  *param_3 = puVar2;
  return 0;
}

