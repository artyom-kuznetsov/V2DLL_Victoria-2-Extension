// FUN_00418aa0 @ 00418aa0 body=[[00418aa0, 00418b13]]


void FUN_00418aa0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_EAX;
  undefined4 *unaff_ESI;
  int unaff_EDI;
  
  unaff_ESI[1] = in_EAX;
  (**(code **)(*(int *)*unaff_ESI + 0x34))();
  (**(code **)(*(int *)*unaff_ESI + 0x84))(param_2);
  (**(code **)(*(int *)*unaff_ESI + 0x94))(param_3);
  if (*(int *)(*(int *)(unaff_EDI + 0x20d8) + *(int *)(param_1 + 0x58) * 4) != 0) {
    FUN_00644a70(unaff_EDI,*unaff_ESI,1);
  }
  (**(code **)(*(int *)*unaff_ESI + 0xb0))();
  (**(code **)(*(int *)*unaff_ESI + 0x144))(1);
  return;
}

