// FUN_00a6fd60 @ 00a6fd60 body=[[00a6fd60, 00a6fd90] [00a6fd94, 00a6fdab] [00a6fdb6, 00a6fdbb]]


void FUN_00a6fd60(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)*param_1;
  iVar2 = *piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*param_1 + 4) = *param_1;
  param_1[1] = 0;
  if (iVar2 == *param_1) {
    return;
  }
  if (0xf < *(uint *)(iVar2 + 0x1c)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(iVar2 + 8));
  }
  *(undefined4 *)(iVar2 + 0x1c) = 0xf;
  *(undefined4 *)(iVar2 + 0x18) = 0;
  *(undefined1 *)(iVar2 + 8) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(iVar2);
}

