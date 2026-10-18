// FUN_006e21a0 @ 006e21a0 body=[[006e21a0, 006e222d]]


int FUN_006e21a0(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  piVar1 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4) +
                    0xe44);
  iVar4 = 0;
  do {
    do {
      while( true ) {
        do {
          if (piVar1 == (int *)0x0) {
            return iVar4;
          }
          iVar2 = *piVar1;
          piVar1 = (int *)piVar1[2];
        } while (*(int *)(iVar2 + 0x244) == 4);
        if (*(int *)(iVar2 + 0x228) == 0 && *(int *)(iVar2 + 0x22c) == 0) break;
LAB_006e2222:
        iVar4 = iVar4 + 1;
      }
      iVar6 = 1;
      iVar5 = *(int *)(iVar2 + 0x21c) - *(int *)(iVar2 + 0x218) >> 3;
    } while (iVar5 < 2);
    piVar3 = *(int **)(iVar2 + 0x218);
    do {
      if (piVar3[2] != 0 || piVar3[3] != 0) goto LAB_006e2222;
      iVar6 = iVar6 + 1;
      piVar3 = piVar3 + 2;
    } while (iVar6 < iVar5);
  } while( true );
}

