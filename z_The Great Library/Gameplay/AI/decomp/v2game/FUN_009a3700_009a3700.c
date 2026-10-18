// FUN_009a3700 @ 009a3700 body=[[009a3700, 009a3760]]


undefined4 FUN_009a3700(undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int in_ECX;
  
  piVar1 = (int *)(**(code **)(*(int *)(in_ECX + 0x34) + 4))(param_1);
  uVar2 = (**(code **)(*piVar1 + 0x2c))(*(undefined4 *)(in_ECX + 0x30));
  FUN_0068f390();
  return uVar2;
}

