// FUN_00589de0 @ 00589de0 body=[[00589de0, 00589e86]]


void FUN_00589de0(void)

{
  int *piVar1;
  int in_ECX;
  
  for (piVar1 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x44) * 4) +
                         0x149c);
      (piVar1 != (int *)0x0 &&
      (*piVar1 != *(int *)(*(int *)(DAT_0125870c + 0x2a88) + *(int *)(in_ECX + 0x3c) * 4)));
      piVar1 = (int *)piVar1[2]) {
  }
  FUN_005f2ae0(piVar1);
  FUN_004cb210();
  FUN_00545be0(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x44) * 4));
  *(undefined4 *)(*(int *)(*(int *)(DAT_012588e8 + 0xb24) + 0x24) + 0x1c) = 1;
  return;
}

