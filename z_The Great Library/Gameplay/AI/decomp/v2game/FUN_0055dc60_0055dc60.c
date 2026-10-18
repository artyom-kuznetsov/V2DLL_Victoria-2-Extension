// FUN_0055dc60 @ 0055dc60 body=[[0055dc60, 0055dc7c] [0055dc80, 0055dcec]]


uint FUN_0055dc60(uint *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)*param_1 + 1;
  while( true ) {
    piVar1 = piVar3 + -1;
    if ((piVar1 < (int *)*param_1) || ((int *)param_1[1] <= piVar1)) {
      return (uint)piVar1 & 0xffffff00;
    }
    iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_3 * 4);
    if ((*piVar3 != *(int *)(iVar2 + 0x20)) &&
       (((*(int *)(*(int *)(*(int *)(iVar2 + 0xbe8) + *piVar3 * 4) + 0x34) != 0 ||
         ((((char)piVar3[-1] == 'R' && (*(char *)((int)piVar3 + -3) == 'E')) &&
          (*(char *)((int)piVar3 + -2) == 'B')))) ||
        (((*(char *)(iVar2 + 0x1c) == 'R' && (*(char *)(iVar2 + 0x1d) == 'E')) &&
         (*(char *)(iVar2 + 0x1e) == 'B')))))) break;
    piVar3 = piVar3 + 2;
  }
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}

