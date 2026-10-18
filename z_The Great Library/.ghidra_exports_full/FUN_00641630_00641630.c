// FUN_00641630 @ 00641630 body=[[00641630, 00641697]]


void FUN_00641630(void)

{
  int in_EAX;
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  
  iVar1 = (**(code **)(*(int *)(in_ECX + 0x4d8) + 8))("LeftShield");
  (**(code **)(**(int **)(iVar1 + 0x94) + 0x14c))(*(undefined4 *)(in_EAX + 4));
  iVar1 = **(int **)(iVar1 + 0x94);
  uVar2 = FUN_0052fc10();
  (**(code **)(iVar1 + 0x150))(uVar2);
  return;
}

