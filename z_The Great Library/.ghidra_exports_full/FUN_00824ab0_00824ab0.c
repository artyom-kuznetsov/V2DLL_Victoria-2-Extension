// FUN_00824ab0 @ 00824ab0 body=[[00824ab0, 00824c05]]


void FUN_00824ab0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  float in_XMM0_Da;
  int local_8;
  
  FUN_00824c10(param_1,param_2);
  iVar3 = DAT_012588e8;
  if (0.0 < in_XMM0_Da) {
    piVar1 = (int *)(param_1 + 0x98);
    piVar4 = (int *)*piVar1;
    if (piVar4 != (int *)0x0) {
      do {
        if (*(int *)(*piVar4 + 0x58) == *(int *)(param_2 + 0x58)) {
          return;
        }
        piVar4 = (int *)piVar4[3];
      } while (piVar4 != (int *)0x0);
    }
    piVar4 = *(int **)(param_1 + 0x88);
    do {
      if (piVar4 < *(int **)(param_1 + 0x88)) {
        return;
      }
      if (*(int **)(param_1 + 0x8c) <= piVar4) {
        return;
      }
      iVar2 = *piVar4;
      piVar4 = piVar4 + 1;
      FUN_0049b7f0(&local_8,*(undefined4 *)(*(int *)(*(int *)(iVar3 + 0xacc) + iVar2 * 4) + 0x58),0)
      ;
    } while (*(int *)(*(int *)(DAT_012586dc + 0x20) + 0xc0) < local_8);
    for (iVar3 = *piVar1; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0xc)) {
      if (*(float *)(iVar3 + 4) < in_XMM0_Da) {
        FUN_00825a50(piVar1,iVar3);
        return;
      }
    }
    iVar3 = *(int *)(param_1 + 0x9c);
    piVar4 = (int *)FUN_00aae9af(0x14);
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      *piVar4 = param_2;
      piVar4[1] = (int)in_XMM0_Da;
      piVar4[2] = iVar3;
      piVar4[3] = 0;
      *(undefined1 *)(piVar4 + 4) = 0;
    }
    iVar2 = *(int *)(param_1 + 0xa0);
    *(int **)(param_1 + 0x9c) = piVar4;
    *(int *)(param_1 + 0xa0) = iVar2 + 1;
    if (iVar2 != 0) {
      *(int **)(iVar3 + 0xc) = piVar4;
      return;
    }
    *piVar1 = (int)piVar4;
  }
  return;
}

