// FUN_00707050 @ 00707050 body=[[00707050, 0070707a] [00707080, 00707126]]


void FUN_00707050(int param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined8 local_20;
  undefined4 local_18;
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
      local_20 = param_2;
      local_18 = param_3;
      bVar5 = iVar4 == local_8;
      local_10 = param_1;
      local_c = iVar4;
      if (iVar4 < local_8) {
        do {
          cVar2 = FUN_006e2680(&local_20);
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
      FUN_00708e30(iVar1,param_1,local_10,&local_14,local_20,local_18);
    } while (0 < iVar4);
  }
  return;
}

