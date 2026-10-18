// FUN_00a6dd80 @ 00a6dd80 body=[[00a6dd80, 00a6ddf0]]


undefined4 FUN_00a6dd80(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  
  iVar1 = (**(code **)(*(int *)(in_ECX + 0x1f0) + 4))(param_1);
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*(int *)(in_ECX + 0x1f0) + 4))();
    return uVar2;
  }
  iVar1 = (**(code **)(*(int *)(in_ECX + 0x214) + 4))(param_1);
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*(int *)(in_ECX + 0x214) + 4))(param_1);
    return uVar2;
  }
  return 0;
}

