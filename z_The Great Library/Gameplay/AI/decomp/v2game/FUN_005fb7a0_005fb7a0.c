// FUN_005fb7a0 @ 005fb7a0 body=[[005fb7a0, 005fb7d7]]


void FUN_005fb7a0(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0xa0);
  if (*(undefined4 **)(iVar1 + 300) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(iVar1 + 300))(1);
    *(undefined4 *)(iVar1 + 300) = param_1;
    return;
  }
  *(undefined4 *)(iVar1 + 300) = param_1;
  return;
}

