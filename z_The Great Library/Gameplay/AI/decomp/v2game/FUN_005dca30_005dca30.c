// FUN_005dca30 @ 005dca30 body=[[005dca30, 005dcab4]]


int FUN_005dca30(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  int *piVar3;
  int local_8;
  
  piVar3 = (int *)*in_ECX;
  local_8 = 0;
  iVar2 = 0;
  if (piVar3 != (int *)0x0) {
    do {
      iVar2 = *piVar3;
      piVar3 = (int *)piVar3[2];
      iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar2 + 0xc4) * 4);
      if ((param_2 != *(int *)(iVar1 + 0x20)) &&
         (((*(int *)(*(int *)(*(int *)(iVar1 + 0xbe8) + param_2 * 4) + 0x34) != 0 ||
           ((((char)param_1 == 'R' && (param_1._1_1_ == 'E')) && (param_1._2_1_ == 'B')))) ||
          (((*(char *)(iVar1 + 0x1c) == 'R' && (*(char *)(iVar1 + 0x1d) == 'E')) &&
           (*(char *)(iVar1 + 0x1e) == 'B')))))) {
        local_8 = local_8 + *(int *)(iVar2 + 0x40);
      }
      iVar2 = local_8;
    } while (piVar3 != (int *)0x0);
  }
  return iVar2;
}

