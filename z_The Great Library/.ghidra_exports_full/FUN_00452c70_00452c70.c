// FUN_00452c70 @ 00452c70 body=[[00452c70, 00452cce]]


void FUN_00452c70(void)

{
  int iVar1;
  int in_EAX;
  undefined4 uVar2;
  float in_XMM0_Da;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(in_EAX + 0x104);
  if ((iVar1 != 0) && (DAT_00f092dc < in_XMM0_Da)) {
    uVar4 = 1;
    uVar3 = 1;
    FUN_00401000((in_XMM0_Da + 0.0005) * 1000.0);
    uVar2 = FUN_00b31c00();
    (**(code **)(*(int *)(iVar1 + 0x54) + 0x1c))(uVar2,uVar3,uVar4);
  }
  return;
}

