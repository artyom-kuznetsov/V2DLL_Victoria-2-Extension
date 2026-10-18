// FUN_00828bb0 @ 00828bb0 body=[[00828bb0, 00828c00]]


uint FUN_00828bb0(undefined4 param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if ((0 < *(int *)(in_EAX + 0xb4)) && (**(int **)(in_EAX + 0xac) != 0)) {
    uVar1 = FUN_0051b200(*(undefined4 *)(**(int **)(in_EAX + 0xac) + 0xdc),param_1);
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}

