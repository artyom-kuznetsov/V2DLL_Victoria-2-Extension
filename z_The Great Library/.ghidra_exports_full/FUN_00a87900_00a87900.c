// FUN_00a87900 @ 00a87900 body=[[00a87900, 00a87b36] [00a87b3a, 00a87bd7] [00a87bdb, 00a87cd5] [00a87cd9, 00a87cf3] [00a87cf7, 00a87d11] [00a87d15, 00a87d32] [00a87d36, 00a87d5c] [00a87d60, 00a87d89] [00a87d8d, 00a87db6] [00a87dba, 00a87dce]]


/* WARNING: Removing unreachable block (ram,0x00a87bcf) */
/* WARNING: Removing unreachable block (ram,0x00a87b2e) */

undefined4 *
FUN_00a87900(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  byte bVar1;
  undefined4 *puVar2;
  char cVar3;
  byte *pbVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  char *pcVar11;
  bool bVar12;
  uint in_stack_0000002c;
  uint in_stack_00000034;
  undefined4 in_stack_00000044;
  uint in_stack_00000048;
  uint in_stack_00000050;
  undefined4 in_stack_00000060;
  uint in_stack_00000064;
  uint in_stack_0000006c;
  undefined4 in_stack_0000007c;
  uint in_stack_00000080;
  uint in_stack_00000088;
  undefined4 in_stack_00000098;
  uint in_stack_0000009c;
  uint in_stack_000000a4;
  undefined4 in_stack_000000b4;
  uint in_stack_000000b8;
  undefined4 in_stack_000000c0;
  undefined8 in_stack_000000c4;
  undefined4 in_stack_000000cc;
  undefined4 in_stack_000000d0;
  uint in_stack_000000e4;
  undefined8 local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4df4e;
  local_10 = ExceptionList;
  local_8 = 6;
  ExceptionList = &local_10;
  FUN_009ee0b0(param_1,param_3);
  param_1[0x27] = param_5;
  param_1[0x28] = param_5;
  *(undefined8 *)(param_1 + 0x29) = in_stack_000000c4;
  *param_1 = &PTR_FUN_00e447e8;
  param_1[0x15] = &PTR_LAB_00e44900;
  param_1[0x25] = param_2;
  param_1[0x26] = in_stack_000000c0;
  param_1[0x2b] = in_stack_000000cc;
  param_1[0x2e] = 0;
  local_8._0_1_ = 8;
  param_1[0x35] = 0xf;
  param_1[0x34] = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  FUN_00408ed0(&stack0x00000034,0,0xffffffff);
  local_8._0_1_ = 9;
  param_1[0x3c] = 0xf;
  param_1[0x3b] = 0;
  *(undefined1 *)(param_1 + 0x37) = 0;
  FUN_00408ed0(&stack0x00000050,0,0xffffffff);
  local_8._0_1_ = 10;
  param_1[0x43] = 0xf;
  param_1[0x42] = 0;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  FUN_00408ed0(&stack0x0000006c,0,0xffffffff);
  local_8._0_1_ = 0xb;
  param_1[0x4a] = 0xf;
  param_1[0x49] = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  FUN_00408ed0(&stack0x00000088,0,0xffffffff);
  local_8._0_1_ = 0xc;
  if ((uint)param_1[0x35] < 0x10) {
    pbVar4 = (byte *)(param_1 + 0x30);
  }
  else {
    pbVar4 = (byte *)param_1[0x30];
  }
  pbVar10 = &DAT_00ded94d;
  do {
    bVar1 = *pbVar4;
    bVar12 = bVar1 < *pbVar10;
    if (bVar1 != *pbVar10) {
LAB_00a87a60:
      iVar5 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      goto LAB_00a87a65;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar12 = bVar1 < pbVar10[1];
    if (bVar1 != pbVar10[1]) goto LAB_00a87a60;
    pbVar4 = pbVar4 + 2;
    pbVar10 = pbVar10 + 2;
  } while (bVar1 != 0);
  iVar5 = 0;
LAB_00a87a65:
  if (iVar5 != 0) {
    if ((uint)param_1[0x35] < 0x10) {
      pbVar4 = (byte *)(param_1 + 0x30);
    }
    else {
      pbVar4 = (byte *)param_1[0x30];
    }
    pcVar11 = "NOTOOLTIP";
    do {
      bVar1 = *pbVar4;
      bVar12 = bVar1 < (byte)*pcVar11;
      if (bVar1 != *pcVar11) {
LAB_00a87aa5:
        iVar5 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
        goto LAB_00a87aaa;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar12 = bVar1 < (byte)pcVar11[1];
      if (bVar1 != pcVar11[1]) goto LAB_00a87aa5;
      pbVar4 = pbVar4 + 2;
      pcVar11 = pcVar11 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_00a87aaa:
    if (iVar5 != 0) goto LAB_00a87ab4;
  }
  param_1[0x2f] = 0;
LAB_00a87ab4:
  piVar8 = (int *)param_1[0x26];
  piVar6 = (int *)FUN_005c2ad0(param_4);
  uVar7 = (**(code **)(*piVar6 + 0x48))();
  (**(code **)(*piVar8 + 0x10))(uVar7);
  param_1[0x2c] = uVar7;
  FUN_00409350(&DAT_00ded94d,0);
  local_8._0_1_ = 0xd;
  cVar3 = FUN_00416db0();
  local_8._0_1_ = 0xc;
  if (cVar3 == '\0') {
    iVar5 = FUN_00973bd0(&stack0x000000a4);
    if (iVar5 == 0) {
      iVar5 = FUN_00973bd0(&stack0x000000a4);
    }
    param_1[0x2d] = iVar5;
    (**(code **)(*(int *)param_1[0x2c] + 0xec))(param_2,&stack0x00000088,iVar5,2);
  }
  else {
    FUN_00409350(&DAT_00ded94d,0);
    local_8._0_1_ = 0xe;
    cVar3 = FUN_00416db0();
    local_8._0_1_ = 0xc;
    if (cVar3 == '\0') {
      (**(code **)(*(int *)param_1[0x2c] + 0xc4))(&stack0x000000d0);
    }
  }
  FUN_0099a5c0(param_1[0x2c],param_1);
  *(undefined8 *)(param_1 + 0x29) = in_stack_000000c4;
  local_14 = in_stack_000000cc;
  param_1[0x2b] = in_stack_000000cc;
  local_1c = in_stack_000000c4;
  (**(code **)(*(int *)param_1[0x2c] + 0xa8))(0,0,0,&local_1c);
  piVar8 = DAT_00f20c18;
  *(undefined1 *)((int)param_1 + 0x3a) = 0;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  param_1[0x1d] = 0;
  if (piVar8 == (int *)0x0) {
    piVar8 = (int *)FUN_00aae9af(4);
    if (piVar8 == (int *)0x0) {
      piVar8 = (int *)0x0;
      DAT_00f20c18 = piVar8;
    }
    else {
      *piVar8 = (int)&PTR_FUN_00e38b28;
      DAT_00f20c18 = piVar8;
    }
  }
  puVar9 = (undefined4 *)(**(code **)(*piVar8 + 4))();
  puVar2 = (undefined4 *)param_1[0x2e];
  if ((puVar9 != puVar2) && (puVar2 != (undefined4 *)0x0)) {
    (**(code **)*puVar2)(1);
  }
  param_1[0x2e] = puVar9;
  (**(code **)(*(int *)param_1[0x2c] + 0x5c))(1);
  if (0xf < in_stack_0000002c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_6);
  }
  if (0xf < in_stack_00000048) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_stack_00000034);
  }
  in_stack_00000048 = 0xf;
  in_stack_00000044 = 0;
  in_stack_00000034 = in_stack_00000034 & 0xffffff00;
  if (0xf < in_stack_00000064) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_stack_00000050);
  }
  in_stack_00000064 = 0xf;
  in_stack_00000060 = 0;
  in_stack_00000050 = in_stack_00000050 & 0xffffff00;
  if (0xf < in_stack_00000080) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_stack_0000006c);
  }
  in_stack_00000080 = 0xf;
  in_stack_0000007c = 0;
  in_stack_0000006c = in_stack_0000006c & 0xffffff00;
  if (0xf < in_stack_0000009c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_stack_00000088);
  }
  in_stack_0000009c = 0xf;
  in_stack_00000098 = 0;
  in_stack_00000088 = in_stack_00000088 & 0xffffff00;
  if (0xf < in_stack_000000b8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_stack_000000a4);
  }
  in_stack_000000b8 = 0xf;
  in_stack_000000b4 = 0;
  in_stack_000000a4 = in_stack_000000a4 & 0xffffff00;
  if (0xf < in_stack_000000e4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_stack_000000d0);
  }
  ExceptionList = local_10;
  return param_1;
}

