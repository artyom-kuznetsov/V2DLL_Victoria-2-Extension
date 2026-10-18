// FUN_008556c0 @ 008556c0 body=[[008556c0, 0085571a]]


void FUN_008556c0(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *in_ECX;
  
  puVar2 = (undefined4 *)(**(code **)(*in_ECX + 0x1b4))();
  puVar2 = (undefined4 *)*puVar2;
  while (puVar2 != (undefined4 *)0x0) {
    uVar1 = *puVar2;
    puVar2 = (undefined4 *)puVar2[2];
    (**(code **)(*(int *)in_ECX[0x10] + 0x1b8))(uVar1);
  }
  puVar2 = DAT_01318c10;
  if (DAT_01318c10 != (undefined4 *)0x0) {
    while ((int *)*puVar2 != in_ECX) {
      puVar2 = (undefined4 *)puVar2[2];
      if (puVar2 == (undefined4 *)0x0) {
        FUN_00825fd0();
        return;
      }
    }
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
  }
  FUN_00825fd0();
  return;
}

