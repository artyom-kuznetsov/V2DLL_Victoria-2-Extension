// FUN_00719b20 @ 00719b20 body=[[00719b20, 00719c07]]


void FUN_00719b20(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  int in_ECX;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 local_28 [2];
  undefined4 local_20;
  undefined4 local_1c;
  int local_14;
  int local_10;
  int local_c;
  
  iVar6 = in_EAX - in_ECX >> 4;
  iVar5 = iVar6 - (in_EAX - in_ECX >> 0x1f) >> 1;
  if (0 < iVar5) {
    local_10 = iVar5 * 2 + 2;
    local_c = iVar5 * 0x10 + in_ECX;
    do {
      local_28[0] = *(undefined4 *)(local_c + -0x10);
      local_20 = *(undefined4 *)(local_c + -8);
      local_1c = *(undefined4 *)(local_c + -4);
      iVar5 = iVar5 + -1;
      local_10 = local_10 + -2;
      iVar2 = iVar5;
      for (iVar3 = local_10; iVar3 < iVar6; iVar3 = iVar3 * 2 + 2) {
        iVar1 = *(int *)(iVar3 * 0x10 + -4 + in_ECX);
        iVar4 = iVar3 * 0x10 + in_ECX;
        if ((iVar1 <= *(int *)(iVar4 + 0xc)) &&
           ((iVar1 < *(int *)(iVar4 + 0xc) || (*(uint *)(iVar4 + -8) < *(uint *)(iVar4 + 8))))) {
          iVar3 = iVar3 + -1;
        }
        *(undefined4 *)(in_ECX + iVar2 * 0x10) = *(undefined4 *)(in_ECX + iVar3 * 0x10);
        *(undefined4 *)(in_ECX + 8 + iVar2 * 0x10) = *(undefined4 *)(in_ECX + 8 + iVar3 * 0x10);
        *(undefined4 *)(in_ECX + 0xc + iVar2 * 0x10) = *(undefined4 *)(in_ECX + 0xc + iVar3 * 0x10);
        iVar2 = iVar3;
      }
      if (iVar3 == iVar6) {
        iVar3 = in_ECX + -0x10 + iVar6 * 0x10;
        *(undefined4 *)(in_ECX + iVar2 * 0x10) = *(undefined4 *)(in_ECX + -0x10 + iVar6 * 0x10);
        *(undefined4 *)(in_ECX + 8 + iVar2 * 0x10) = *(undefined4 *)(iVar3 + 8);
        *(undefined4 *)(in_ECX + 0xc + iVar2 * 0x10) = *(undefined4 *)(iVar3 + 0xc);
      }
      local_14 = iVar5;
      local_c = local_c + -0x10;
      FUN_00719cc0(iVar5,local_28,param_1);
    } while (0 < iVar5);
  }
  return;
}

