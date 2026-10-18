// FUN_00788320 @ 00788320 body=[[00788320, 00788346] [00788350, 007883d0]]


void FUN_00788320(undefined1 param_1)

{
  char cVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_EDI;
  bool bVar6;
  undefined1 local_10 [4];
  int local_c;
  int local_8;
  
  local_c = in_ECX - unaff_EDI >> 2;
  iVar2 = local_c - (in_ECX - unaff_EDI >> 0x1f) >> 1;
  if (0 < iVar2) {
    iVar3 = iVar2 * 2 + 2;
    do {
      iVar2 = iVar2 + -1;
      iVar3 = iVar3 + -2;
      local_10[0] = param_1;
      bVar6 = iVar3 == local_c;
      iVar4 = iVar3;
      local_8 = iVar2;
      if (iVar3 < local_c) {
        do {
          cVar1 = FUN_0077f5d0(local_10,*(undefined4 *)(unaff_EDI + -4 + iVar4 * 4));
          iVar5 = iVar4;
          if (cVar1 != '\0') {
            iVar5 = iVar4 + -1;
          }
          iVar4 = iVar5 * 2 + 2;
          *(undefined4 *)(unaff_EDI + local_8 * 4) = *(undefined4 *)(unaff_EDI + iVar5 * 4);
          local_8 = iVar5;
        } while (iVar4 < local_c);
        bVar6 = iVar4 == local_c;
      }
      if (bVar6) {
        *(undefined4 *)(unaff_EDI + local_8 * 4) = *(undefined4 *)(unaff_EDI + -4 + local_c * 4);
        local_8 = local_c + -1;
      }
      FUN_007889a0();
    } while (0 < iVar2);
  }
  return;
}

