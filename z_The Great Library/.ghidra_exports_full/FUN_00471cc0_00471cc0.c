// FUN_00471cc0 @ 00471cc0 body=[[00471cc0, 00471ce2] [00471ce6, 00471cf8] [00471d06, 00471d13]]


void FUN_00471cc0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  if (0xf < *(uint *)(iVar1 + 0x20)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(iVar1 + 0xc));
  }
  *(undefined4 *)(iVar1 + 0x20) = 0xf;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined1 *)(iVar1 + 0xc) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(iVar1);
}

