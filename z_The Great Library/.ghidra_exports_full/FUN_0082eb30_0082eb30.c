// FUN_0082eb30 @ 0082eb30 body=[[0082eb30, 0082ebb3]]


void FUN_0082eb30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int in_EAX;
  int iVar1;
  undefined4 *unaff_ESI;
  undefined8 uVar2;
  
  *unaff_ESI = *(undefined4 *)(in_EAX + 0x10);
  unaff_ESI[1] = *(undefined4 *)(in_EAX + 0x14);
  unaff_ESI[2] = param_3;
  unaff_ESI[3] = param_4;
  unaff_ESI[4] = *(undefined4 *)(in_EAX + 0x38);
  unaff_ESI[5] = *(undefined4 *)(in_EAX + 0x3c);
  unaff_ESI[6] = *(undefined4 *)(in_EAX + 0x40);
  unaff_ESI[7] = *(undefined4 *)(in_EAX + 0x44);
  unaff_ESI[8] = param_1;
  unaff_ESI[9] = param_2;
  *(undefined1 *)(unaff_ESI + 10) = 0;
  uVar2 = FUN_00b31c36();
  iVar1 = (int)((ulonglong)uVar2 >> 0x20);
  if (((int)unaff_ESI[9] <= iVar1) &&
     (((int)unaff_ESI[9] < iVar1 || ((uint)unaff_ESI[8] < (uint)uVar2)))) {
    unaff_ESI[2] = 0;
    unaff_ESI[3] = 0;
  }
  FUN_0082ec40(unaff_ESI[2],unaff_ESI[3]);
  return;
}

