// FUN_0068dd70 @ 0068dd70 body=[[0068dd70, 0068de27]]


void FUN_0068dd70(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int in_EAX;
  int in_EDX;
  int unaff_EDI;
  
  *(undefined4 *)(*(int *)(*(int *)(in_EDX + 0xbf0) + *(int *)(unaff_EDI + 4) * 0x10) + in_EAX * 4)
       = DAT_01258804;
  iVar3 = DAT_0125870c;
  iVar2 = *(int *)(*(int *)(DAT_0125870c + 0x2a88) + in_EAX * 4);
  piVar1 = (int *)(iVar2 + 0x70);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    *(undefined4 *)(iVar2 + 0x70) = 0;
  }
  iVar2 = *(int *)(*(int *)(iVar3 + 0x2a88) + in_EAX * 4);
  for (piVar1 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_EDI + 4) * 4) +
                         0x148c); (piVar1 != (int *)0x0 && (*piVar1 != iVar2));
      piVar1 = (int *)piVar1[2]) {
  }
  FUN_005f2ae0(piVar1);
  for (piVar1 = *(int **)(iVar2 + 8); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    FUN_00645fd0(*(undefined4 *)(*(int *)(DAT_012588dc + 0x20d8) + *piVar1 * 4),
                 *(undefined4 *)(unaff_EDI + 4));
  }
  return;
}

