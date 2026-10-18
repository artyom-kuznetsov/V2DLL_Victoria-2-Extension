// FUN_00aa9c70 @ 00aa9c70 body=[[00aa9c70, 00aa9c96]]


void FUN_00aa9c70(undefined4 param_1)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  for (piVar1 = (int *)*in_ECX; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    (**(code **)(*piVar1 + 4))(param_1);
  }
  return;
}

