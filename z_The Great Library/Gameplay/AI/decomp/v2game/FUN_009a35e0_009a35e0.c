// FUN_009a35e0 @ 009a35e0 body=[[009a35e0, 009a363a]]


int FUN_009a35e0(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  
  (**(code **)(*(int *)(in_ECX + 0x34) + 4))(param_1);
  iVar1 = FUN_00a5ae20(*(undefined4 *)(in_ECX + 0x30),in_ECX);
  if (iVar1 != 0) {
    FUN_0068f390();
    return iVar1;
  }
  FUN_0068f390();
  return 0;
}

