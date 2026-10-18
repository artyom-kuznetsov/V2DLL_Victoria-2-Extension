// FUN_00ae4ef0 @ 00ae4ef0 body=[[00ae4ef0, 00ae4f15] [00ae4f19, 00ae4f5b] [00ae4f5f, 00ae4f88]]


void FUN_00ae4ef0(void)

{
  int iVar1;
  int *in_ECX;
  uint uVar2;
  
  uVar2 = 0;
  if (in_ECX[1] != 0) {
    do {
      iVar1 = *(int *)(*in_ECX + uVar2 * 4);
      if (iVar1 != 0) {
        FUN_00ae4100();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar1);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)in_ECX[1]);
  }
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  if (*in_ECX != 0) {
    (*(code *)PTR__free_00f01b10)(*in_ECX);
    *in_ECX = 0;
  }
  uVar2 = 0;
  if (in_ECX[5] != 0) {
    do {
      iVar1 = *(int *)(in_ECX[4] + uVar2 * 4);
      if (iVar1 != 0) {
        FUN_00ae4ad0();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar1);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)in_ECX[5]);
  }
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  if (in_ECX[4] != 0) {
    (*(code *)PTR__free_00f01b10)(in_ECX[4]);
    in_ECX[4] = 0;
  }
  return;
}

