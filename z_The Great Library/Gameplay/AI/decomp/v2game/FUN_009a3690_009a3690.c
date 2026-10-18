// FUN_009a3690 @ 009a3690 body=[[009a3690, 009a36f0]]


undefined4 FUN_009a3690(undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int in_ECX;
  
  piVar1 = (int *)(**(code **)(*(int *)(in_ECX + 0x34) + 4))(param_1);
  uVar2 = (**(code **)(*piVar1 + 0x30))(*(undefined4 *)(in_ECX + 0x30));
  FUN_0068f390();
  return uVar2;
}

