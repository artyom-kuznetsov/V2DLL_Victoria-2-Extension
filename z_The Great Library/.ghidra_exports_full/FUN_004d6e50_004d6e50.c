// FUN_004d6e50 @ 004d6e50 body=[[004d6e50, 004d7054] [004d7058, 004d706c]]


undefined4 * FUN_004d6e50(undefined4 *param_1,byte *param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int iVar5;
  char *pcVar6;
  bool bVar7;
  uint in_stack_0000001c;
  undefined4 in_stack_00000024;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b53ac6;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_0044bc60(param_1);
  *param_1 = CTerrain::vftable;
  param_1[0xc] = in_stack_00000024;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  uVar3 = DAT_00f092fc;
  local_8 = CONCAT31(local_8._1_3_,3);
  param_1[0x16] = 0x18d;
  param_1[0x15] = CColor::vftable;
  param_1[0x17] = uVar3;
  param_1[0x18] = uVar3;
  param_1[0x19] = uVar3;
  param_1[0x1a] = uVar3;
  *(undefined1 *)(param_1 + 0x1b) = 1;
  param_1[0x21] = 0xf;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  FUN_00408ed0(&param_2,0,0xffffffff);
  FUN_00401000(0x3f000000);
  uVar3 = FUN_00b31c00();
  param_1[0x23] = uVar3;
  *(undefined1 *)(param_1 + 0x24) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined2 *)(param_1 + 0x29) = 0;
  pbVar4 = param_2;
  if (in_stack_0000001c < 0x10) {
    pbVar4 = (byte *)&param_2;
  }
  pcVar6 = "plains";
  do {
    bVar1 = *pbVar4;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_004d6f75:
      iVar5 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_004d6f7a;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_004d6f75;
    pbVar4 = pbVar4 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  iVar5 = 0;
LAB_004d6f7a:
  if (iVar5 == 0) {
    *(undefined1 *)((int)param_1 + 0xa1) = 1;
  }
  else {
    pbVar4 = param_2;
    if (in_stack_0000001c < 0x10) {
      pbVar4 = (byte *)&param_2;
    }
    pcVar6 = "mountain";
    do {
      bVar1 = *pbVar4;
      bVar7 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_004d6fc0:
        iVar5 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_004d6fc5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar7 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_004d6fc0;
      pbVar4 = pbVar4 + 2;
      pcVar6 = pcVar6 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_004d6fc5:
    if (iVar5 == 0) {
      *(undefined1 *)((int)param_1 + 0xa2) = 1;
    }
    else {
      pbVar4 = param_2;
      if (in_stack_0000001c < 0x10) {
        pbVar4 = (byte *)&param_2;
      }
      pcVar6 = "urban";
      do {
        bVar1 = *pbVar4;
        bVar7 = bVar1 < (byte)*pcVar6;
        if (bVar1 != *pcVar6) {
LAB_004d7002:
          iVar5 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_004d7007;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar7 = bVar1 < (byte)pcVar6[1];
        if (bVar1 != pcVar6[1]) goto LAB_004d7002;
        pbVar4 = pbVar4 + 2;
        pcVar6 = pcVar6 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_004d7007:
      if (iVar5 == 0) {
        *(undefined1 *)((int)param_1 + 0xa3) = 1;
      }
      else {
        cVar2 = FUN_0040b360();
        if (cVar2 == '\0') {
          cVar2 = FUN_0040b360();
          if (cVar2 != '\0') {
            *(undefined1 *)((int)param_1 + 0xa5) = 1;
          }
        }
        else {
          *(undefined1 *)(param_1 + 0x29) = 1;
        }
      }
    }
  }
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_2);
  }
  ExceptionList = local_10;
  return param_1;
}

