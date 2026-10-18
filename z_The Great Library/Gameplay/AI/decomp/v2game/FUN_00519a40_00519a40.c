// FUN_00519a40 @ 00519a40 body=[[00519a40, 00519ae2] [00519af0, 00519b5c] [00519b60, 00519bda]]


/* WARNING: Removing unreachable block (ram,0x00519a70) */

uint * FUN_00519a40(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  
  if (*(int *)(param_1 + 0xe2c) != *(int *)(param_1 + 0xe30)) {
    *(int *)(param_1 + 0xe30) = *(int *)(param_1 + 0xe2c);
  }
  piVar8 = *(int **)(param_1 + 0x9d8);
  do {
    if ((piVar8 < *(int **)(param_1 + 0x9d8)) || (*(int **)(param_1 + 0x9dc) <= piVar8)) {
      return (uint *)(param_1 + 0xe2c);
    }
    iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar8 * 4);
    if ((*(int *)(iVar1 + 0x134) == *(int *)(param_1 + 0x20)) &&
       (iVar1 != *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0xbe4) * 4))) {
      uVar9 = *(uint *)(iVar1 + 0x148);
      while ((*(uint *)(iVar1 + 0x148) <= uVar9 && (uVar9 < *(uint *)(iVar1 + 0x14c)))) {
        iVar2 = *(int *)(uVar9 + 4);
        iVar3 = *(int *)(*(int *)(DAT_012587e4 + 4) + iVar2 * 4);
        uVar9 = uVar9 + 8;
        if (((int)(*(int *)(iVar3 + 0x9dc) - *(int *)(iVar3 + 0x9d8) & 0xfffffffcU) < 1) &&
           (iVar2 != *(int *)(param_1 + 0x20))) {
          uVar4 = *(uint *)(param_1 + 0xe2c);
          for (uVar6 = uVar4;
              (uVar6 != *(uint *)(param_1 + 0xe30) && (*(int *)(uVar6 + 4) != iVar2));
              uVar6 = uVar6 + 8) {
          }
          if ((uVar6 < uVar4) || (*(uint *)(param_1 + 0xe30) <= uVar6)) {
            piVar5 = *(int **)(param_1 + 0x9dc);
            piVar7 = *(int **)(param_1 + 0x9d8);
            if (piVar7 != piVar5) {
              do {
                if (*piVar7 == *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + iVar2 * 4) + 0xbe4))
                break;
                piVar7 = piVar7 + 1;
              } while (piVar7 != piVar5);
              if (piVar7 != piVar5) {
                FUN_004d61d0();
              }
            }
          }
        }
      }
    }
    piVar8 = piVar8 + 1;
  } while( true );
}

