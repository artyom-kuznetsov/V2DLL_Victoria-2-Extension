// FUN_00b199e0 @ 00b199e0 body=[[00b199e0, 00b19a26]]


int FUN_00b199e0(float param_1)

{
  int iVar1;
  float fVar2;
  uint3 uVar3;
  int in_ECX;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  do {
    uVar4 = 0;
    do {
      iVar1 = uVar4 + uVar5 * 4;
      if (uVar4 == uVar5) {
        fVar2 = 1.0 - *(float *)(in_ECX + iVar1 * 4);
      }
      else {
        fVar2 = *(float *)(in_ECX + iVar1 * 4);
      }
      fVar2 = ABS(fVar2);
      uVar3 = (uint3)(CONCAT22((short)((uint)iVar1 >> 0x10),
                               (ushort)(fVar2 < param_1) << 8 |
                               (ushort)(NAN(fVar2) || NAN(param_1)) << 10 |
                               (ushort)(fVar2 == param_1) << 0xe) >> 8);
      if (fVar2 >= param_1 && (fVar2 == param_1) == 0) {
        return (uint)uVar3 << 8;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 4);
    uVar5 = uVar5 + 1;
    if (3 < uVar5) {
      return CONCAT31(uVar3,1);
    }
  } while( true );
}

