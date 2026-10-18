// FUN_0067c4d0 @ 0067c4d0 body=[[0067c4d0, 0067c4fc] [0067c500, 0067c518] [0067c520, 0067c583]]


void FUN_0067c4d0(int param_1,undefined4 param_2)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined4 local_c;
  int local_8;
  
  iVar5 = param_1 - in_EAX >> 2;
  iVar6 = iVar5 - (param_1 - in_EAX >> 0x1f) >> 1;
  if (0 < iVar6) {
    iVar1 = iVar6 * 2 + 2;
    local_8 = iVar5;
    do {
      local_c = *(undefined4 *)(in_EAX + -4 + iVar6 * 4);
      iVar6 = iVar6 + -1;
      iVar1 = iVar1 + -2;
      bVar7 = iVar1 == iVar5;
      iVar2 = iVar1;
      iVar3 = iVar6;
      iVar4 = iVar6;
      if (iVar1 < iVar5) {
        do {
          iVar5 = *(int *)(in_EAX + -4 + iVar2 * 4);
          if ((*(char *)(iVar5 + 0x20) < *(char *)(*(int *)(in_EAX + iVar2 * 4) + 0x20)) ||
             (iVar3 = iVar2,
             *(float *)(*(int *)(in_EAX + iVar2 * 4) + 0x18) < *(float *)(iVar5 + 0x18))) {
            iVar3 = iVar2 + -1;
          }
          *(undefined4 *)(in_EAX + iVar4 * 4) = *(undefined4 *)(in_EAX + iVar3 * 4);
          iVar2 = iVar3 * 2 + 2;
          bVar7 = iVar2 == local_8;
          iVar4 = iVar3;
          iVar5 = local_8;
        } while (iVar2 < local_8);
      }
      if (bVar7) {
        *(undefined4 *)(in_EAX + iVar3 * 4) = *(undefined4 *)(in_EAX + -4 + iVar5 * 4);
      }
      FUN_0067cae0(iVar6,&local_c,param_2);
    } while (0 < iVar6);
  }
  return;
}

