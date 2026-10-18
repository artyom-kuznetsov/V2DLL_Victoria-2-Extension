// FUN_0048f490 @ 0048f490 body=[[0048f490, 0048f501]]


void FUN_0048f490(void)

{
  int *piVar1;
  undefined4 *in_EAX;
  int in_EDX;
  int iVar2;
  
  for (piVar1 = (int *)*in_EAX; (piVar1 != (int *)0x0 && (*piVar1 != in_EDX));
      piVar1 = (int *)piVar1[2]) {
  }
  FUN_005f2ae0(piVar1);
  if ((in_EAX[2] == 0) && (DAT_012587e4 != (int *)0x0)) {
    iVar2 = 0;
    if (0 < *DAT_012587e4) {
      do {
        (**(code **)(**(int **)(DAT_012587e4[1] +
                               *(int *)(*(int *)(DAT_012587e4[1] + iVar2 * 4) + 0x20) * 4) + 0x1c))
                  ();
        iVar2 = iVar2 + 1;
      } while (iVar2 < *DAT_012587e4);
    }
    FUN_0048f510();
  }
  return;
}

