// FUN_00965d40 @ 00965d40 body=[[00965d40, 00965dd0]]


void FUN_00965d40(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *in_EAX;
  int in_ECX;
  
  *in_EAX = *(uint *)(in_ECX + 0x1e0);
  in_EAX[1] = *(uint *)(in_ECX + 0x1e4);
  uVar2 = *(uint *)(in_ECX + 0x1e8);
  uVar1 = *in_EAX;
  *in_EAX = *in_EAX + uVar2;
  in_EAX[1] = in_EAX[1] + *(int *)(in_ECX + 0x1ec) + (uint)CARRY4(uVar1,uVar2);
  iVar3 = *(int *)(in_ECX + 0x1fc);
  uVar1 = *(uint *)(in_ECX + 0x1f8);
  if ((-1 < iVar3) && ((0 < iVar3 || (uVar1 != 0)))) {
    uVar2 = *in_EAX;
    *in_EAX = *in_EAX + uVar1;
    in_EAX[1] = in_EAX[1] + iVar3 + (uint)CARRY4(uVar2,uVar1);
  }
  iVar3 = *(int *)(in_ECX + 0x204);
  uVar1 = *(uint *)(in_ECX + 0x200);
  if ((-1 < iVar3) && ((0 < iVar3 || (uVar1 != 0)))) {
    uVar2 = *in_EAX;
    *in_EAX = *in_EAX + uVar1;
    in_EAX[1] = in_EAX[1] + iVar3 + (uint)CARRY4(uVar2,uVar1);
  }
  iVar3 = *(int *)(in_ECX + 0x20c);
  uVar1 = *(uint *)(in_ECX + 0x208);
  if ((-1 < iVar3) && ((0 < iVar3 || (uVar1 != 0)))) {
    uVar2 = *in_EAX;
    *in_EAX = *in_EAX + uVar1;
    in_EAX[1] = in_EAX[1] + iVar3 + (uint)CARRY4(uVar2,uVar1);
  }
  uVar1 = *(uint *)(in_ECX + 0x210);
  iVar3 = *(int *)(in_ECX + 0x214);
  if ((-1 < iVar3) && ((0 < iVar3 || (uVar1 != 0)))) {
    uVar2 = *in_EAX;
    *in_EAX = *in_EAX + uVar1;
    in_EAX[1] = in_EAX[1] + iVar3 + (uint)CARRY4(uVar2,uVar1);
  }
  return;
}

