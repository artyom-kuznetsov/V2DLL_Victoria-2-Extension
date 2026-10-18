// FUN_0042d1c0 @ 0042d1c0 body=[[0042d1c0, 0042d1e7] [0042d1f0, 0042d2aa]]


void FUN_0042d1c0(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  int unaff_EDI;
  bool bVar4;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  
  local_c = in_ECX - unaff_EDI >> 3;
  local_14 = local_c - (in_ECX - unaff_EDI >> 0x1f) >> 1;
  if (0 < local_14) {
    local_1c = local_14 * 2 + 2;
    local_18 = unaff_EDI + local_14 * 8;
    do {
      local_18 = local_18 + -8;
      iVar1 = local_14 + -1;
      iVar3 = local_1c + -2;
      local_10 = param_1;
      bVar4 = iVar3 == local_c;
      iVar2 = iVar1;
      local_1c = iVar3;
      local_14 = iVar1;
      if (iVar3 < local_c) {
        do {
          FUN_00425f80(&local_20);
          FUN_00425f80(&local_24);
          iVar1 = iVar3;
          if (local_24 < local_20) {
            iVar1 = iVar3 + -1;
          }
          *(undefined4 *)(unaff_EDI + iVar2 * 8) = *(undefined4 *)(unaff_EDI + iVar1 * 8);
          *(undefined4 *)(unaff_EDI + 4 + iVar2 * 8) = *(undefined4 *)(unaff_EDI + 4 + iVar1 * 8);
          iVar3 = iVar1 * 2 + 2;
          iVar2 = iVar1;
        } while (iVar3 < local_c);
        bVar4 = iVar3 == local_c;
      }
      if (bVar4) {
        *(undefined4 *)(unaff_EDI + iVar1 * 8) = *(undefined4 *)(unaff_EDI + -8 + local_c * 8);
        *(undefined4 *)(unaff_EDI + 4 + iVar1 * 8) = *(undefined4 *)(unaff_EDI + -4 + local_c * 8);
      }
      FUN_0042d5c0();
    } while (0 < local_14);
  }
  return;
}

