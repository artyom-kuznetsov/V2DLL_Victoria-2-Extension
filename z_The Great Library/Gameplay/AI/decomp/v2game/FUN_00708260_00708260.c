// FUN_00708260 @ 00708260 body=[[00708260, 0070828a] [00708290, 00708312]]


void FUN_00708260(int param_1,undefined1 param_2)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar1 = param_1;
  local_8 = in_ECX - param_1 >> 2;
  iVar3 = local_8 - (in_ECX - param_1 >> 0x1f) >> 1;
  if (0 < iVar3) {
    local_c = iVar3 * 2 + 2;
    do {
      local_18 = *(undefined4 *)(iVar1 + -4 + iVar3 * 4);
      local_10 = iVar3 + -1;
      iVar3 = local_c + -2;
      local_14 = CONCAT31(local_14._1_3_,param_2);
      bVar5 = iVar3 == local_8;
      param_1 = local_10;
      local_c = iVar3;
      if (iVar3 < local_8) {
        do {
          cVar2 = FUN_006f3950();
          iVar4 = iVar3;
          if (cVar2 != '\0') {
            iVar4 = iVar3 + -1;
          }
          iVar3 = iVar4 * 2 + 2;
          *(undefined4 *)(iVar1 + param_1 * 4) = *(undefined4 *)(iVar1 + iVar4 * 4);
          param_1 = iVar4;
        } while (iVar3 < local_8);
        bVar5 = iVar3 == local_8;
      }
      iVar3 = local_10;
      if (bVar5) {
        *(undefined4 *)(iVar1 + param_1 * 4) = *(undefined4 *)(iVar1 + -4 + local_8 * 4);
        param_1 = local_8 + -1;
      }
      FUN_007094e0(iVar1,param_1,local_10,&local_18,local_14);
    } while (0 < iVar3);
  }
  return;
}

