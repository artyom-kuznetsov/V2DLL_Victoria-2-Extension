// FUN_00a8d030 @ 00a8d030 body=[[00a8d030, 00a8d193]]


int FUN_00a8d030(void)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  int in_EAX;
  int iVar4;
  int iVar5;
  char *pcVar6;
  
  if (in_EAX == 0) {
    return -2;
  }
  piVar1 = *(int **)(in_EAX + 0x20);
  if ((piVar1 == (int *)0x0) || (*piVar1 != in_EAX)) {
    return -2;
  }
  iVar5 = piVar1[1];
  iVar4 = iVar5;
  do {
    if (iVar4 == 1) {
      return -1;
    }
    if (iVar5 == 2) {
      if ((char)piVar1[10] == '\0') {
        cVar3 = FUN_00a8c500();
      }
      else {
        cVar3 = FUN_00a8c9b0(piVar1);
      }
      if (cVar3 != '\0') {
        return -4;
      }
      if ((piVar1[0x110] != piVar1[0x3e90] + 1) || (piVar1[3] != 0)) {
        return 0;
      }
      uVar2 = piVar1[0x318];
      piVar1[0x318] = ~uVar2;
      if (2 < piVar1[0xc]) {
        pcVar6 = " {0x%08x, 0x%08x}";
        iVar4 = FUN_00aaf1e2(" {0x%08x, 0x%08x}",piVar1[0x316],~uVar2);
        _fprintf((FILE *)(iVar4 + 0x40),pcVar6);
      }
      if (1 < piVar1[0xc]) {
        pcVar6 = "]";
        iVar4 = FUN_00aaf1e2();
        _fprintf((FILE *)(iVar4 + 0x40),pcVar6);
      }
      if (piVar1[0x318] != piVar1[0x316]) {
        return -4;
      }
      piVar1[0x319] = (piVar1[0x319] << 1 | (uint)(piVar1[0x319] < 0)) ^ piVar1[0x318];
      piVar1[1] = 0xe;
LAB_00a8d120:
      iVar4 = FUN_00a8fd00(piVar1);
      if (iVar4 == 4) {
        if (2 < piVar1[0xc]) {
          pcVar6 = "\n    combined CRCs: stored = 0x%08x, computed = 0x%08x";
          iVar4 = FUN_00aaf1e2("\n    combined CRCs: stored = 0x%08x, computed = 0x%08x",
                               piVar1[0x317],piVar1[0x319]);
          _fprintf((FILE *)(iVar4 + 0x40),pcVar6);
        }
        return (uint)(piVar1[0x319] == piVar1[0x317]) * 8 + -4;
      }
      iVar5 = piVar1[1];
      if (iVar5 != 2) {
        return iVar4;
      }
    }
    else if (9 < iVar5) goto LAB_00a8d120;
    iVar4 = piVar1[1];
  } while( true );
}

