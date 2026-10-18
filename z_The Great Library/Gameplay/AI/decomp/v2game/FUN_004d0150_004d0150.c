// FUN_004d0150 @ 004d0150 body=[[004d0150, 004d01fe]]


void FUN_004d0150(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int in_EAX;
  int in_ECX;
  
  iVar1 = *(int *)(in_EAX + 100);
  *(int *)(in_EAX + 100) = in_ECX;
  *(int *)(in_ECX + 0x220) = iVar1;
  *(undefined4 *)(in_ECX + 0x224) = 0;
  iVar2 = *(int *)(in_EAX + 0x68);
  *(int *)(in_EAX + 0x68) = iVar2 + 1;
  if (iVar2 == 0) {
    *(undefined4 *)(in_EAX + 0x60) = *(undefined4 *)(in_EAX + 100);
  }
  else {
    *(undefined4 *)(iVar1 + 0x224) = *(undefined4 *)(in_EAX + 100);
  }
  uVar3 = *(uint *)(in_ECX + 0x20);
  *(int *)(in_ECX + 0x1c) = in_EAX;
  *(int *)(in_ECX + 0xe8) = in_EAX;
  FUN_004ee990(in_ECX + 0xe0,*(undefined4 *)(*(int *)(in_ECX + 0x18) + 300),uVar3 << 0xf,
               ((int)uVar3 >> 0x1f) << 0xf | uVar3 >> 0x11);
  iVar1 = *(int *)(in_EAX + 100);
  uVar3 = *(uint *)(iVar1 + 0x20);
  *(int *)(iVar1 + 0x1c) = in_EAX;
  *(int *)(iVar1 + 0xe8) = in_EAX;
  FUN_004ee990(iVar1 + 0xe0,*(undefined4 *)(*(int *)(iVar1 + 0x18) + 300),uVar3 << 0xf,
               ((int)uVar3 >> 0x1f) << 0xf | uVar3 >> 0x11);
  return;
}

