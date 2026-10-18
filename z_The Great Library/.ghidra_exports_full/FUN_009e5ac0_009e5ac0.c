// FUN_009e5ac0 @ 009e5ac0 body=[[009e5ac0, 009e5b15]]


void FUN_009e5ac0(void)

{
  byte bVar1;
  int in_ECX;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  
  pbVar2 = (byte *)(in_ECX + 0x498);
  if (0xf < *(uint *)(in_ECX + 0x4ac)) {
    pbVar2 = *(byte **)pbVar2;
  }
  pbVar4 = &DAT_00ded94d;
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_009e5b00:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_009e5b05;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_009e5b00;
    pbVar2 = pbVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_009e5b05:
  if (iVar3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x009e5b13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 0x30) + 0x18))();
  return;
}

