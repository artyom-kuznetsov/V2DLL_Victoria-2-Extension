// FUN_009f7b90 @ 009f7b90 body=[[009f7b90, 009f7bbb] [009f7bbf, 009f7bfe]]


undefined2 * FUN_009f7b90(undefined2 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *unaff_ESI;
  undefined4 local_20;
  uint local_c;
  
  iVar2 = FUN_009f74c0(*(undefined2 *)((int)unaff_ESI + 0x3a));
  uVar1 = *(undefined4 *)(iVar2 + 0x10);
  if (0xf < local_c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_20);
  }
  piVar3 = (int *)(**(code **)(*unaff_ESI + 0xd0))();
  iVar2 = (piVar3[1] - *piVar3 >> 5) + -1;
  *param_1 = (short)uVar1;
  param_1[1] = (iVar2 < 0) - 1 & (ushort)iVar2;
  return param_1;
}

