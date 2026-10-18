// FUN_00ad3ae0 @ 00ad3ae0 body=[[00ad3ae0, 00ad3b15]]


void FUN_00ad3ae0(undefined4 param_1,char param_2)

{
  int in_ECX;
  
  if (param_2 != '\0') {
    if (*(undefined4 **)(in_ECX + 0x30) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(in_ECX + 0x30))(1);
    }
    *(undefined4 *)(in_ECX + 0x30) = 0;
    *(undefined4 *)(in_ECX + 0x30) = param_1;
    return;
  }
  *(undefined4 *)(in_ECX + 0x30) = param_1;
  return;
}

