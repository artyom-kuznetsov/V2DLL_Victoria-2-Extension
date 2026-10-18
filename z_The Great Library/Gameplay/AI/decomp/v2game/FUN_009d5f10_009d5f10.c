// FUN_009d5f10 @ 009d5f10 body=[[009d5f10, 009d5fe9] [009d5fed, 009d6023]]


void FUN_009d5f10(int *param_1)

{
  void *pvVar1;
  size_t sVar2;
  char cVar3;
  int *in_EAX;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  
  if (in_EAX != param_1) {
    pvVar4 = (void *)*param_1;
    uVar5 = param_1[1] - (int)pvVar4 >> 1;
    pvVar1 = (void *)*in_EAX;
    if (uVar5 == 0) {
      if (pvVar1 != (void *)in_EAX[1]) {
        FID_conflict__memcpy(pvVar1,(void *)in_EAX[1],0);
        in_EAX[1] = (int)pvVar1;
        return;
      }
    }
    else {
      uVar6 = in_EAX[1] - (int)pvVar1 >> 1;
      if (uVar5 <= uVar6) {
        FID_conflict__memcpy(pvVar1,pvVar4,(param_1[1] - (int)pvVar4 >> 1) * 2);
        in_EAX[1] = *in_EAX + (param_1[1] - *param_1 >> 1) * 2;
        return;
      }
      if (uVar5 <= (uint)(in_EAX[2] - (int)pvVar1 >> 1)) {
        pvVar1 = (void *)((int)pvVar4 + uVar6 * 2);
        FID_conflict__memcpy((void *)*in_EAX,pvVar4,((int)pvVar1 - (int)pvVar4 >> 1) * 2);
        sVar2 = (param_1[1] - (int)pvVar1 >> 1) * 2;
        pvVar4 = FID_conflict__memcpy((void *)in_EAX[1],pvVar1,sVar2);
        in_EAX[1] = (int)((int)pvVar4 + sVar2);
        return;
      }
      if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(pvVar1);
      }
      cVar3 = FUN_009d6870();
      if (cVar3 != '\0') {
        sVar2 = (param_1[1] - *param_1 >> 1) * 2;
        pvVar4 = FID_conflict__memcpy((void *)*in_EAX,(void *)*param_1,sVar2);
        in_EAX[1] = (int)((int)pvVar4 + sVar2);
      }
    }
  }
  return;
}

