// FUN_00414a30 @ 00414a30 body=[[00414a30, 00414a70]]


undefined4 FUN_00414a30(undefined4 param_1)

{
  int in_ECX;
  int in_EDX;
  
  switch(param_1) {
  case 1:
    return *(undefined4 *)(*(int *)(in_EDX + 0x44) + in_ECX * 4);
  case 2:
    return *(undefined4 *)(*(int *)(in_EDX + 0x54) + in_ECX * 4);
  case 3:
    return *(undefined4 *)(*(int *)(in_EDX + 100) + in_ECX * 4);
  case 4:
    return *(undefined4 *)(*(int *)(in_EDX + 0x34) + in_ECX * 4);
  default:
    return 0;
  }
}

