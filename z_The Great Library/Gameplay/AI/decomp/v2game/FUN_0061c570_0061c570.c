// FUN_0061c570 @ 0061c570 body=[[0061c570, 0061c6ad]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_0061c570(int *param_1)

{
  byte bVar1;
  code *pcVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  bool bVar11;
  int aiStack_38 [2];
  undefined1 auStack_30 [4];
  int iStack_2c;
  undefined4 local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9a5b6;
  local_10 = ExceptionList;
  iStack_2c = 0x61c59b;
  ExceptionList = &local_10;
  pbVar3 = (byte *)(**(code **)(*param_1 + 0x44))();
  if (0xf < *(uint *)(pbVar3 + 0x14)) {
    pbVar3 = *(byte **)pbVar3;
  }
  pcVar7 = "join_attackers";
  do {
    bVar1 = *pbVar3;
    bVar11 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_0061c5c8:
      iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_0061c5cd;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar11 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_0061c5c8;
    pbVar3 = pbVar3 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_0061c5cd:
  iVar5 = *(int *)(DAT_012588e8 + 0xb44);
  local_1c = CONCAT31(local_1c._1_3_,iVar4 == 0);
  iStack_2c = 0x61c5f6;
  iVar4 = iVar5 * -4;
  (&iStack_2c)[-iVar5] = iVar5;
  *(undefined1 **)(auStack_30 + iVar4) = &stack0xffffffd8 + iVar4;
  aiStack_38[1 - iVar5] = DAT_012588e8 + 0xb5c;
  aiStack_38[-iVar5] = 0x61c609;
  FUN_0061b0d0();
  pcVar2 = *(code **)(*param_1 + 0x80);
  piVar8 = &iStack_2c + -iVar5;
  (&iStack_2c)[-iVar5] = 0x61c619;
  iVar5 = (*pcVar2)();
  iVar4 = *(int *)(&stack0xffffffd8 + iVar5 * 4 + iVar4);
  *(undefined4 *)((int)piVar8 + -4) = 0x4c;
  *(undefined4 *)((int)piVar8 + -8) = 0x61c623;
  iVar5 = FUN_00aae9af();
  uVar10 = 0;
  local_8 = 0;
  if (iVar5 != 0) {
    *(undefined4 *)((int)piVar8 + -4) = local_1c;
    *(int *)((int)piVar8 + -8) = iVar4;
    *(int *)((int)piVar8 + -0xc) = iVar5;
    *(undefined4 *)((int)piVar8 + -0x10) = 0x61c649;
    uVar10 = FUN_00585a20();
  }
  *(undefined4 *)((int)piVar8 + -4) = 0x70;
  local_8 = 0xffffffff;
  *(undefined4 *)((int)piVar8 + -8) = 0x61c658;
  iVar5 = FUN_00aae9af();
  local_8 = 1;
  if (iVar5 == 0) {
    piVar6 = (int *)0x0;
  }
  else {
    *(int *)((int)piVar8 + -4) = iVar4 + 0x10;
    *(undefined4 *)((int)piVar8 + -8) = uVar10;
    *(int *)((int)piVar8 + -0xc) = iVar5;
    *(undefined4 *)((int)piVar8 + -0x10) = 0x61c67a;
    piVar6 = (int *)FUN_0061ac70();
  }
  local_8 = 0xffffffff;
  pcVar2 = *(code **)(*piVar6 + 0x28);
  puVar9 = (undefined1 *)((int)piVar8 + -4);
  *(undefined4 *)((int)piVar8 + -4) = 0x61c68c;
  (*pcVar2)();
  *(int **)(puVar9 + -4) = piVar6;
  *(undefined4 *)(puVar9 + -8) = 0x61c698;
  FUN_006480e0();
  ExceptionList = local_10;
  return;
}

