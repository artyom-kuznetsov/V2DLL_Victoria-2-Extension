// FUN_009c2e60 @ 009c2e60 body=[[009c2e60, 009c2e82] [009c2e86, 009c2e98] [009c2ea6, 009c2eb3]]


void FUN_009c2e60(int *param_1)

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

