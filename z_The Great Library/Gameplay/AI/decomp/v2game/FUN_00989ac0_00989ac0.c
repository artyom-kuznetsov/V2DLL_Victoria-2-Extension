// FUN_00989ac0 @ 00989ac0 body=[[00989ac0, 00989afc]]


void FUN_00989ac0(void)

{
  undefined4 *puVar1;
  undefined4 *in_EAX;
  undefined4 *puVar2;
  undefined1 local_8 [4];
  
  puVar2 = in_EAX;
  puVar1 = in_EAX;
  if (0xf < (uint)in_EAX[5]) {
    puVar2 = (undefined4 *)*in_EAX;
    puVar1 = (undefined4 *)*in_EAX;
  }
  if (0xf < (uint)in_EAX[5]) {
    in_EAX = (undefined4 *)*in_EAX;
  }
  if (in_EAX != (undefined4 *)((int)puVar2 + 1)) {
    FUN_0098ac30(local_8,(undefined4 *)((int)puVar2 + 1),puVar1);
  }
  return;
}

