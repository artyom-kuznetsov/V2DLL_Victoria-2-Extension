// FUN_00610af0 @ 00610af0 body=[[00610af0, 00610b1c] [00610b20, 00610b46] [00610b50, 00610bca]]


void FUN_00610af0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int unaff_ESI;
  int iVar7;
  bool bVar8;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  iVar6 = param_1 - unaff_ESI >> 3;
  iVar7 = iVar6 - (param_1 - unaff_ESI >> 0x1f) >> 1;
  if (0 < iVar7) {
    local_8 = iVar7 * 2 + 2;
    iVar3 = unaff_ESI + iVar7 * 8;
    local_c = iVar6;
    do {
      local_14 = *(undefined4 *)(iVar3 + -8);
      local_10 = *(undefined4 *)(iVar3 + -4);
      local_8 = local_8 + -2;
      iVar7 = iVar7 + -1;
      bVar8 = local_8 == iVar6;
      iVar5 = iVar7;
      iVar4 = iVar7;
      iVar1 = local_8;
      if (local_8 < iVar6) {
        do {
          iVar5 = iVar1;
          iVar1 = *(int *)(unaff_ESI + 4 + iVar5 * 8);
          iVar2 = *(int *)(*(int *)(unaff_ESI + -4 + iVar5 * 8) + 0x1dc);
          iVar6 = *(int *)(iVar1 + 0x1dc);
          if ((iVar2 <= iVar6) &&
             ((iVar2 < iVar6 ||
              (*(uint *)(*(int *)(unaff_ESI + -4 + iVar5 * 8) + 0x1d8) < *(uint *)(iVar1 + 0x1d8))))
             ) {
            iVar5 = iVar5 + -1;
          }
          *(undefined4 *)(unaff_ESI + iVar4 * 8) = *(undefined4 *)(unaff_ESI + iVar5 * 8);
          *(undefined4 *)(unaff_ESI + 4 + iVar4 * 8) = *(undefined4 *)(unaff_ESI + 4 + iVar5 * 8);
          iVar1 = iVar5 * 2 + 2;
          bVar8 = iVar1 == local_c;
          iVar4 = iVar5;
          iVar6 = local_c;
        } while (iVar1 < local_c);
      }
      if (bVar8) {
        *(undefined4 *)(unaff_ESI + iVar5 * 8) = *(undefined4 *)(unaff_ESI + -8 + iVar6 * 8);
        *(undefined4 *)(unaff_ESI + 4 + iVar5 * 8) = *(undefined4 *)(unaff_ESI + -4 + iVar6 * 8);
      }
      FUN_00612e50(iVar7,&local_14,param_2);
      iVar3 = iVar3 + -8;
    } while (0 < iVar7);
  }
  return;
}

