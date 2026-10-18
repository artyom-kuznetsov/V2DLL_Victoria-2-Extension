// FUN_0048c000 @ 0048c000 body=[[0048c000, 0048c020] [0048c024, 0048c032] [0048c040, 0048c04d]]


void FUN_0048c000(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  if (*(int *)(iVar1 + 0x48) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(iVar1 + 0x48));
  }
  *(undefined4 *)(iVar1 + 0x48) = 0;
  *(undefined4 *)(iVar1 + 0x4c) = 0;
  *(undefined4 *)(iVar1 + 0x50) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(iVar1);
}

