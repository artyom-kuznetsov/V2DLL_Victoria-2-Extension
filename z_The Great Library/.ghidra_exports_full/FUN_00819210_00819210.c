// FUN_00819210 @ 00819210 body=[[00819210, 00819230]]


void FUN_00819210(short param_1)

{
  int iVar1;
  short sVar2;
  int *unaff_ESI;
  
  iVar1 = *unaff_ESI;
  sVar2 = (**(code **)(iVar1 + 0x68))();
  (**(code **)(iVar1 + 0x5c))(sVar2 + param_1);
  return;
}

