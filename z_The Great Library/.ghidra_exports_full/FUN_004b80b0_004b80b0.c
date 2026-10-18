// FUN_004b80b0 @ 004b80b0 body=[[004b80b0, 004b81c9]]


int FUN_004b80b0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_EAX;
  int *piVar4;
  int local_c;
  int local_8;
  
  iVar1 = *(int *)(in_EAX + 0x5c);
  local_c = 0;
  local_8 = 0;
  if (0 < (*(int *)(iVar1 + 0xcc) - *(int *)(iVar1 + 200)) / 0x24) {
    piVar4 = (int *)(*(int *)(iVar1 + 200) + 4);
    do {
      iVar2 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar4 * 4);
      iVar3 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar2 + 0x134) * 4);
      if ((param_2 != *(int *)(iVar3 + 0x20)) &&
         (((*(int *)(*(int *)(*(int *)(iVar3 + 0xbe8) + param_2 * 4) + 0x34) != 0 ||
           ((((char)param_1 == 'R' && (param_1._1_1_ == 'E')) && (param_1._2_1_ == 'B')))) ||
          (((*(char *)(iVar3 + 0x1c) == 'R' && (*(char *)(iVar3 + 0x1d) == 'E')) &&
           (*(char *)(iVar3 + 0x1e) == 'B')))))) {
        iVar2 = *(int *)(*(int *)(iVar2 + 0x9c) + 0x30) / 1000;
        if (local_c < iVar2) {
          local_c = iVar2;
        }
      }
      local_8 = local_8 + 1;
      piVar4 = piVar4 + 9;
    } while (local_8 < (*(int *)(iVar1 + 0xcc) - *(int *)(iVar1 + 200)) / 0x24);
    return local_c;
  }
  return 0;
}

