// FUN_00976f50 @ 00976f50 body=[[00976f50, 00976fa3] [00976fa7, 00976ff3] [00976ff7, 00977043] [00977047, 0097707d]]


undefined4 FUN_00976f50(byte *param_1)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  uint in_stack_00000018;
  
  pbVar3 = param_1;
  if (in_stack_00000018 < 0x10) {
    pbVar3 = (byte *)&param_1;
  }
  pbVar5 = &DAT_00e369e0;
  do {
    bVar1 = *pbVar3;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00976f90:
      iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00976f95;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00976f90;
    pbVar3 = pbVar3 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_00976f95:
  if (iVar4 == 0) {
    if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_1);
    }
    return 0;
  }
  pbVar3 = param_1;
  if (in_stack_00000018 < 0x10) {
    pbVar3 = (byte *)&param_1;
  }
  pbVar5 = &DAT_00e369e4;
  do {
    bVar1 = *pbVar3;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00976fe0:
      iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00976fe5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00976fe0;
    pbVar3 = pbVar3 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_00976fe5:
  if (iVar4 == 0) {
    if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_1);
    }
    return 1;
  }
  pbVar3 = param_1;
  if (in_stack_00000018 < 0x10) {
    pbVar3 = (byte *)&param_1;
  }
  pbVar5 = &DAT_00e369e8;
  do {
    bVar1 = *pbVar3;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00977030:
      iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00977035;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00977030;
    pbVar3 = pbVar3 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_00977035:
  if (iVar4 != 0) {
    cVar2 = FUN_0040b360();
    if (cVar2 != '\0') {
      FUN_00408ad0();
      return 3;
    }
    FUN_00408ad0();
    return 0xffffffff;
  }
  if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1);
  }
  return 2;
}

