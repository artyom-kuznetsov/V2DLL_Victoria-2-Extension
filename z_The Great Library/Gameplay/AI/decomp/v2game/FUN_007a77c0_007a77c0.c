// FUN_007a77c0 @ 007a77c0 body=[[007a77c0, 007a7854]]


void FUN_007a77c0(void)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int in_ECX;
  byte *pbVar4;
  int unaff_ESI;
  bool bVar5;
  
  if (*(char *)(unaff_ESI + 0x3c4) != '\0') {
    (**(code **)(*(int *)(*(int *)(unaff_ESI + 0x3bc) + 0x18) + 0x34))();
                    /* WARNING: Could not recover jumptable at 0x007a7853. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(unaff_ESI + 0x3bc) + 0x2c))();
    return;
  }
  pbVar2 = (byte *)(in_ECX + 0x70);
  if (0xf < *(uint *)(in_ECX + 0x84)) {
    pbVar2 = *(byte **)pbVar2;
  }
  pbVar4 = &DAT_00ded94d;
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_007a7800:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_007a7805;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_007a7800;
    pbVar2 = pbVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_007a7805:
  if (iVar3 == 0) {
    FUN_007a7860(unaff_ESI);
    return;
  }
  *(int *)(unaff_ESI + 0x3d8) = in_ECX;
  (**(code **)(*(int *)(*(int *)(unaff_ESI + 0x3bc) + 0x18) + 0x34))();
                    /* WARNING: Could not recover jumptable at 0x007a7834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(unaff_ESI + 0x3bc) + 0x2c))();
  return;
}

