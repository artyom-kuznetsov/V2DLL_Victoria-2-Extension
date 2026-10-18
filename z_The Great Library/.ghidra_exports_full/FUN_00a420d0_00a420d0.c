// FUN_00a420d0 @ 00a420d0 body=[[00a420d0, 00a421e1]]


uint FUN_00a420d0(int param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  undefined8 *puVar4;
  float fVar5;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float fStack_10;
  float local_c;
  float fStack_8;
  
  FUN_00a41f00();
  uVar3 = 0;
  puVar4 = (undefined8 *)(param_1 + 0x288);
  while( true ) {
    local_14 = (float)*puVar4;
    fStack_10 = (float)((ulonglong)*puVar4 >> 0x20);
    local_c = (float)puVar4[1];
    if (local_14 <= 0.0) {
      fVar1 = local_20;
      fVar2 = local_28;
      if (fStack_10 <= 0.0) {
        fVar1 = local_20;
        fVar2 = local_1c;
      }
    }
    else {
      fVar1 = local_2c;
      fVar2 = local_28;
      if (fStack_10 <= 0.0) {
        fVar2 = local_1c;
      }
    }
    fVar5 = local_24;
    if (local_c <= 0.0) {
      fVar5 = local_18;
    }
    fStack_8 = (float)((ulonglong)puVar4[1] >> 0x20);
    if (0.0 < fVar2 * fStack_10 + fVar1 * local_14 + fVar5 * local_c + fStack_8) break;
    uVar3 = uVar3 + 1;
    puVar4 = puVar4 + 2;
    if (3 < (int)uVar3) {
      return CONCAT31((int3)(uVar3 >> 8),1);
    }
  }
  return uVar3 & 0xffffff00;
}

