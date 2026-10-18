// FUN_00b16700 @ 00b16700 body=[[00b16700, 00b16837]]


undefined4 FUN_00b16700(float *param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = 0xffffffff;
  fVar1 = *param_1;
  if (fVar1 < 0.0) {
    fVar1 = -fVar1;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  else {
    uVar4 = 0;
  }
  fVar2 = param_1[1];
  if (fVar2 < 0.0) {
    fVar2 = -fVar2;
  }
  if (fVar1 < fVar2) {
    uVar4 = 1;
    fVar1 = fVar2;
  }
  fVar2 = param_1[2];
  if (fVar2 < 0.0) {
    fVar2 = -fVar2;
  }
  if (fVar1 < fVar2) {
    uVar4 = 2;
    fVar1 = fVar2;
  }
  fVar2 = param_1[4];
  if (fVar2 < 0.0) {
    fVar2 = -fVar2;
  }
  if (fVar1 < fVar2) {
    uVar4 = 0;
    fVar1 = fVar2;
  }
  fVar2 = param_1[5];
  if (fVar2 < 0.0) {
    fVar2 = -fVar2;
  }
  if (fVar1 < fVar2) {
    uVar4 = 1;
    fVar1 = fVar2;
  }
  fVar2 = param_1[6];
  if (fVar2 < 0.0) {
    fVar2 = -fVar2;
  }
  if (fVar1 < fVar2) {
    uVar4 = 2;
    fVar1 = fVar2;
  }
  fVar2 = param_1[8];
  if (fVar2 < 0.0) {
    fVar2 = -fVar2;
  }
  if (fVar1 < fVar2) {
    uVar4 = 0;
    fVar1 = fVar2;
  }
  fVar2 = param_1[9];
  if (fVar2 < 0.0) {
    fVar2 = -fVar2;
  }
  if (fVar1 < fVar2) {
    uVar4 = 1;
    fVar1 = fVar2;
  }
  fVar2 = param_1[10];
  if (fVar2 < 0.0) {
    fVar2 = -fVar2;
  }
  uVar3 = 2;
  if (fVar2 <= fVar1) {
    uVar3 = uVar4;
  }
  return uVar3;
}

