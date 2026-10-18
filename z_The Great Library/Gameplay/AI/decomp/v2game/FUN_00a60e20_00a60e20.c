// FUN_00a60e20 @ 00a60e20 body=[[00a60e20, 00a60e87]]


void FUN_00a60e20(ushort param_1)

{
  int *unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 uStack_20;
  undefined4 local_10;
  uint local_c;
  
  local_c = (uint)param_1;
  uStack_20 = 0xffffffff;
  local_10 = 7;
  (**(code **)(*unaff_ESI + 0x14))(&local_10,8);
  *(ushort *)(unaff_ESI + 0x23) = param_1;
  *(undefined4 *)(unaff_ESI[7] + 0x40) = unaff_EDI;
  uStack_20 = 1;
  (**(code **)(*unaff_ESI + 0x14))(&uStack_20,8,0xffffffff,1);
  return;
}

