// FUN_006b5da0 @ 006b5da0 body=[[006b5da0, 006b5e43]]


void FUN_006b5da0(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  
  puVar2 = param_1;
  if (param_1 != param_2) {
    while (puVar2 = puVar2 + 1, puVar2 != param_2) {
      uVar1 = *puVar2;
      puVar5 = puVar2;
      if ((param_3 < 4) && (cVar3 = FUN_006a8a40(param_3), cVar3 != '\0')) {
        iVar4 = (int)puVar2 - (int)param_1 >> 2;
        FID_conflict__memcpy(puVar2 + (1 - iVar4),param_1,iVar4 * 4);
        *param_1 = uVar1;
      }
      else {
        while ((param_3 < 4 && (cVar3 = FUN_006a8a40(param_3), cVar3 != '\0'))) {
          *puVar5 = puVar5[-1];
          puVar5 = puVar5 + -1;
        }
        *puVar5 = uVar1;
      }
    }
  }
  return;
}

