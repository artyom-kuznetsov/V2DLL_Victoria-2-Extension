// FUN_00557f40 @ 00557f40 body=[[00557f40, 00557f69] [00557f70, 0055800c]]


void FUN_00557f40(undefined1 param_1)

{
  int in_EAX;
  int *piVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_c = in_ECX - in_EAX >> 2;
  iVar2 = local_c - (in_ECX - in_EAX >> 0x1f) >> 1;
  if (0 < iVar2) {
    local_10 = iVar2 * 2 + 2;
    do {
      local_20 = *(undefined4 *)(in_EAX + -4 + iVar2 * 4);
      local_18 = iVar2 + -1;
      iVar2 = local_10 + -2;
      local_1c = CONCAT31(local_1c._1_3_,param_1);
      bVar4 = iVar2 == local_c;
      local_10 = iVar2;
      local_8 = local_18;
      if (iVar2 < local_c) {
        do {
          local_14 = (int *)FUN_004468a0(local_24);
          piVar1 = (int *)FUN_004468a0(local_28);
          iVar3 = iVar2;
          if (*local_14 < *piVar1) {
            iVar3 = iVar2 + -1;
          }
          iVar2 = iVar3 * 2 + 2;
          *(undefined4 *)(in_EAX + local_8 * 4) = *(undefined4 *)(in_EAX + iVar3 * 4);
          local_8 = iVar3;
        } while (iVar2 < local_c);
        bVar4 = iVar2 == local_c;
      }
      iVar2 = local_18;
      if (bVar4) {
        *(undefined4 *)(in_EAX + local_8 * 4) = *(undefined4 *)(in_EAX + -4 + local_c * 4);
        local_8 = local_c + -1;
      }
      FUN_0055a2e0(local_8,local_18,&local_20,local_1c);
    } while (0 < iVar2);
  }
  return;
}

