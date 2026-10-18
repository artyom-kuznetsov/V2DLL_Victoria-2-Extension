// FUN_006e10f0 @ 006e10f0 body=[[006e10f0, 006e116b] [006e1170, 006e11c5]]


void FUN_006e10f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char cVar5;
  undefined4 *puVar6;
  
  puVar4 = param_1;
  if (param_1 != param_2) {
    while (puVar4 = puVar4 + 2, puVar4 != param_2) {
      uVar2 = *puVar4;
      uVar3 = puVar4[1];
      cVar5 = FUN_006dda00(uVar2,uVar3,*param_1,param_1[1]);
      puVar6 = puVar4;
      if (cVar5 == '\0') {
        while( true ) {
          cVar5 = FUN_006dda00(uVar2,uVar3,puVar6[-2],puVar6[-1]);
          if (cVar5 == '\0') break;
          *puVar6 = puVar6[-2];
          puVar6[1] = puVar6[-1];
          puVar6 = puVar6 + -2;
        }
        *puVar6 = uVar2;
        puVar6[1] = uVar3;
      }
      else {
        if (param_1 != puVar4) {
          puVar6 = puVar4 + 1;
          do {
            puVar6[-1] = puVar6[-3];
            *puVar6 = puVar6[-2];
            puVar1 = puVar6 + -3;
            puVar6 = puVar6 + -2;
          } while (puVar1 != param_1);
        }
        *param_1 = uVar2;
        param_1[1] = uVar3;
      }
    }
  }
  return;
}

