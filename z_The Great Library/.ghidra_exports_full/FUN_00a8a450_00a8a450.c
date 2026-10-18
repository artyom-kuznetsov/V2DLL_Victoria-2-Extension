// FUN_00a8a450 @ 00a8a450 body=[[00a8a450, 00a8a4cb]]


void FUN_00a8a450(void)

{
  int iVar1;
  int in_EAX;
  
  iVar1 = *(int *)(in_EAX + 0x18);
  if (((iVar1 != 5) && (iVar1 != 0)) && (iVar1 != 7)) {
    FUN_00a8a2a0();
    FUN_00a8a550();
    if (*(int *)(in_EAX + 0x18) == 4) {
      *(undefined4 *)(in_EAX + 0x18) = 5;
      return;
    }
    FUN_00a89ce0();
    FUN_00a8a360();
  }
  return;
}

