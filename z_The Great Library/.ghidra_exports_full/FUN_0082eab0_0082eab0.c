// FUN_0082eab0 @ 0082eab0 body=[[0082eab0, 0082eb2d]]


void FUN_0082eab0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int in_EAX;
  int iVar1;
  undefined4 *unaff_ESI;
  undefined8 uVar2;
  
  *unaff_ESI = *(undefined4 *)(in_EAX + 0x10);
  unaff_ESI[1] = *(undefined4 *)(in_EAX + 0x14);
  unaff_ESI[2] = param_3;
  unaff_ESI[3] = param_4;
  unaff_ESI[4] = *(undefined4 *)(in_EAX + 0x60);
  unaff_ESI[5] = *(undefined4 *)(in_EAX + 100);
  unaff_ESI[6] = *(undefined4 *)(in_EAX + 0x68);
  unaff_ESI[7] = *(undefined4 *)(in_EAX + 0x6c);
  unaff_ESI[8] = param_1;
  unaff_ESI[9] = param_2;
  *(undefined1 *)(unaff_ESI + 10) = 1;
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

