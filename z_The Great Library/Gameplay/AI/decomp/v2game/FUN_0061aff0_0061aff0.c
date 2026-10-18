// FUN_0061aff0 @ 0061aff0 body=[[0061aff0, 0061b01b] [0061b020, 0061b0cd]]


void FUN_0061aff0(int param_1,int *param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int local_14;
  
  *param_4 = 0;
  iVar5 = param_2[1] - *param_2 >> 2;
  local_14 = 0;
  if (0 < iVar5) {
    do {
      iVar1 = *(int *)(*param_2 + local_14 * 4);
      if (*(int *)(iVar1 + 0x156c) != 0) {
        iVar2 = *(int *)(param_1 + 4);
        iVar3 = *(int *)(iVar1 + 0x156c);
        if ((((*(int *)(iVar1 + 0x20) == iVar2) || (cVar4 = FUN_0051af10(0), cVar4 != '\0')) ||
            (*(int *)(*(int *)(*(int *)(iVar1 + 0xbe8) + iVar2 * 4) + 0x20) != 0)) ||
           ((iVar3 != 0 && (*(char *)(iVar3 + 0x18) != '\0')))) {
          *(int *)(param_3 + *param_4 * 4) = iVar1;
          *param_4 = *param_4 + 1;
        }
      }
      local_14 = local_14 + 1;
    } while (local_14 < iVar5);
  }
  iVar5 = param_3 + *param_4 * 4;
  FUN_0062fe30(param_3,iVar5,iVar5 - param_3 >> 2,
               *(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 4) * 4));
  return;
}

