// FUN_00965de0 @ 00965de0 body=[[00965de0, 00965e70]]


void FUN_00965de0(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *in_EAX;
  int in_ECX;
  
  *in_EAX = *(uint *)(in_ECX + 0x1d8);
  in_EAX[1] = *(uint *)(in_ECX + 0x1dc);
  uVar2 = *(uint *)(in_ECX + 0x1f0);
  uVar1 = *in_EAX;
  *in_EAX = *in_EAX + uVar2;
  in_EAX[1] = in_EAX[1] + *(int *)(in_ECX + 500) + (uint)CARRY4(uVar1,uVar2);
  iVar3 = *(int *)(in_ECX + 0x1fc);
  uVar1 = *(uint *)(in_ECX + 0x1f8);
  if ((iVar3 < 1) && (iVar3 < 0)) {
    uVar2 = *in_EAX;
    *in_EAX = *in_EAX + uVar1;
    in_EAX[1] = in_EAX[1] + iVar3 + (uint)CARRY4(uVar2,uVar1);
  }
  iVar3 = *(int *)(in_ECX + 0x204);
  uVar1 = *(uint *)(in_ECX + 0x200);
  if ((iVar3 < 1) && (iVar3 < 0)) {
    uVar2 = *in_EAX;
    *in_EAX = *in_EAX + uVar1;
    in_EAX[1] = in_EAX[1] + iVar3 + (uint)CARRY4(uVar2,uVar1);
  }
  iVar3 = *(int *)(in_ECX + 0x20c);
  uVar1 = *(uint *)(in_ECX + 0x208);
  if ((iVar3 < 1) && (iVar3 < 0)) {
    uVar2 = *in_EAX;
    *in_EAX = *in_EAX + uVar1;
    in_EAX[1] = in_EAX[1] + iVar3 + (uint)CARRY4(uVar2,uVar1);
  }
  uVar1 = *(uint *)(in_ECX + 0x210);
  iVar3 = *(int *)(in_ECX + 0x214);
  if ((iVar3 < 1) && (iVar3 < 0)) {
    uVar2 = *in_EAX;
    *in_EAX = *in_EAX + uVar1;
    in_EAX[1] = in_EAX[1] + iVar3 + (uint)CARRY4(uVar2,uVar1);
  }
  return;
}

