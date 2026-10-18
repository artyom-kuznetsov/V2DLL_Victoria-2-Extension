// FUN_007ec4c0 @ 007ec4c0 body=[[007ec4c0, 007ec636]]


char FUN_007ec4c0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  char cVar4;
  float *in_EAX;
  int *piVar5;
  int iVar6;
  int in_EDX;
  int *piVar7;
  int local_50 [12];
  float local_20;
  float local_1c;
  float local_18;
  int *local_c;
  
  fVar1 = *in_EAX;
  fVar2 = in_EAX[1];
  piVar5 = param_1 + 0x15;
  piVar7 = local_50;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar7 = *piVar5;
    piVar5 = piVar5 + 1;
    piVar7 = piVar7 + 1;
  }
  local_20 = local_20 - fVar1;
  local_1c = local_1c - fVar2;
  local_18 = local_18 - in_EAX[2];
  if ((float)(in_EDX + -400) < local_20) {
    do {
      local_20 = local_20 - (float)in_EDX;
    } while ((float)(in_EDX + -400) < local_20);
  }
  if (local_20 < -400.0) {
    do {
      local_20 = (float)in_EDX + local_20;
    } while (local_20 < -400.0);
  }
  pcVar3 = *(code **)(*param_1 + 0x13c);
  local_c = param_1 + 0x25;
  piVar5 = local_50;
  piVar7 = param_1 + 0x25;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar7 = *piVar5;
    piVar5 = piVar5 + 1;
    piVar7 = piVar7 + 1;
  }
  cVar4 = (*pcVar3)();
  (**(code **)(*param_1 + 0x144))(cVar4);
  if (cVar4 != '\0') {
    piVar5 = (int *)(**(code **)(*param_1 + 0x44))();
    if ((piVar5 != (int *)0x0) && ((char)param_3 != '\0')) {
      (**(code **)(*piVar5 + 0x20))(param_1);
    }
  }
  if (param_1[0x37] != 0) {
    FUN_007ec400(local_c,param_1[0x37],cVar4,param_2,param_3);
  }
  return cVar4;
}

