// FUN_00867500 @ 00867500 body=[[00867500, 0086763a]]


undefined4 FUN_00867500(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  int unaff_ESI;
  
  uVar6 = *(uint *)(unaff_ESI + 0xa0);
  if ((int)uVar6 < 0) {
    uVar1 = *(uint *)(unaff_ESI + 0x98);
  }
  else {
    uVar1 = *(uint *)(unaff_ESI + 0x98);
    if (uVar6 < uVar1) {
      FUN_008682f0();
      cVar4 = FUN_008626d0();
      if (cVar4 == '\0') {
        FUN_008682f0();
        FUN_008668c0();
        piVar5 = (int *)FUN_008682f0();
        uVar2 = *(undefined4 *)(*piVar5 + 0x74c);
        uVar6 = *(int *)(unaff_ESI + 0xa0) + 1;
        *(uint *)(unaff_ESI + 0xa0) = uVar6;
        if (*(uint *)(unaff_ESI + 0x98) <= uVar6) {
          return 1;
        }
        piVar5 = (int *)FUN_008682f0();
        iVar3 = *piVar5;
        *(undefined4 *)(iVar3 + 0x900) = uVar2;
        *(undefined4 *)(iVar3 + 0x74c) = uVar2;
        *(undefined4 *)(unaff_ESI + 0xa4) = uVar2;
        puVar7 = (undefined4 *)FUN_008682f0();
        FUN_00862960(*puVar7);
        return 0;
      }
      piVar5 = (int *)FUN_008682f0();
      if (*(char *)(*piVar5 + 8) == '\0') {
        piVar5 = (int *)FUN_008682f0();
        if (*(char *)(*piVar5 + 0x749) == '\0') {
          return 0;
        }
        FUN_008682f0();
        FUN_008668c0();
        piVar5 = (int *)FUN_008682f0();
        *(undefined4 *)(unaff_ESI + 0xa4) = *(undefined4 *)(*piVar5 + 0x74c);
        return 1;
      }
      goto LAB_008675cc;
    }
  }
  if (uVar6 != uVar1) {
    return 0;
  }
LAB_008675cc:
  *(undefined4 *)(unaff_ESI + 0xa4) = 3;
  return 1;
}

