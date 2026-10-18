// FUN_009eb440 @ 009eb440 body=[[009eb440, 009eb4c7]]


void FUN_009eb440(float param_1)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int *in_ECX;
  int iVar4;
  
  fVar2 = 0.0;
  if (((0.0 < param_1) && (fVar1 = param_1 * 0.5 + 0.5, 0.0 <= fVar1)) &&
     (fVar2 = DAT_00f092fc, fVar1 <= DAT_00f092fc)) {
    fVar2 = fVar1;
  }
  param_1 = fVar2;
  iVar4 = 0;
  if (0 < DAT_00fc0c60) {
    do {
      cVar3 = (**(code **)(*in_ECX + 0x68))(iVar4);
      if (cVar3 == '\0') {
        (**(code **)(*in_ECX + 0x58))(param_1,iVar4);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_00fc0c60);
  }
  return;
}

