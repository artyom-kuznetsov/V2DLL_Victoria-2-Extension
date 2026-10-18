// FUN_00900450 @ 00900450 body=[[00900450, 00900581]]


bool FUN_00900450(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  int in_ECX;
  int iVar7;
  int iVar8;
  
  cVar4 = (**(code **)(**(int **)(param_1 + 0x14) + 0x20))();
  if (cVar4 != '\0') {
    iVar5 = *(int *)(param_1 + 0x14);
    iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(*(int *)(iVar5 + 100) + 300) * 4);
    uVar2 = *(uint *)(iVar5 + 0x180);
    iVar5 = *(int *)(iVar5 + 0x184);
    if ((0 < iVar5) || ((-1 < iVar5 && (uVar2 != 0)))) {
      __alldiv(uVar2 << 0xf,iVar5 << 0xf | uVar2 >> 0x11,DAT_0131a798,DAT_0131a79c);
      iVar5 = FUN_004dad40();
      iVar8 = 0;
      iVar7 = *(int *)(iVar5 + 0x10) - *(int *)(iVar5 + 0xc) >> 2;
      if (0 < iVar7) {
        piVar6 = *(int **)(iVar5 + 0xc);
        do {
          iVar5 = *piVar6;
          if (*(int *)(iVar5 + 0x10) == 0) {
            iVar3 = *(int *)(iVar1 + 0xbcc);
            if ((((*(char *)(*(int *)(iVar5 + 0x58) + *(int *)(iVar3 + 0x2fc)) != '\0') ||
                 (*(char *)(iVar5 + 0x130) != '\0')) &&
                ((*(char *)(iVar5 + 0x130) != '\0' ||
                 (0 < *(int *)(*(int *)(iVar3 + 8) + *(int *)(iVar5 + 0x58) * 4))))) &&
               (cVar4 = FUN_0043e920(), cVar4 != '\0')) {
              return (bool)*(undefined1 *)(in_ECX + 0x1c);
            }
          }
          iVar8 = iVar8 + 1;
          piVar6 = piVar6 + 1;
        } while (iVar8 < iVar7);
      }
    }
  }
  return *(char *)(in_ECX + 0x1c) == '\0';
}

