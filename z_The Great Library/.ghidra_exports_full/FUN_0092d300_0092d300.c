// FUN_0092d300 @ 0092d300 body=[[0092d300, 0092d3b4]]


void FUN_0092d300(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int in_ECX;
  
  if (((int)((double)((*(int *)(in_ECX + 0x1c) + -43800000) / 0x18) / 365.0) < 2) ||
     (*(int *)(DAT_012588e8 + 0xb0c) <= *(int *)(in_ECX + 0x1c))) {
    iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0xc) * 4) +
                             0xbe8) + *(int *)(in_ECX + 0x14) * 4);
    *(undefined1 *)(iVar1 + 0x71) = 1;
    iVar2 = *(int *)(iVar1 + 0x54);
    piVar4 = (int *)FUN_00aae9af(0x10);
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      *piVar4 = in_ECX;
      piVar4[1] = iVar2;
      piVar4[2] = 0;
      *(undefined1 *)(piVar4 + 3) = 0;
    }
    iVar3 = *(int *)(iVar1 + 0x58);
    *(int **)(iVar1 + 0x54) = piVar4;
    *(int *)(iVar1 + 0x58) = iVar3 + 1;
    if (iVar3 != 0) {
      *(int **)(iVar2 + 8) = piVar4;
      return;
    }
    *(int **)(iVar1 + 0x50) = piVar4;
  }
  return;
}

