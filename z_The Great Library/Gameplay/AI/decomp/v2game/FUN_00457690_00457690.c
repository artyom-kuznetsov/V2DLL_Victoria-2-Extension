// FUN_00457690 @ 00457690 body=[[00457690, 004576f4] [004576f8, 00457743] [00457747, 00457793] [00457797, 004577aa] [004577ae, 004577b6]]


undefined4 FUN_00457690(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  DWORD in_stack_00000014;
  uint in_stack_00000018;
  
  pbVar2 = param_1;
  if (in_stack_00000018 < 0x10) {
    pbVar2 = (byte *)&param_1;
  }
  CharLowerBuffA((LPSTR)pbVar2,in_stack_00000014);
  pbVar2 = param_1;
  if (in_stack_00000018 < 0x10) {
    pbVar2 = (byte *)&param_1;
  }
  pcVar4 = "large";
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_004576e1:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_004576e6;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_004576e1;
    pbVar2 = pbVar2 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_004576e6:
  if (iVar3 == 0) {
    if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_1);
    }
    return 0;
  }
  pbVar2 = param_1;
  if (in_stack_00000018 < 0x10) {
    pbVar2 = (byte *)&param_1;
  }
  pcVar4 = "medium";
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_00457730:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_00457735;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_00457730;
    pbVar2 = pbVar2 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00457735:
  if (iVar3 == 0) {
    if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_1);
    }
    return 1;
  }
  pbVar2 = param_1;
  if (in_stack_00000018 < 0x10) {
    pbVar2 = (byte *)&param_1;
  }
  pcVar4 = "small";
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_00457780:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_00457785;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_00457780;
    pbVar2 = pbVar2 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00457785:
  if (iVar3 != 0) {
    if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_1);
    }
    return 3;
  }
  if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1);
  }
  return 2;
}

