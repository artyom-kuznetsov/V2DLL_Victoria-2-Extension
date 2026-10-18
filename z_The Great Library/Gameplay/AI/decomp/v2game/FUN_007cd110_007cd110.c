// FUN_007cd110 @ 007cd110 body=[[007cd110, 007cd13a] [007cd140, 007cd1be]]


void FUN_007cd110(int param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar1 = param_1;
  local_8 = in_ECX - param_1 >> 2;
  iVar4 = local_8 - (in_ECX - param_1 >> 0x1f) >> 1;
  if (0 < iVar4) {
    local_c = iVar4 * 2 + 2;
    do {
      local_14 = *(undefined4 *)(iVar1 + -4 + iVar4 * 4);
      param_1 = iVar4 + -1;
      iVar4 = local_c + -2;
      bVar5 = iVar4 == local_8;
      local_10 = param_1;
      local_c = iVar4;
      if (iVar4 < local_8) {
        do {
          cVar2 = FUN_007c6830();
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
      iVar4 = local_10;
      if (bVar5) {
        *(undefined4 *)(iVar1 + param_1 * 4) = *(undefined4 *)(iVar1 + -4 + local_8 * 4);
        param_1 = local_8 + -1;
      }
      FUN_007d18b0(iVar1,param_1,local_10,&local_14,param_2);
    } while (0 < iVar4);
  }
  return;
}

