// FUN_00a60dd0 @ 00a60dd0 body=[[00a60dd0, 00a60e16]]


undefined4 FUN_00a60dd0(uint param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  piVar1 = *(int **)(*(int *)(in_ECX + 0x84) + (param_1 % *(uint *)(in_ECX + 0x80)) * 4);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0xffff;
    }
    iVar2 = *piVar1;
    if (*(uint *)(iVar2 + 0x1c) == param_1) break;
    piVar1 = (int *)piVar1[1];
  }
  if (iVar2 == 0) {
    return 0xffff;
  }
  return CONCAT22((short)((uint)*(int *)(in_ECX + 0x84) >> 0x10),*(undefined2 *)(iVar2 + 8));
}

