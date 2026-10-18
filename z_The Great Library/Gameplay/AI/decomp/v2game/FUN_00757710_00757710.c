// FUN_00757710 @ 00757710 body=[[00757710, 00757747]]


void FUN_00757710(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x1e8);
  if (*(undefined4 **)(iVar1 + 300) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(iVar1 + 300))(1);
    *(undefined4 *)(iVar1 + 300) = param_1;
    return;
  }
  *(undefined4 *)(iVar1 + 300) = param_1;
  return;
}

