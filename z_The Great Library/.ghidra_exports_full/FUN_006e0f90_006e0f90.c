// FUN_006e0f90 @ 006e0f90 body=[[006e0f90, 006e0fb7] [006e0fc0, 006e1074]]


void FUN_006e0f90(undefined1 param_1)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = in_ECX - in_EAX >> 3;
  local_10 = local_c - (in_ECX - in_EAX >> 0x1f) >> 1;
  if (0 < local_10) {
    local_14 = local_10 * 2 + 2;
    do {
      local_20 = *(undefined4 *)(in_EAX + -8 + local_10 * 8);
      iVar2 = local_10 + -1;
      local_1c = *(undefined4 *)(in_EAX + 4 + iVar2 * 8);
      iVar3 = local_14 + -2;
      local_18 = CONCAT31(local_18._1_3_,param_1);
      bVar5 = iVar3 == local_c;
      iVar4 = iVar2;
      local_14 = iVar3;
      local_10 = iVar2;
      if (iVar3 < local_c) {
        do {
          cVar1 = FUN_006dda00(*(undefined4 *)(in_EAX + iVar3 * 8),
                               *(undefined4 *)(in_EAX + 4 + iVar3 * 8),
                               *(undefined4 *)(in_EAX + -8 + iVar3 * 8),
                               *(undefined4 *)(in_EAX + -4 + iVar3 * 8));
          iVar4 = iVar3;
          if (cVar1 != '\0') {
            iVar4 = iVar3 + -1;
          }
          *(undefined4 *)(in_EAX + iVar2 * 8) = *(undefined4 *)(in_EAX + iVar4 * 8);
          *(undefined4 *)(in_EAX + 4 + iVar2 * 8) = *(undefined4 *)(in_EAX + 4 + iVar4 * 8);
          iVar3 = iVar4 * 2 + 2;
          iVar2 = iVar4;
        } while (iVar3 < local_c);
        bVar5 = iVar3 == local_c;
      }
      if (bVar5) {
        *(undefined4 *)(in_EAX + iVar4 * 8) = *(undefined4 *)(in_EAX + -8 + local_c * 8);
        *(undefined4 *)(in_EAX + 4 + iVar4 * 8) = *(undefined4 *)(in_EAX + -4 + local_c * 8);
        iVar4 = local_c + -1;
      }
      FUN_006e1c60(iVar4,local_10,&local_20,local_18);
    } while (0 < local_10);
  }
  return;
}

