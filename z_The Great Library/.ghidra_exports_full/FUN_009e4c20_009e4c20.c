// FUN_009e4c20 @ 009e4c20 body=[[009e4c20, 009e4c54]]


void FUN_009e4c20(void)

{
  int in_ECX;
  uint uVar1;
  
  for (uVar1 = *(uint *)(in_ECX + 0x424);
      (*(uint *)(in_ECX + 0x424) <= uVar1 && (uVar1 < *(uint *)(in_ECX + 0x428)));
      uVar1 = uVar1 + 0x20) {
    (**(code **)(**(int **)(uVar1 + 0x1c) + 0x24))();
  }
  return;
}

