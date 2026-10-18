// FUN_00691480 @ 00691480 body=[[00691480, 00691515]]


void FUN_00691480(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  
  puVar3 = param_1;
  if (param_1 != param_2) {
    while (puVar3 = puVar3 + 1, puVar3 != param_2) {
      uVar1 = *puVar3;
      cVar4 = FUN_0067d840();
      if (cVar4 == '\0') {
        cVar4 = FUN_0067d840();
        puVar2 = puVar3;
        while (cVar4 != '\0') {
          *puVar2 = puVar2[-1];
          cVar4 = FUN_0067d840();
          puVar2 = puVar2 + -1;
        }
        *puVar2 = uVar1;
      }
      else {
        iVar5 = (int)puVar3 - (int)param_1 >> 2;
        FID_conflict__memcpy(puVar3 + (1 - iVar5),param_1,iVar5 * 4);
        *param_1 = uVar1;
      }
    }
  }
  return;
}

