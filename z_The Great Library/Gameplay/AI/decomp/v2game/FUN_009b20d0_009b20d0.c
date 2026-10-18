// FUN_009b20d0 @ 009b20d0 body=[[009b20d0, 009b2117]]


undefined4 FUN_009b20d0(uint param_1)

{
  undefined4 *puVar1;
  char cVar2;
  uint in_ECX;
  
  if ((-(uint)(in_ECX != 4) & in_ECX) == param_1) {
    return 1;
  }
  puVar1 = *(undefined4 **)(in_ECX + 0x5c);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    cVar2 = (**(code **)(*(int *)*puVar1 + 0x58))(param_1);
    if (cVar2 != '\0') break;
    puVar1 = (undefined4 *)puVar1[2];
  }
  return 1;
}

