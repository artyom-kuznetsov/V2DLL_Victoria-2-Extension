// FUN_004d2260 @ 004d2260 body=[[004d2260, 004d229f]]


void FUN_004d2260(void)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  undefined4 in_EDX;
  
  iVar1 = DAT_012588e8;
  for (piVar2 = *(int **)(in_ECX + 0x48);
      (*(int **)(in_ECX + 0x48) <= piVar2 && (piVar2 < *(int **)(in_ECX + 0x4c)));
      piVar2 = piVar2 + 1) {
    *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0xacc) + *piVar2 * 4) + 400) = in_EDX;
  }
  *(undefined4 *)(in_ECX + 0x84) = in_EDX;
  return;
}

