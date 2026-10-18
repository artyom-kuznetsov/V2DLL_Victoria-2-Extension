// FUN_00b28840 @ 00b28840 body=[[00b28840, 00b288d3]]


char * FUN_00b28840(short *param_1)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  pcVar4 = (char *)0x0;
  if (param_1 != (short *)0x0) {
    uVar3 = 0;
    iVar7 = 0;
    sVar2 = *param_1;
    psVar6 = param_1;
    while (sVar2 != 0) {
      psVar6 = psVar6 + 1;
      bVar9 = 0xfffffffe < uVar3;
      uVar3 = uVar3 + 1;
      iVar7 = iVar7 + (uint)bVar9;
      sVar2 = *psVar6;
    }
    iVar8 = uVar3 * 4 + 1;
    iVar7 = (iVar7 << 2 | uVar3 >> 0x1e) + (uint)(0xfffffffe < uVar3 * 4);
    pcVar4 = (char *)(*DAT_013f3aa8)(iVar8,iVar7);
    if (pcVar4 == (char *)0x0) {
      FUN_00b1f840("Out of memory");
      return (char *)0x0;
    }
    PHYSFS_utf8FromUcs2(param_1,pcVar4,iVar8,iVar7);
    pcVar5 = pcVar4;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    pcVar5 = (char *)(*DAT_013f3aac)(pcVar4,pcVar5 + (1 - (int)(pcVar4 + 1)),0);
    if (pcVar5 != (char *)0x0) {
      pcVar4 = pcVar5;
    }
  }
  return pcVar4;
}

