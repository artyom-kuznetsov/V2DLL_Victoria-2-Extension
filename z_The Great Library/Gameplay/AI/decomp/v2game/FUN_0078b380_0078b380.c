// FUN_0078b380 @ 0078b380 body=[[0078b380, 0078b443] [0078b447, 0078b466] [0078b46a, 0078b487] [0078b48b, 0078b4aa] [0078b4ae, 0078b4b8]]


uint FUN_0078b380(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint in_stack_00000024;
  uint in_stack_00000030;
  undefined4 in_stack_00000038;
  uint in_stack_0000004c;
  
  iVar2 = DAT_01258a98;
  iVar1 = DAT_01258a94;
  if (param_2 < 0x1269) {
    if (DAT_01258a98 == 0) goto LAB_0078b3d3;
    iVar3 = FUN_009c1d40();
  }
  else if (DAT_01258a94 == 0) {
LAB_0078b3d3:
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_009c1d40();
  }
  if (in_stack_00000030 < 0x1269) {
    if (iVar2 != 0) {
      uVar4 = FUN_009c1d40();
      goto LAB_0078b411;
    }
  }
  else if (iVar1 != 0) {
    uVar4 = FUN_009c1d40();
    goto LAB_0078b411;
  }
  uVar4 = 0;
LAB_0078b411:
  if ((iVar3 == 0) || (uVar4 == 0)) {
    if (0xf < in_stack_00000024) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_4);
    }
    if (0xf < in_stack_0000004c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(in_stack_00000038);
    }
    return uVar4 & 0xffffff00;
  }
  if (0xf < in_stack_00000024) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_4);
  }
  if (0xf < in_stack_0000004c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_stack_00000038);
  }
  return CONCAT31((int3)((uint)*(int *)(uVar4 + 0x38) >> 8),
                  *(int *)(*(int *)(uVar4 + 0x38) + 0x178) <
                  *(int *)(*(int *)(iVar3 + 0x38) + 0x178));
}

