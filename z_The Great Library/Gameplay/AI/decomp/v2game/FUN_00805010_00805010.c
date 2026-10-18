// FUN_00805010 @ 00805010 body=[[00805010, 008050be]]


undefined8 * FUN_00805010(undefined8 *param_1)

{
  undefined8 *unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3c7c8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = *unaff_EDI;
  param_1[1] = unaff_EDI[1];
  param_1[2] = unaff_EDI[2];
  param_1[3] = unaff_EDI[3];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(unaff_EDI + 4);
  local_8 = 0;
  *(undefined4 *)(param_1 + 7) = 0xf;
  *(undefined4 *)((int)param_1 + 0x34) = 0;
  *(undefined1 *)((int)param_1 + 0x24) = 0;
  FUN_00408ed0((int)unaff_EDI + 0x24,0,0xffffffff);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(unaff_EDI + 8);
  *(undefined1 *)((int)param_1 + 0x44) = *(undefined1 *)((int)unaff_EDI + 0x44);
  *(undefined1 *)((int)param_1 + 0x45) = *(undefined1 *)((int)unaff_EDI + 0x45);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(unaff_EDI + 9);
  *(undefined8 *)((int)param_1 + 0x4c) = *(undefined8 *)((int)unaff_EDI + 0x4c);
  *(undefined4 *)((int)param_1 + 0x54) = *(undefined4 *)((int)unaff_EDI + 0x54);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(unaff_EDI + 0xb);
  *(undefined4 *)((int)param_1 + 0x5c) = *(undefined4 *)((int)unaff_EDI + 0x5c);
  ExceptionList = local_10;
  return param_1;
}

