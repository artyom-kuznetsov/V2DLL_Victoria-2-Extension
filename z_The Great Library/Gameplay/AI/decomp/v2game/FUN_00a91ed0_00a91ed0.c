// FUN_00a91ed0 @ 00a91ed0 body=[[00a91ed0, 00a91f89]]


void FUN_00a91ed0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int in_EAX;
  int iVar5;
  int iVar6;
  int unaff_ESI;
  
  if (param_2 != unaff_ESI) {
    iVar5 = unaff_ESI;
    if (3 < unaff_ESI - param_2) {
      for (iVar6 = unaff_ESI + -4; param_2 <= iVar6; iVar6 = iVar6 + -1) {
        iVar1 = *(int *)(in_EAX + iVar6 * 4);
        uVar2 = *(uint *)(param_1 + iVar1 * 4);
        iVar4 = iVar6;
        while ((iVar4 = iVar4 + 4, iVar4 <= unaff_ESI &&
               (iVar3 = *(int *)(in_EAX + iVar4 * 4), *(uint *)(param_1 + iVar3 * 4) < uVar2))) {
          *(int *)(in_EAX + -0x10 + iVar4 * 4) = iVar3;
        }
        *(int *)(in_EAX + -0x10 + iVar4 * 4) = iVar1;
      }
    }
    while (iVar6 = iVar5 + -1, param_2 <= iVar6) {
      iVar1 = *(int *)(in_EAX + iVar6 * 4);
      uVar2 = *(uint *)(param_1 + iVar1 * 4);
      while ((iVar5 <= unaff_ESI &&
             (iVar4 = *(int *)(in_EAX + iVar5 * 4), *(uint *)(param_1 + iVar4 * 4) < uVar2))) {
        *(int *)(in_EAX + -4 + iVar5 * 4) = iVar4;
        iVar5 = iVar5 + 1;
      }
      *(int *)(in_EAX + -4 + iVar5 * 4) = iVar1;
      iVar5 = iVar6;
    }
  }
  return;
}

