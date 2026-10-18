// FUN_005edaf0 @ 005edaf0 body=[[005edaf0, 005edbb3]]


void FUN_005edaf0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int in_ECX;
  
  iVar1 = param_1;
  if (*(int *)(in_ECX + 0x14) == 0) {
    iVar1 = *(int *)(in_ECX + 0x10);
    piVar3 = (int *)FUN_00aae9af(0x10);
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      *piVar3 = param_1;
      piVar3[1] = iVar1;
      piVar3[2] = 0;
      *(undefined1 *)(piVar3 + 3) = 0;
    }
    iVar2 = *(int *)(in_ECX + 0x14);
    *(int **)(in_ECX + 0x10) = piVar3;
    *(int *)(in_ECX + 0x14) = iVar2 + 1;
    if (iVar2 != 0) {
      *(int **)(iVar1 + 8) = piVar3;
      return;
    }
    *(int **)(in_ECX + 0xc) = piVar3;
    return;
  }
  piVar3 = *(int **)(in_ECX + 0x10);
  if (*(int *)(param_1 + 8) < *(int *)(*piVar3 + 8)) {
    FUN_005f2ba0(in_ECX + 0xc,&param_1);
    return;
  }
  piVar4 = (int *)FUN_00aae9af(0x10);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    *piVar4 = iVar1;
    piVar4[1] = (int)piVar3;
    piVar4[2] = 0;
    *(undefined1 *)(piVar4 + 3) = 0;
  }
  iVar1 = *(int *)(in_ECX + 0x14);
  *(int **)(in_ECX + 0x10) = piVar4;
  *(int *)(in_ECX + 0x14) = iVar1 + 1;
  if (iVar1 != 0) {
    piVar3[2] = (int)piVar4;
    return;
  }
  *(int **)(in_ECX + 0xc) = piVar4;
  return;
}

