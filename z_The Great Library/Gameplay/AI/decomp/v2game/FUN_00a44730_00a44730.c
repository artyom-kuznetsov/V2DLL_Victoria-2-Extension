// FUN_00a44730 @ 00a44730 body=[[00a44730, 00a44783]]


void FUN_00a44730(void)

{
  int *piVar1;
  int in_ECX;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(in_ECX + 0x224);
  iVar3 = 0;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  *(undefined4 *)(in_ECX + 0x224) = 0;
  if (0 < *(int *)(in_ECX + 0x94)) {
    piVar2 = (int *)(in_ECX + 0x1c0);
    do {
      piVar1 = (int *)*piVar2;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      *piVar2 = 0;
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < *(int *)(in_ECX + 0x94));
  }
  return;
}

