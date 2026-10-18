// FUN_00651d20 @ 00651d20 body=[[00651d20, 00651d57]]


void FUN_00651d20(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x17e8);
  if (*(undefined4 **)(iVar1 + 300) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(iVar1 + 300))(1);
    *(undefined4 *)(iVar1 + 300) = param_1;
    return;
  }
  *(undefined4 *)(iVar1 + 300) = param_1;
  return;
}

