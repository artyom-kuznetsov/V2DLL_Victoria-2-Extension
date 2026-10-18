// FUN_009c2650 @ 009c2650 body=[[009c2650, 009c2828]]


void FUN_009c2650(float param_1)

{
  float fVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  int *piVar5;
  float fVar6;
  float fVar7;
  short *psVar8;
  undefined4 *puVar9;
  int in_ECX;
  undefined4 *puVar10;
  bool bVar11;
  bool bVar12;
  float10 fVar13;
  undefined4 *local_8;
  
  if (*(char *)(in_ECX + 0x55) != '\0') {
    if (*(int *)(in_ECX + 0x68) != 0) {
      *(undefined1 *)(*(int *)(in_ECX + 0x68) + 0x55) = 1;
    }
    *(undefined2 *)(in_ECX + 0x54) = 1;
  }
  if (*(int *)(in_ECX + 0x68) != 0) {
    FUN_009c2650(param_1);
  }
  cVar2 = *(char *)(in_ECX + 0x54);
  if ((cVar2 == '\0') || (0.0 < *(float *)(in_ECX + 0x58))) {
    local_8 = *(undefined4 **)(in_ECX + 0x58);
    fVar13 = (float10)FUN_0040b340((float)local_8 - 0.5);
    fVar7 = DAT_00f092fc;
    fVar1 = (float)(((float10)0.699999988079071 - fVar13) * (float10)(param_1 * 10.0));
    if ((DAT_00f092fc <= (float)local_8) || (cVar2 != '\0')) {
      if ((float)local_8 <= 0.0) {
        return;
      }
      if (cVar2 == '\0') {
        return;
      }
      fVar1 = (float)local_8 - fVar1;
      fVar6 = 0.0;
      bVar12 = fVar1 == 0.0;
      bVar11 = fVar1 < 0.0;
    }
    else {
      fVar1 = (float)local_8 + fVar1;
      fVar6 = 1.0;
      bVar12 = fVar1 == 1.0;
      bVar11 = 1.0 < fVar1;
    }
    if (bVar11 || bVar12) {
      fVar1 = fVar6;
    }
    *(float *)(in_ECX + 0x58) = fVar1;
    *(float *)(in_ECX + 0x58) = fVar7;
    if (*(int *)(in_ECX + 0x2c) == 5) {
      uVar4 = *(undefined4 *)(in_ECX + 0x3c);
      psVar8 = (short *)(**(code **)(*(int *)(*(int *)(in_ECX + 0x30) + 0x18) + 0x3c))(&local_8);
      sVar3 = *psVar8;
      psVar8 = (short *)FUN_009c2030(uVar4);
      if ((int)*psVar8 + (int)sVar3 < 0) {
        *(undefined4 *)(in_ECX + 0x2c) = 6;
      }
    }
    *(float *)(in_ECX + 0x58) = fVar1;
    if (0 < *(int *)(in_ECX + 0x3c)) {
      if (fVar1 <= 0.0) {
        if ((0 < *(int *)(in_ECX + 0x3c)) && (fVar1 <= 0.0)) {
          for (puVar10 = *(undefined4 **)(in_ECX + 0x34); puVar10 != (undefined4 *)0x0;
              puVar10 = (undefined4 *)puVar10[0xd]) {
            (**(code **)(*(int *)*puVar10 + 0x38))();
          }
        }
      }
      else {
        puVar10 = *(undefined4 **)(in_ECX + 0x34);
        param_1 = 0.0;
        if (puVar10 != (undefined4 *)0x0) {
          do {
            piVar5 = (int *)*puVar10;
            local_8 = (undefined4 *)(*piVar5 + 200);
            puVar9 = (undefined4 *)FUN_009c2030(param_1);
            (*(code *)*local_8)(*puVar9);
            (**(code **)(*piVar5 + 0x34))();
            puVar10 = (undefined4 *)puVar10[0xd];
            param_1 = (float)((int)param_1 + 1);
          } while (puVar10 != (undefined4 *)0x0);
          return;
        }
      }
    }
  }
  return;
}

