// FUN_009ea620 @ 009ea620 body=[[009ea620, 009ea6b6]]


void FUN_009ea620(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int in_ECX;
  int iVar4;
  
  if ((&DAT_00f20c60)[param_1] != 0) {
    iVar4 = *(int *)(in_ECX + 0x10);
    piVar2 = (int *)FUN_00aae9af(0x10);
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      *piVar2 = param_1;
      piVar2[1] = iVar4;
      piVar2[2] = 0;
      *(undefined1 *)(piVar2 + 3) = 0;
    }
    iVar1 = *(int *)(in_ECX + 0x14);
    *(int **)(in_ECX + 0x10) = piVar2;
    *(int *)(in_ECX + 0x14) = iVar1 + 1;
    if (iVar1 == 0) {
      *(int **)(in_ECX + 0xc) = piVar2;
    }
    else {
      *(int **)(iVar4 + 8) = piVar2;
    }
    if ((&DAT_00f21460)[param_1] != 0) {
      puVar3 = &DAT_00f40c60 + param_1 * 4;
      iVar4 = 0x40;
      do {
        *puVar3 = 2;
        puVar3 = puVar3 + 0x800;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      return;
    }
    (&DAT_00f40c60)[param_1 * 4] = 2;
  }
  return;
}

