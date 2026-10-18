// FUN_00ae1e30 @ 00ae1e30 body=[[00ae1e30, 00ae1e4a]]


void FUN_00ae1e30(void)

{
  int in_ECX;
  
  if (*(undefined4 **)(in_ECX + 0x2c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_ECX + 0x2c))(1);
  }
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  return;
}

