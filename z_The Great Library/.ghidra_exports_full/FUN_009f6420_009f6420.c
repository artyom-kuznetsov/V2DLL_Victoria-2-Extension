// FUN_009f6420 @ 009f6420 body=[[009f6420, 009f646f]]


void FUN_009f6420(void)

{
  short sVar1;
  int *in_ECX;
  
  if ((short)in_ECX[0xe] == 0) {
    sVar1 = *(short *)((int)in_ECX + 0x3a);
    (**(code **)(*in_ECX + 0x78))();
    if (sVar1 != 0) {
      (**(code **)(*in_ECX + 0x80))();
    }
  }
  else {
    *(short *)(in_ECX + 0xe) = (short)in_ECX[0xe] + -1;
  }
  in_ECX[0xd] = (uint)*(ushort *)(in_ECX + 0xe);
  *(undefined1 *)((int)in_ECX + 0x4d) = 0;
  *(undefined1 *)(in_ECX + 0x1b) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  return;
}

