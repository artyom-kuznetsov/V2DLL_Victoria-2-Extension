// FUN_006b5a40 @ 006b5a40 body=[[006b5a40, 006b5a6a] [006b5a70, 006b5af6]]


void FUN_006b5a40(int param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined4 local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  iVar1 = param_1;
  local_8 = in_ECX - param_1 >> 2;
  iVar4 = local_8 - (in_ECX - param_1 >> 0x1f) >> 1;
  if (0 < iVar4) {
    local_10 = iVar4 * 2 + 2;
    do {
      local_18 = *(undefined4 *)(iVar1 + -4 + iVar4 * 4);
      local_14 = iVar4 + -1;
      iVar4 = local_10 + -2;
      local_c = param_2;
      bVar5 = iVar4 == local_8;
      param_1 = local_14;
      local_10 = iVar4;
      if (iVar4 < local_8) {
        do {
          cVar2 = FUN_006a88f0(*(undefined4 *)(iVar1 + -4 + iVar4 * 4));
          iVar3 = iVar4;
          if (cVar2 != '\0') {
            iVar3 = iVar4 + -1;
          }
          iVar4 = iVar3 * 2 + 2;
          *(undefined4 *)(iVar1 + param_1 * 4) = *(undefined4 *)(iVar1 + iVar3 * 4);
          param_1 = iVar3;
        } while (iVar4 < local_8);
        bVar5 = iVar4 == local_8;
      }
      iVar4 = local_14;
      if (bVar5) {
        *(undefined4 *)(iVar1 + param_1 * 4) = *(undefined4 *)(iVar1 + -4 + local_8 * 4);
        param_1 = local_8 + -1;
      }
      FUN_006b6020(iVar1,param_1,local_14,&local_18,local_c);
    } while (0 < iVar4);
  }
  return;
}

