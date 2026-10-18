// FUN_00557980 @ 00557980 body=[[00557980, 005579a7] [005579b0, 00557a65]]


void FUN_00557980(undefined4 param_1)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  int iVar4;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = in_EAX - unaff_ESI >> 3;
  iVar4 = local_c - (in_EAX - unaff_ESI >> 0x1f) >> 1;
  if (0 < iVar4) {
    local_10 = iVar4 * 2 + 2;
    iVar3 = unaff_ESI + iVar4 * 8;
    do {
      local_20 = *(undefined4 *)(iVar3 + -8);
      local_1c = *(undefined4 *)(iVar3 + -4);
      iVar3 = iVar3 + -8;
      iVar4 = iVar4 + -1;
      local_10 = local_10 + -2;
      iVar1 = iVar4;
      for (iVar2 = local_10; iVar2 < local_c; iVar2 = iVar2 * 2 + 2) {
        if (*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_ESI + 4 + iVar2 * 8) * 4)
                    + 0x1410) <
            *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_ESI + -4 + iVar2 * 8) * 4)
                    + 0x1410)) {
          iVar2 = iVar2 + -1;
        }
        *(undefined4 *)(unaff_ESI + iVar1 * 8) = *(undefined4 *)(unaff_ESI + iVar2 * 8);
        *(undefined4 *)(unaff_ESI + 4 + iVar1 * 8) = *(undefined4 *)(unaff_ESI + 4 + iVar2 * 8);
        iVar1 = iVar2;
      }
      if (iVar2 == local_c) {
        *(undefined4 *)(unaff_ESI + iVar1 * 8) = *(undefined4 *)(unaff_ESI + -8 + local_c * 8);
        *(undefined4 *)(unaff_ESI + 4 + iVar1 * 8) = *(undefined4 *)(unaff_ESI + -4 + local_c * 8);
      }
      local_18 = iVar3;
      local_14 = iVar4;
      FUN_0055a250(iVar4,&local_20,param_1);
    } while (0 < iVar4);
  }
  return;
}

