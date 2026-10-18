// FUN_00a7d470 @ 00a7d470 body=[[00a7d470, 00a7d555]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

int FUN_00a7d470(void)

{
  undefined1 *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *in_EAX;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbStack_20;
  int iStack_1c;
  byte *pbStack_18;
  
  uVar7 = (uint)*in_EAX;
  bVar2 = in_EAX[uVar7 + 1];
  pbStack_20 = in_EAX + 1;
  in_EAX[uVar7 + 1] = 0;
  pbVar8 = in_EAX + uVar7 + 2;
  if (bVar2 == 0x66) {
    iVar9 = *(int *)pbVar8;
    pbStack_18 = pbVar8 + 4;
    iStack_1c = iVar9;
    FUN_00a7c580();
    return uVar7 + 6 + iVar9 * 4;
  }
  if (bVar2 == 0x69) {
    iVar9 = *(int *)pbVar8;
    pbStack_18 = pbVar8 + 4;
    iStack_1c = iVar9;
    FUN_00a7c770();
    return uVar7 + 6 + iVar9 * 4;
  }
  if (bVar2 == 0x73) {
    iVar3 = *(int *)pbVar8;
    iVar9 = uVar7 + 6;
    pbVar8 = pbVar8 + 4;
    pbStack_18 = (byte *)0xa7d4ce;
    iVar5 = -(iVar3 * 4 + 8);
    *(undefined4 *)(&stack0xffffffec + iVar5) = 0xa110ca7e;
    puVar1 = &stack0xfffffff0 + iVar5;
    iVar6 = 0;
    *(undefined4 *)(puVar1 + iVar3 * 4) = 0xa110ca7e;
    if (0 < iVar3) {
      do {
        iVar4 = *(int *)pbVar8;
        *(byte **)(puVar1 + iVar6 * 4) = pbVar8 + 4;
        iVar6 = iVar6 + 1;
        pbVar8 = pbVar8 + 4 + iVar4;
        iVar9 = iVar9 + 4 + iVar4;
      } while (iVar6 < iVar3);
    }
    *(undefined1 **)((int)&pbStack_18 + iVar5) = puVar1;
    *(byte **)((int)&iStack_1c + iVar5) = pbStack_20;
    *(undefined4 *)((int)&pbStack_20 + iVar5) = 0xa7d508;
    FUN_00a7c960();
    return iVar9;
  }
  return 0;
}

