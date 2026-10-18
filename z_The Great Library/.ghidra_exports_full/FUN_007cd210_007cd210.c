// FUN_007cd210 @ 007cd210 body=[[007cd210, 007cd2c2]]


void FUN_007cd210(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  
  if ((param_1 != param_2) && (puVar6 = param_1 + 1, puVar6 != param_2)) {
    do {
      uVar1 = *puVar6;
      cVar4 = FUN_007c6830();
      if (cVar4 == '\0') {
        uVar2 = puVar6[-1];
        cVar4 = FUN_007c6830();
        puVar3 = puVar6;
        while (cVar4 != '\0') {
          *puVar3 = uVar2;
          uVar2 = puVar3[-2];
          cVar4 = FUN_007c6830();
          puVar3 = puVar3 + -1;
        }
        *puVar3 = uVar1;
      }
      else {
        iVar5 = (int)puVar6 - (int)param_1 >> 2;
        FID_conflict__memcpy(puVar6 + (1 - iVar5),param_1,iVar5 * 4);
        *param_1 = uVar1;
      }
      puVar6 = puVar6 + 1;
    } while (puVar6 != param_2);
  }
  return;
}

