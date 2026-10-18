// FUN_00558210 @ 00558210 body=[[00558210, 0055823b] [00558240, 00558259] [00558260, 005582f6]]


void FUN_00558210(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_EAX;
  int iVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar6 = in_EAX - in_ECX >> 2;
  iVar5 = iVar6 - (in_EAX - in_ECX >> 0x1f) >> 1;
  if (0 < iVar5) {
    local_10 = iVar5 * 2 + 2;
    local_c = iVar6;
    do {
      local_14 = *(undefined4 *)(in_ECX + -4 + iVar5 * 4);
      iVar5 = iVar5 + -1;
      local_10 = local_10 + -2;
      bVar7 = local_10 == iVar6;
      iVar1 = local_10;
      local_8 = iVar5;
      if (local_10 < iVar6) {
        do {
          iVar4 = iVar1;
          iVar1 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                   *(int *)(*(int *)(in_ECX + -4 + iVar4 * 4) + 0xc) * 4) + 0xe88);
          iVar2 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                   *(int *)(*(int *)(in_ECX + iVar4 * 4) + 0xc) * 4) + 0xe88);
          iVar3 = *(int *)(iVar1 + 0x14);
          iVar6 = *(int *)(iVar2 + 0x14);
          if ((iVar3 <= iVar6) &&
             ((iVar3 < iVar6 || (*(uint *)(iVar1 + 0x10) < *(uint *)(iVar2 + 0x10))))) {
            iVar4 = iVar4 + -1;
          }
          iVar1 = iVar4 * 2 + 2;
          *(undefined4 *)(in_ECX + local_8 * 4) = *(undefined4 *)(in_ECX + iVar4 * 4);
          local_8 = iVar4;
        } while (iVar1 < local_c);
        bVar7 = iVar1 == local_c;
        iVar6 = local_c;
      }
      if (bVar7) {
        *(undefined4 *)(in_ECX + local_8 * 4) = *(undefined4 *)(in_ECX + -4 + iVar6 * 4);
        local_8 = iVar6 + -1;
      }
      FUN_0055a370(local_8,iVar5,&local_14,param_1);
    } while (0 < iVar5);
  }
  return;
}

