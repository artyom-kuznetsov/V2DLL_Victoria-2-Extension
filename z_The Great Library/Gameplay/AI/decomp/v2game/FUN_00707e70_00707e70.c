// FUN_00707e70 @ 00707e70 body=[[00707e70, 00707f22]]


void FUN_00707e70(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_EDI;
  bool bVar5;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_c = in_ECX - unaff_EDI >> 2;
  iVar2 = local_c - (in_ECX - unaff_EDI >> 0x1f) >> 1;
  if (0 < iVar2) {
    local_1c = param_1;
    local_18 = param_2;
    local_10 = iVar2 * 2 + 2;
    do {
      local_14 = *(undefined4 *)(unaff_EDI + -4 + iVar2 * 4);
      iVar2 = iVar2 + -1;
      iVar3 = local_10 + -2;
      bVar5 = iVar3 == local_c;
      local_10 = iVar3;
      local_8 = iVar2;
      if (iVar3 < local_c) {
        do {
          cVar1 = FUN_006f39d0(&local_1c);
          iVar4 = iVar3;
          if (cVar1 != '\0') {
            iVar4 = iVar3 + -1;
          }
          iVar3 = iVar4 * 2 + 2;
          *(undefined4 *)(unaff_EDI + local_8 * 4) = *(undefined4 *)(unaff_EDI + iVar4 * 4);
          local_8 = iVar4;
        } while (iVar3 < local_c);
        bVar5 = iVar3 == local_c;
      }
      if (bVar5) {
        *(undefined4 *)(unaff_EDI + local_8 * 4) = *(undefined4 *)(unaff_EDI + -4 + local_c * 4);
        local_8 = local_c + -1;
      }
      FUN_007093c0();
    } while (0 < iVar2);
  }
  return;
}

