// FUN_00ad3aa0 @ 00ad3aa0 body=[[00ad3aa0, 00ad3ad9]]


void FUN_00ad3aa0(undefined4 param_1,char param_2)

{
  int in_ECX;
  undefined4 unaff_retaddr;
  
  if (param_2 == '\0') {
    *(undefined4 *)(in_ECX + 0x34) = param_1;
    return;
  }
  if (*(undefined4 **)(in_ECX + 0x34) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_ECX + 0x34))(1);
    *(undefined4 *)(in_ECX + 0x34) = unaff_retaddr;
    return;
  }
  *(undefined4 *)(in_ECX + 0x34) = param_1;
  return;
}

