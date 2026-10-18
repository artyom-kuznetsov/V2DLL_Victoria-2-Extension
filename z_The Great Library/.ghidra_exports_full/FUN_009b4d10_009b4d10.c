// FUN_009b4d10 @ 009b4d10 body=[[009b4d10, 009b4fc0]]


void FUN_009b4d10(float param_1)

{
  code *pcVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  float10 fVar7;
  
  iVar4 = (int)param_1;
  if (((*(int *)((int)param_1 + 8) == 0) && (*(int *)(in_ECX + 0x100) != 0)) &&
     (*(int *)((int)param_1 + 0x14) == 4)) {
    iVar5 = (**(code **)(*(int *)(in_ECX + -4) + 0x2c))();
    if (((*(int *)(iVar5 + 8) != 0) && (FUN_006a19e0(&param_1), *(char *)(in_ECX + 0x38) != '\0'))
       && (*(int *)(iVar4 + 0x14) == 4)) {
      pcVar1 = *(code **)(**(int **)(iVar4 + 0xc) + 0x54);
      if (*(char *)(in_ECX + 0x142) != '\0') {
        iVar5 = (*pcVar1)();
        param_1 = (float)iVar5 * -1.0;
        fVar7 = (float10)(**(code **)(*(int *)(*(int *)(in_ECX + 0x100) + 0x54) + 0x10))();
        iVar5 = *(int *)(*(int *)(in_ECX + 0x100) + 0x238);
        iVar2 = *(int *)(*(int *)(in_ECX + 0x100) + 0x234);
        iVar6 = (**(code **)(*(int *)(in_ECX + -4) + 0x2c))();
        fVar3 = (1.0 / (float)*(int *)(iVar6 + 8)) * param_1 + (float)fVar7;
        if ((float)iVar5 / 1000.0 < fVar3) {
          FUN_009cc710(*(undefined4 *)(in_ECX + 0x100));
          *(undefined1 *)(iVar4 + 0x18) = 1;
          return;
        }
        if (fVar3 < (float)iVar2 / 1000.0) {
          FUN_009cc710(*(undefined4 *)(in_ECX + 0x100));
          *(undefined1 *)(iVar4 + 0x18) = 1;
          return;
        }
        FUN_009cc710(*(undefined4 *)(in_ECX + 0x100));
        *(undefined1 *)(iVar4 + 0x18) = 1;
        return;
      }
      iVar5 = (*pcVar1)();
      param_1 = (float)iVar5 * -1.0;
      (**(code **)(*(int *)(*(int *)(in_ECX + 0x100) + 0x54) + 0x10))();
      if ((float)*(int *)(*(int *)(in_ECX + 0x100) + 0x238) / 1000.0 <= 0.0) {
        return;
      }
      FUN_009cc710(*(int *)(in_ECX + 0x100));
      *(undefined1 *)(iVar4 + 0x18) = 1;
    }
    *(undefined1 *)(iVar4 + 0x18) = 1;
  }
  return;
}

