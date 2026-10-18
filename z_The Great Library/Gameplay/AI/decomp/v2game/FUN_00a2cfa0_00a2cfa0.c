// FUN_00a2cfa0 @ 00a2cfa0 body=[[00a2cfa0, 00a2cfc2] [00a2cfc6, 00a2cfe1] [00a2cfe5, 00a2cff7] [00a2d005, 00a2d012]]


void FUN_00a2cfa0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  if (0xf < *(uint *)(iVar1 + 0x38)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(iVar1 + 0x24));
  }
  *(undefined4 *)(iVar1 + 0x38) = 0xf;
  *(undefined4 *)(iVar1 + 0x34) = 0;
  *(undefined1 *)(iVar1 + 0x24) = 0;
  if (0xf < *(uint *)(iVar1 + 0x1c)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(iVar1 + 8));
  }
  *(undefined4 *)(iVar1 + 0x1c) = 0xf;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined1 *)(iVar1 + 8) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(iVar1);
}

