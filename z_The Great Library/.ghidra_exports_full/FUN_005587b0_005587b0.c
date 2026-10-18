// FUN_005587b0 @ 005587b0 body=[[005587b0, 005587db] [005587e0, 005588b5]]


void FUN_005587b0(undefined4 param_1)

{
  int iVar1;
  int in_EAX;
  int in_ECX;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  bool bVar7;
  uint local_38 [5];
  undefined4 local_24;
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  
  iVar5 = in_EAX - in_ECX >> 2;
  iVar4 = iVar5 - (in_EAX - in_ECX >> 0x1f) >> 1;
  local_10 = iVar5;
  if (0 < iVar4) {
    local_14 = iVar4 * 2 + 2;
    do {
      iVar1 = iVar4 * 4;
      iVar4 = iVar4 + -1;
      local_14 = local_14 + -2;
      local_18 = *(undefined4 *)(in_ECX + -4 + iVar1);
      bVar7 = local_14 == iVar5;
      iVar2 = iVar4;
      iVar1 = local_14;
      local_c = iVar4;
      if (local_14 < iVar5) {
        do {
          iVar2 = iVar1;
          iVar5 = *(int *)(*(int *)(in_ECX + iVar2 * 4) + 0xe88);
          iVar1 = *(int *)(*(int *)(in_ECX + -4 + iVar2 * 4) + 0xe88);
          if (iVar5 == 0) {
            local_38[2] = 0;
            local_38[3] = 0;
            puVar3 = local_38 + 2;
          }
          else {
            local_1c = *(undefined4 *)(iVar5 + 0x14);
            local_20 = *(uint *)(iVar5 + 0x10);
            puVar3 = &local_20;
          }
          if (iVar1 == 0) {
            local_38[0] = 0;
            local_38[1] = 0;
            puVar6 = local_38;
          }
          else {
            local_38[4] = *(undefined4 *)(iVar1 + 0x10);
            local_24 = *(undefined4 *)(iVar1 + 0x14);
            puVar6 = local_38 + 4;
          }
          if (((int)puVar6[1] <= (int)puVar3[1]) &&
             (((int)puVar6[1] < (int)puVar3[1] || (*puVar6 < *puVar3)))) {
            iVar2 = iVar2 + -1;
          }
          *(undefined4 *)(in_ECX + local_c * 4) = *(undefined4 *)(in_ECX + iVar2 * 4);
          iVar1 = iVar2 * 2 + 2;
          local_c = iVar2;
        } while (iVar1 < local_10);
        bVar7 = iVar1 == local_10;
        iVar5 = local_10;
      }
      if (bVar7) {
        *(undefined4 *)(in_ECX + iVar2 * 4) = *(undefined4 *)(in_ECX + -4 + iVar5 * 4);
      }
      local_c = iVar2;
      FUN_0055a4f0(iVar4,&local_18,param_1);
    } while (0 < iVar4);
  }
  return;
}

