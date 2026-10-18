// FUN_007e1d60 @ 007e1d60 body=[[007e1d60, 007e1dac]]


void FUN_007e1d60(void)

{
  int *piVar1;
  undefined4 uVar2;
  int in_EAX;
  int in_ECX;
  int iVar3;
  undefined4 *unaff_EDI;
  
  if (in_ECX == 0) {
    in_ECX = 1;
  }
  piVar1 = *(int **)(in_EAX + 0x14);
  iVar3 = (in_ECX + -1) % (piVar1[1] - *piVar1 >> 3);
  uVar2 = *(undefined4 *)(piVar1[((in_ECX + -1) / (piVar1[1] - *piVar1 >> 3)) * 4] + 4 + iVar3 * 8);
  *unaff_EDI = *(undefined4 *)(piVar1[((in_ECX + -1) / (piVar1[1] - *piVar1 >> 3)) * 4] + iVar3 * 8)
  ;
  unaff_EDI[1] = uVar2;
  return;
}

