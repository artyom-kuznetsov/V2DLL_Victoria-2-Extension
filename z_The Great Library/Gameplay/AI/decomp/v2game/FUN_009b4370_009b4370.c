// FUN_009b4370 @ 009b4370 body=[[009b4370, 009b43b2]]


void FUN_009b4370(void)

{
  undefined4 *puVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xdc) != 0) {
    FUN_0099be40(*(undefined4 *)(in_ECX + 0xb8));
  }
  for (puVar1 = *(undefined4 **)(in_ECX + 0x5c); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[2]) {
    (**(code **)(*(int *)*puVar1 + 0x54))();
  }
  return;
}

