// FUN_005ac410 @ 005ac410 body=[[005ac410, 005ac459]]


void FUN_005ac410(void)

{
  int iVar1;
  int in_ECX;
  
  (**(code **)(*(int *)(*(int *)(in_ECX + 4) + 0x18) + 0x34))();
  iVar1 = *(int *)(*(int *)(in_ECX + 0x8c) + 0x30);
  if (iVar1 == 1) {
    FUN_005aedd0();
    return;
  }
  if (iVar1 == 2) {
    FUN_005b1f70();
    return;
  }
  FUN_005ac6e0();
  return;
}

