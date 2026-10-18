// FUN_009a34f0 @ 009a34f0 body=[[009a34f0, 009a3555]]


undefined4 FUN_009a34f0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  
  (**(code **)(*(int *)(in_ECX + 0x34) + 4))(param_1);
  iVar1 = *(int *)(in_ECX + 0x30);
  uVar2 = FUN_00a584a0(iVar1,in_ECX,0,*(undefined4 *)(iVar1 + 0x6b9bc),
                       *(undefined4 *)(iVar1 + 0x6b9c0));
  FUN_0068f390();
  return uVar2;
}

