// FUN_004d6920 @ 004d6920 body=[[004d6920, 004d694c] [004d6950, 004d6a44]]


void FUN_004d6920(int param_1)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  iVar4 = in_EAX - unaff_ESI >> 3;
  local_c = iVar4 - (in_EAX - unaff_ESI >> 0x1f) >> 1;
  if (0 < local_c) {
    local_18 = local_c * 2 + 2;
    local_14 = unaff_ESI + local_c * 8;
    local_10 = iVar4;
    do {
      local_20 = *(undefined4 *)(local_14 + -8);
      local_1c = *(undefined4 *)(local_14 + -4);
      local_c = local_c + -1;
      local_18 = local_18 + -2;
      bVar6 = local_18 == iVar4;
      iVar1 = local_c;
      iVar3 = local_c;
      iVar2 = local_18;
      if (local_18 < iVar4) {
        do {
          iVar4 = -1;
          iVar5 = -1;
          if (*(int *)(unaff_ESI + 4 + iVar2 * 8) != 0) {
            iVar4 = *(int *)(*(int *)(param_1 + 0x48) +
                            *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                      *(int *)(unaff_ESI + 4 + iVar2 * 8) * 4) +
                                             0xe64) + 8) * 4);
          }
          if (*(int *)(unaff_ESI + -4 + iVar2 * 8) != 0) {
            iVar5 = *(int *)(*(int *)(param_1 + 0x48) +
                            *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                      *(int *)(unaff_ESI + -4 + iVar2 * 8) * 4) +
                                             0xe64) + 8) * 4);
          }
          iVar3 = iVar2;
          if (iVar5 < iVar4) {
            iVar3 = iVar2 + -1;
          }
          *(undefined4 *)(unaff_ESI + iVar1 * 8) = *(undefined4 *)(unaff_ESI + iVar3 * 8);
          *(undefined4 *)(unaff_ESI + 4 + iVar1 * 8) = *(undefined4 *)(unaff_ESI + 4 + iVar3 * 8);
          iVar2 = iVar3 * 2 + 2;
          iVar1 = iVar3;
        } while (iVar2 < local_10);
        bVar6 = iVar2 == local_10;
        iVar4 = local_10;
      }
      if (bVar6) {
        *(undefined4 *)(unaff_ESI + iVar3 * 8) = *(undefined4 *)(unaff_ESI + -8 + iVar4 * 8);
        *(undefined4 *)(unaff_ESI + 4 + iVar3 * 8) = *(undefined4 *)(unaff_ESI + -4 + iVar4 * 8);
      }
      local_14 = local_14 + -8;
      FUN_004d6d70(local_c,&local_20,param_1);
    } while (0 < local_c);
  }
  return;
}

