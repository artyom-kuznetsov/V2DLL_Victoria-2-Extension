// FUN_005f2b40 @ 005f2b40 body=[[005f2b40, 005f2b62] [005f2b66, 005f2b78] [005f2b86, 005f2b93]]


void FUN_005f2b40(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  if (0xf < *(uint *)(iVar1 + 0x18)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(iVar1 + 4));
  }
  *(undefined4 *)(iVar1 + 0x18) = 0xf;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined1 *)(iVar1 + 4) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(iVar1);
}

