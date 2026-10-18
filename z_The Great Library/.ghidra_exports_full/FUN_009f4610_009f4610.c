// FUN_009f4610 @ 009f4610 body=[[009f4610, 009f4679]]


void FUN_009f4610(undefined4 param_1)

{
  int *piVar1;
  int in_ECX;
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_009a2520(param_1);
  FUN_009a0940(param_1);
  local_10 = *(undefined4 *)(in_ECX + 0x40);
  local_c = *(undefined4 *)(in_ECX + 0x44);
  FUN_0099f020(&local_10);
  FUN_004013e0(param_1);
  piVar1 = *(int **)(in_ECX + 100);
  (**(code **)(*piVar1 + 0x18))();
  FUN_009a0940(param_1);
  (**(code **)(*piVar1 + 4))(param_1);
  return;
}

