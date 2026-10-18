// FUN_00b07e40 @ 00b07e40 body=[[00b07e40, 00b0801b]]


void FUN_00b07e40(float param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  ushort uVar4;
  float fVar5;
  char cVar6;
  int in_ECX;
  
  if ((*(ushort *)(in_ECX + 0x9c) >> 10 & 1) != 0) {
    FUN_00b08870(param_1);
    *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(in_ECX + 0x14);
    *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(in_ECX + 0x70);
    uVar4 = *(ushort *)(in_ECX + 0x9c);
    if (((byte)uVar4 >> 2 & 1) != 0) {
      fVar5 = param_1 * *(float *)(in_ECX + 0x30) + *(float *)(in_ECX + 0x2c);
      *(float *)(in_ECX + 0x2c) = fVar5;
      fVar1 = *(float *)(in_ECX + 0x30);
      fVar2 = *(float *)(in_ECX + 0x28);
      if (NAN(fVar1) || 0.0 < fVar1 == (fVar1 == 0.0)) {
        if (fVar5 < fVar2 != (fVar5 == fVar2)) {
          *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)(in_ECX + 0x28);
          *(ushort *)(in_ECX + 0x9c) = uVar4 & 0xfffb;
          (**(code **)(*(int *)**(undefined4 **)(DAT_00f209e0 + 0x3c) + 0x38))();
        }
      }
      else if (fVar5 >= fVar2) {
        *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)(in_ECX + 0x28);
        *(ushort *)(in_ECX + 0x9c) = uVar4 & 0xfffb;
        (**(code **)(*(int *)**(undefined4 **)(DAT_00f209e0 + 0x3c) + 0x38))();
      }
    }
    if (((((*(byte *)(in_ECX + 0x9c) & 1) == 0) &&
         (FUN_00b07b70(param_1), (*(ushort *)(in_ECX + 0x9c) >> 9 & 1) != 0)) &&
        ((*(byte *)(in_ECX + 0x9c) & 1) == 0)) &&
       ((*(float *)(in_ECX + 0x14) - *(float *)(in_ECX + 0x34) != 0.0 &&
        (*(float *)(in_ECX + 0x44) < *(float *)(in_ECX + 0x2c) !=
         (*(float *)(in_ECX + 0x44) == *(float *)(in_ECX + 0x2c)))))) {
      uVar3 = *(undefined4 *)(in_ECX + 0x14);
      param_1 = *(float *)(in_ECX + 0x34);
      if (*(int *)(in_ECX + 0x70) != *(int *)(in_ECX + 0x78)) {
        if (*(int *)(in_ECX + 0xa0) == 0) {
          FUN_00b10130(param_1,*(float *)(*(int *)(in_ECX + 0x8c) + 0x28) + 1e-05,
                       *(undefined4 *)(in_ECX + 0x90),in_ECX);
          param_1 = 0.0;
        }
        else {
          FUN_00b10130(0xb727c5ac,param_1,*(undefined4 *)(in_ECX + 0x90),in_ECX);
          param_1 = *(float *)(*(int *)(in_ECX + 0x8c) + 0x28);
        }
      }
      cVar6 = FUN_00ae1de0();
      if (cVar6 == '\0') {
        FUN_00b10130(param_1,uVar3,*(undefined4 *)(in_ECX + 0x90),in_ECX);
      }
    }
  }
  return;
}

