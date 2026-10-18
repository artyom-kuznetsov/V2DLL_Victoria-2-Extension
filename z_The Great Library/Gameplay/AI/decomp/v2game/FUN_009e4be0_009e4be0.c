// FUN_009e4be0 @ 009e4be0 body=[[009e4be0, 009e4c18]]


void FUN_009e4be0(void)

{
  int in_ECX;
  uint uVar1;
  
  for (uVar1 = *(uint *)(in_ECX + 0x424);
      (*(uint *)(in_ECX + 0x424) <= uVar1 && (uVar1 < *(uint *)(in_ECX + 0x428)));
      uVar1 = uVar1 + 0x20) {
    (**(code **)(*(int *)(*(int *)(uVar1 + 0x1c) + 0x18) + 0x38))();
  }
  return;
}

