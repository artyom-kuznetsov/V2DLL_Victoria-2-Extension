// FUN_00679a10 @ 00679a10 body=[[00679a10, 00679a63]]


void FUN_00679a10(void)

{
  int iVar1;
  char cVar2;
  int in_EAX;
  undefined4 *unaff_ESI;
  
  if (0 < (int)(*(int *)(in_EAX + 0xd84) - *(int *)(in_EAX + 0xd80) & 0xfffffffcU)) {
    cVar2 = (**(code **)(*(int *)**(undefined4 **)(in_EAX + 0xd80) + 0x1c))();
    if (cVar2 != '\0') goto LAB_00679a42;
  }
  FUN_0066bd60(0,0);
LAB_00679a42:
  iVar1 = **(int **)(in_EAX + 0xd80);
  *(undefined4 *)(iVar1 + 0x3bc) = *unaff_ESI;
  *(undefined4 *)(iVar1 + 0x3c0) = unaff_ESI[1];
  FUN_00702ed0(1);
  return;
}

