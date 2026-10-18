// FUN_005c02f0 @ 005c02f0 body=[[005c02f0, 005c0369]]


void FUN_005c02f0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *unaff_ESI;
  undefined1 local_8 [4];
  
  piVar1 = (int *)(**(code **)(*unaff_ESI + 0x30))(local_8,0);
  if (*piVar1 < param_1) {
    piVar1 = (int *)(**(code **)(*unaff_ESI + 0x30))(local_8,0);
    param_1 = *piVar1;
  }
  FUN_00401000(0x3f000000);
  iVar2 = FUN_00b31c00();
  if (param_1 < iVar2) {
    unaff_ESI[0xf] = iVar2;
    return;
  }
  unaff_ESI[0xf] = param_1;
  return;
}

