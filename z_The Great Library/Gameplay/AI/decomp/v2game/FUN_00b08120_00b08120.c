// FUN_00b08120 @ 00b08120 body=[[00b08120, 00b081f7]]


void FUN_00b08120(float param_1,float param_2)

{
  int in_ECX;
  
  if (0.0 <= param_1) {
    if (1.0 < param_1) {
      param_1 = 1.0;
    }
  }
  else {
    param_1 = 0.0;
  }
  *(float *)(in_ECX + 0x28) = param_1;
  if (param_2 <= 0.0) {
    if (*(float *)(in_ECX + 0x2c) < param_1) {
      *(undefined4 *)(in_ECX + 0x1c) = 0;
    }
    *(float *)(in_ECX + 0x2c) = param_1;
    *(undefined4 *)(in_ECX + 0x30) = 0;
    if (((byte)*(ushort *)(in_ECX + 0x9c) >> 2 & 1) != 0) {
      *(ushort *)(in_ECX + 0x9c) = *(ushort *)(in_ECX + 0x9c) & 0xfffb;
      (**(code **)(*(int *)**(undefined4 **)(DAT_00f209e0 + 0x3c) + 0x38))();
    }
  }
  else {
    *(float *)(in_ECX + 0x30) = (param_1 - *(float *)(in_ECX + 0x2c)) / param_2;
    if (*(float *)(in_ECX + 0x2c) < param_1) {
      *(float *)(in_ECX + 0x1c) = param_2;
    }
    if (((byte)*(ushort *)(in_ECX + 0x9c) >> 2 & 1) == 0) {
      *(ushort *)(in_ECX + 0x9c) = *(ushort *)(in_ECX + 0x9c) | 4;
      (**(code **)(*(int *)**(undefined4 **)(DAT_00f209e0 + 0x3c) + 0x34))();
      return;
    }
  }
  return;
}

